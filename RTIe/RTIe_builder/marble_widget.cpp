#include "marble_widget.h"
#include "ui_marble_widget.h"
#include "marble.h"
#include "ui_system_ui.h"
#include "image_Management_Nui.h"
#include "image_Gatherer.h"
#include "splash_Screen.h"
#include "system_ui.h"

#include <tuple>
#include <vector>
#include <math.h>
#define _USE_MATH_DEFINES


#include <QtWidgets>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include <QDebug>
#include <QThread>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>


using namespace std;

// CONSTANT VALUES
#define CENTER_SCALE_FACTOR 0.3
#define SCROLL_AREA_HEIGHT 694.0
#define SCROLL_AREA_WIDTH 1044.0
#define CONTRAST_PIVOT_POINT 215
#define CONTRAST_SCALE 2
#define BORDER_SCALE_FACTOR 0.1

//|=======================================
//|
//|    PAGE CREATION AND SETUP FUNCTIONS
//|


///
/// \brief Page creation function - returns a "marble detection" page
/// \param parent window
///

marble_Widget::marble_Widget(QWidget *parent, QString base_String, QList<QListWidgetItem *> * icons) :
    QWidget(parent),
    ui(new Ui::marble_Widget)
{
    qInfo() << "Begin MD";

    ui->setupUi(this);


    marble_Selection_Screen = new QGraphicsScene(this);
    ui->marbleGraphicView->setScene(marble_Selection_Screen);
    marble_Selection_Screen->installEventFilter(this);

    qInfo() << base_String;
    this->base_Image = marble_Selection_Screen->addPixmap(QPixmap(splashScreen::project_Path+ "/images/wd/" + base_String));
    this->base_Image->setFlag(QGraphicsItem::ItemClipsChildrenToShape, true);
    this->base_Image->setZValue(-10);


    this->icons = icons;
}


marble_Widget::~marble_Widget()
{
    delete ui;
}


//////////////////////////////////////////////////////////////////////
///
/// \brief Updates the images displayed on screen originally done by painting over the base image
///
void marble_Widget::update_Main_Image()
{
    ui->marbleGraphicView->update();
}

///
/// \brief Updates the preview image where there is no marker and the focus is what would be selected
///
void marble_Widget::update_Preview_Image()
{
    bool blur = false;
    int rad = this->selected_Marble->getRadius();

    QPixmap base_Pix = this->base_Image->pixmap();
    QPainter *paint = new QPainter(&base_Pix);
    QPixmap target(rad * 2, rad * 2);

    paint = new QPainter(&target);
    tuple<int, int> pos = this->selected_Marble->getPosition();

    if (blur){
        QGraphicsBlurEffect *blur = new QGraphicsBlurEffect;
        blur->setBlurRadius(8);

        QPixmap blur_Pix = (applyEffectToImage(base_Pix, blur));


        paint->drawPixmap(-get<0>(pos), -get<1>(pos), blur_Pix);
        paint->fillRect(0,0,rad*2,rad*2,QColor(0,0,0,14));
    }
    else{
        paint->fillRect(QRect(0,0,rad*2,rad*2),QBrush(Qt::gray));
    }


    QRegion mask(QRect(0, 0, rad * 2, rad * 2), QRegion::Ellipse);
    paint->setClipRegion(mask);

    //base_Pix = QPixmap::fromImage(this->base_Image);
    paint->drawPixmap(-get<0>(pos), -get<1>(pos), base_Pix);


    ui->preivew_Label->clear();
    ui->preivew_Label->setPixmap(target);
    ui->preivew_Label->update();

    int brush_Size = int(rad / 6.0);
    QPen ellipseBrush = QPen(selected_Marble->getColour());
    ellipseBrush.setWidth(brush_Size);

    paint->setPen(ellipseBrush);

    paint->drawEllipse(brush_Size / 2, brush_Size / 2, (rad * 2) - (brush_Size), (rad * 2) - (brush_Size));

    ui->listWidget_2->item(marble_List.indexOf(selected_Marble))->setIcon(QIcon(target));

    paint->end();
}

void marble_Widget::inverted_Marker()
{


    ui->preivew_Label->clear();

    ui->preivew_Label->update();
}


// From::   https://stackoverflow.com/questions/23698114/how-can-i-apply-a-graphic-effect-to-the-image-in-qlistview
QImage marble_Widget::applyEffectToImage(QImage src, QGraphicsEffect *effect, int extent)
{
    if(src.isNull()) return QImage();   //No need to do anything else!
    if(!effect) return src;             //No need to do anything else!
    QGraphicsScene scene;
    QGraphicsPixmapItem item;
    item.setPixmap(QPixmap::fromImage(src));
    item.setGraphicsEffect(effect);
    scene.addItem(&item);
    QImage res(src.size()+QSize(extent*2, extent*2), QImage::Format_ARGB32);
    res.fill(Qt::transparent);
    QPainter ptr(&res);
    scene.render(&ptr, QRectF(), QRectF( -extent, -extent, src.width()+extent*2, src.height()+extent*2 ) );
    return res;
}

QPixmap marble_Widget::applyEffectToImage(QPixmap src, QGraphicsEffect *effect, int extent)
{
    if(src.isNull()) return QPixmap();   //No need to do anything else!
    if(!effect) return src;             //No need to do anything else!
    QGraphicsScene scene;
    QGraphicsPixmapItem item;
    item.setPixmap(src);
    item.setGraphicsEffect(effect);
    scene.addItem(&item);
    QImage res(src.size()+QSize(extent*2, extent*2), QImage::Format_ARGB32);
    res.fill(Qt::transparent);
    QPainter ptr(&res);
    scene.render(&ptr, QRectF(), QRectF( -extent, -extent, src.width()+extent*2, src.height()+extent*2 ) );
    return QPixmap::fromImage(res);
}

QString marble_Widget::load_Image_Icons()
{
    ui->listWidget->setViewMode(QListWidget::IconMode);
    ui->listWidget->setIconSize(QSize(100,50));
    ui->listWidget->setResizeMode(QListWidget::Adjust);

    QStringList path_List = image_Management_Nui::get_Working_Image_Paths();//*splashScreen::project_Path
    QStringListIterator file_Iterator(path_List);

    while (file_Iterator.hasNext())
    {
        QThread *thread = new QThread();
        image_Gatherer *ig = new image_Gatherer();
        ig->moveToThread( thread );

        QString path = file_Iterator.next().toLocal8Bit().constData(); //Path Location
        QFile current_Image(path);
        QFileInfo current_Image_Info(current_Image.fileName());
        QString file_Name(current_Image_Info.fileName());

        QObject::connect( thread, SIGNAL(started()), ig, SLOT(start()) );
        QObject::connect( ig, SIGNAL(finished(const QImage &, const QString &)), this, SLOT(add_Item_To_List(const QImage &, const QString &)));

        ig->setInput(file_Name);
        thread_Count++;
        thread->start();
    }
    return  file_Iterator.previous().toLocal8Bit().constData();
}

bool marble_Widget::eventFilter(QObject *object, QEvent *event)
{
    if (event->type() == QEvent::GraphicsSceneMouseRelease){
        ui->spin_Box_X->setValue(int(selected_Marble->x()));
        ui->spin_Box_Y->setValue(int(selected_Marble->y()));

        ui->horizontal_Slider_X->setValue(int(selected_Marble->x()));
        ui->horizontal_Slider_Y->setValue(int(selected_Marble->y()));
    }
    return QWidget::eventFilter( object, event );
}

void marble_Widget::showEvent(QShowEvent *ev)
{
    QWidget::showEvent(ev);

    if(first_Load){
        //this->base_Image->setPixmap(QPixmap::fromImage(QImage(this->load_Image_Icons())));
        for (QListWidgetItem * icon : *icons) {
            QListWidgetItem * ic = new QListWidgetItem(icon->text());
            ic->setIcon(icon->icon());
            ui->listWidget->addItem(ic);
        }

        this->reset_Image_Zoom();


        marble *new_Marble = new marble();
        this->marble_Selection_Screen->addItem(new_Marble);
        marble_List.append(new_Marble);
        selected_Marble = new_Marble;
        selected_Marble->setSelected(true);
        selected_Marble->setParentItem(base_Image);

        this->set_Maximums();

        QListWidgetItem *list_Icon = new QListWidgetItem("Marble 1");
        ui->listWidget_2->addItem(list_Icon);

        this->update_Preview_Image();

        first_Load = !first_Load;
    }
}

void marble_Widget::add_Item_To_List(QImage image, QString filename)
{
    qInfo() << "ITEM BEING ADDED FOR MARBLE: " << filename;
    QListWidgetItem *item = new QListWidgetItem(QIcon(QPixmap::fromImage(image)),filename);
    ui->listWidget->addItem(item);
    this->thread_Count--;

    if (thread_Count == 0){
        this->base_Image->pixmap() = QPixmap::fromImage(image);
        this->update_Main_Image();
        this->reset_Image_Zoom();
    }
}

//### TODO: --/--/-- ###
//ADD FUNCTIONALITY FOR SAVING AND LOADING VALUES FROM RTIE FILES


///
/// \brief Sets colour of selector to desired values for RGB
/// \param r value of red colour channel
/// \param g value of green colour channel
/// \param b value of blue colour channel
///
void marble_Widget::set_RGB(int r, int g, int b)
{
    this->selected_Marble->setColour(r,g,b);
}

void marble_Widget::reset_Image_Zoom()
{
    ui->marbleGraphicView->resetTransform();

    int w = ui->marbleGraphicView->viewport()->width();
    int h = ui->marbleGraphicView->viewport()->height();

    qreal s = fmin(w/float(base_Image->pixmap().width()),h/float(base_Image->pixmap().height()));

    ui->marbleGraphicView->scale(s, s);
}

void marble_Widget::image_Zoom(int percent)
{
    zoom_Percentage += percent;

    ui->marbleGraphicView->scale((100 + percent) / 100.0, (100 + percent) / 100.0);


    ui->zoom_In_Button->setEnabled(zoom_Percentage < 300);
    ui->zoom_Out_Button->setEnabled(zoom_Percentage > 33);
}

void marble_Widget::adjust_Scroll_Bar(QScrollBar *scrollBar, double factor)
{
    factor = factor / 100.0;
    scrollBar->setValue(int(factor * scrollBar->value()
                            + ((factor - 1) * scrollBar->pageStep()/2)));
}

void marble_Widget::on_spin_Box_X_valueChanged(int X)
{
    this->selected_Marble->setX(X);
    ui->horizontal_Slider_X->setValue(X);
    this->update_Main_Image();
    this->update_Preview_Image();
}

void marble_Widget::on_spin_Box_Y_valueChanged(int Y)
{
    this->selected_Marble->setY(Y);
    ui->horizontal_Slider_Y->setValue(Y);
    this->update_Main_Image();
    this->update_Preview_Image();
}

void marble_Widget::on_spin_Box_Radius_valueChanged(double radius)
{
    double delta_Radius = radius - selected_Marble->getRadius();

    this->selected_Marble->setRadius(radius);
    this->selected_Marble->setPosition(this->selected_Marble->x() - delta_Radius, this->selected_Marble->y() - delta_Radius);

    this->update_Main_Image();
    this->update_Preview_Image();
    this->set_Maximums();

    ui->spin_Box_X->setValue(this->selected_Marble->x());
    ui->spin_Box_Y->setValue(this->selected_Marble->y());
    ui->horizontal_Slider_X->setValue(this->selected_Marble->x());
    ui->horizontal_Slider_Y->setValue(this->selected_Marble->y());

    ui->horizontal_Slider_Radius->setValue(radius);
}

void marble_Widget::on_horizontal_Slider_X_valueChanged(int value)
{
    this->selected_Marble->setX(value);
    ui->spin_Box_X->setValue(value);
    this->update_Main_Image();
}

void marble_Widget::on_horizontal_Slider_Y_valueChanged(int value)
{
    this->selected_Marble->setY(value);
    ui->spin_Box_Y->setValue(value);
    this->update_Main_Image();
}

void marble_Widget::on_horizontal_Slider_Radius_valueChanged(int radius)
{
    double delta_Radius = radius - selected_Marble->getRadius();

    this->selected_Marble->setRadius(radius);
    this->selected_Marble->setPosition(this->selected_Marble->x() - delta_Radius, this->selected_Marble->y() - delta_Radius);

    this->update_Main_Image();
    this->update_Preview_Image();
    this->set_Maximums();

    ui->spin_Box_X->setValue(this->selected_Marble->x());
    ui->spin_Box_Y->setValue(this->selected_Marble->y());
    ui->horizontal_Slider_X->setValue(this->selected_Marble->x());
    ui->horizontal_Slider_Y->setValue(this->selected_Marble->y());

    ui->spin_Box_Radius->setValue(radius);
}

void marble_Widget::on_horizontal_Scroll_Bar_Red_valueChanged(int value)
{
    this->selected_Marble->setR(value);
    this->update_Main_Image();
}

void marble_Widget::on_horizontal_Scroll_Bar_Green_valueChanged(int value)
{
    this->selected_Marble->setG(value);
    this->update_Main_Image();
}

void marble_Widget::on_horizontal_Scroll_Bar_Blue_valueChanged(int value)
{
    this->selected_Marble->setB(value);
    this->update_Main_Image();
}

void marble_Widget::on_colour_Selector_Button_clicked()
{
    QColor new_Colour = QColorDialog::getColor(this->selected_Marble->getColour(), this );
    this->selected_Marble->setColour(new_Colour);

    ui->horizontal_Scroll_Bar_Red->setValue(new_Colour.red());
    ui->horizontal_Scroll_Bar_Green->setValue(new_Colour.green());
    ui->horizontal_Scroll_Bar_Blue->setValue(new_Colour.blue());
}

bool marble_Widget::load_File(const QString &fileName)
{
    QImageReader reader(fileName);
    reader.setAutoTransform(true);
    const QImage newImage = reader.read();
    if (newImage.isNull()) {
        QMessageBox::information(this, QGuiApplication::applicationDisplayName(),
                                 tr("Cannot load %1: %2")
                                 .arg(QDir::toNativeSeparators(fileName), reader.errorString()));
        return false;
    }
    base_Image->pixmap() = QPixmap::fromImage(newImage);

    setWindowFilePath(fileName);

    const QString message = tr("Opened \"%1\", %2x%3, Depth: %4")
        .arg(QDir::toNativeSeparators(fileName)).arg(base_Image->pixmap().width()).arg(base_Image->pixmap().height()).arg(base_Image->pixmap().depth());
    //statusBar()->showMessage(message);

    this->set_Maximums();
    this->update_Main_Image();
    this->reset_Image_Zoom();

    return true;
}

static void initializeImageFileDialog(QFileDialog &dialog, QFileDialog::AcceptMode acceptMode)
{
    static bool firstDialog = true;

    if (firstDialog) {
        firstDialog = false;
        const QStringList picturesLocations = QStandardPaths::standardLocations(QStandardPaths::PicturesLocation);
        dialog.setDirectory(picturesLocations.isEmpty() ? QDir::currentPath() : picturesLocations.last());
    }

    QStringList mimeTypeFilters;
    const QByteArrayList supportedMimeTypes = acceptMode == QFileDialog::AcceptOpen
        ? QImageReader::supportedMimeTypes() : QImageWriter::supportedMimeTypes();
    foreach (const QByteArray &mimeTypeName, supportedMimeTypes)
        mimeTypeFilters.append(mimeTypeName);
    mimeTypeFilters.sort();
    dialog.setMimeTypeFilters(mimeTypeFilters);
    dialog.selectMimeTypeFilter("image/jpeg");
    if (acceptMode == QFileDialog::AcceptSave)
        dialog.setDefaultSuffix("jpg");
}

///
/// \brief Used to trigger necessary steps when loading an image.
///
void marble_Widget::on_open_Button_clicked()
{
    QFileDialog dialog(this, tr("Open File"));
    initializeImageFileDialog(dialog, QFileDialog::AcceptOpen);

    while (dialog.exec() == QDialog::Accepted && !load_File(dialog.selectedFiles().first())) {};
}

///
/// \brief Triggered on button click, has main canvas zoom reset
///
void marble_Widget::on_zoom_Reset_Button_clicked()
{
    reset_Image_Zoom();
}

///
/// \brief Triggered on button click, has main canvas zoom in
///
void marble_Widget::on_zoom_In_Button_clicked()
{
    image_Zoom(20);
}

///
/// \brief Triggered on button click, has main canvas zoom out
///
void marble_Widget::on_zoom_Out_Button_clicked()
{
    image_Zoom(-20);
}

///
/// \brief Adjusts the maximum X and Y values when changing radius of selector
///
void marble_Widget::set_Maximums()
{
    ui->horizontal_Slider_X->setMaximum(this->base_Image->pixmap().width() - (selected_Marble->getRadius() * 2));
    ui->horizontal_Slider_Y->setMaximum(this->base_Image->pixmap().width() - (selected_Marble->getRadius() * 2));
}

///
/// \brief Performs contrast function on single channel of colour
/// \param c initial value of a pixel colour channel
/// \return shifted value of pixel colour channel
///
int pivot_Channel(int c)
{
    c -= CONTRAST_PIVOT_POINT;
    c *= CONTRAST_SCALE;
    c += CONTRAST_PIVOT_POINT;
    c = c > 255 ? 255 : c;
    c = c < 0 ? 0 : c;
    return c;
}

// ### TODO: 07/04/20 ###
// Change name of function to more appropriate name.
///
/// \brief Performs the contrast process on the currently selected image.
///
void marble_Widget::on_test_Button_clicked()
{
    QRgb pixel;
    QColor col;
    int r, g, b;

    qInfo()<<"Beginning Test"<<endl;
    //statusBar()->showMessage(QString("Beginning Light Spot Detection"));

    vector<tuple<int,int>> cluster_Points;

    QImage marble = ui->preivew_Label->pixmap()->toImage();


    for(int x = 0; x < marble.width(); x++)
    {
        for (int y = 0; y < marble.height(); y++) {
            pixel  = marble.pixel(x,y);
            col = QRgb(pixel);
            col.getRgb(&r, &g, &b);

            r = pivot_Channel(r);
            g = pivot_Channel(g);
            b = pivot_Channel(b);

            if ((r == g) and (g == b) and (b == 255))
            {
                cluster_Points.emplace_back(x ,y);
            }

            marble.setPixel(x, y, qRgb(r, g, b));
        }
    }

    int radius = this->selected_Marble->getRadius();
    double sum_X = 0;
    double sum_Y = 0;
    int count = 0;

    for (tuple<int, int> p : cluster_Points)
    {
        sum_X += get<0>(p);
        sum_Y += get<1>(p);
        count++;
    }
    sum_X /= count;
    sum_Y /= count;

    sum_X = int(sum_X);
    sum_Y = int(sum_Y);

    marble.setPixel(sum_X, sum_Y, qRgb(0, 255, 0));
    marble.setPixel(sum_X+1, sum_Y, qRgb(0, 255, 0));
    marble.setPixel(sum_X-1, sum_Y, qRgb(0, 255, 0));
    marble.setPixel(sum_X, sum_Y+1, qRgb(0, 255, 0));
    marble.setPixel(sum_X, sum_Y-1, qRgb(0, 255, 0));

    //statusBar()->showMessage(QString("X: %1, Y: %2").arg(QString::number(sum_X), QString::number(sum_Y)));
    qInfo() << "X" << sum_X;
    qInfo() << "Y" << sum_Y;
    qInfo() << "Radius" << radius;

    double C2 = pow((sum_X - radius),2) + pow((sum_Y - radius),2);
    double R2 = pow(radius, 2);

    double theta = acos((radius - sum_Y)/ sqrt(C2));
    theta = (sum_X < radius)? (2 * M_PI) - theta:theta;

    double phi =  acos(  ( sqrt(R2 - C2) ) / (radius)  );


    qInfo() << "Theta" << theta;

    qInfo() << "Phi" << phi;

    QPixmap base_Pix = QPixmap::fromImage(marble);
    ui->preivew_Label->setPixmap(base_Pix);
}

///
/// \brief When an image is double-clicked in the list of images, that images is selected as the image to use for marble selection
/// \param item Selected item (item that has been double-clicked)
///
void marble_Widget::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    QString image_Path = splashScreen::project_Path+ "/images/wd/" +item->text();
    this->base_Image->setPixmap(QPixmap::fromImage(QImage(image_Path)));
    this->update_Main_Image();
    this->reset_Image_Zoom();
}

// ### TODO: 06/04/20 ###
// Implement switching functionality, updating screen layout and where each image is displayed.
///
/// \brief Switches view between main image and preveiw image.
///
void marble_Widget::on_swap_Button_clicked()
{
    this->invert_Selector = !this->invert_Selector;

    if (invert_Selector){
        this->ui->horizontalSpacer_2->changeSize(0,20);
        this->ui->horizontalSpacer->changeSize(0,20);
    }else{
        this->ui->horizontalSpacer_2->changeSize(80,20);
        this->ui->horizontalSpacer->changeSize(80,20);
    }

    this->update_Main_Image();
    this->update_Preview_Image();
}

///
/// \brief Preview Image only updated on slider release. This function implements that functionality.
///
void marble_Widget::on_horizontal_Slider_X_sliderReleased()
{
    this->update_Preview_Image();
}

///
/// \brief Preview Image only updated on slider release. This function implements that functionality.
///
void marble_Widget::on_horizontal_Slider_Y_sliderReleased()
{
    this->update_Preview_Image();
}

// ### TODO: 06/04/20 ###
// Change name of function and object to something more appropriate
///
/// \brief Switches image used in previewer to an average of all the loaded images or back to a single image.
/// \param arg Used to determine if the checkbox has been set to one of two binary states.
///
void marble_Widget::on_checkBox_stateChanged(int arg)
{
    if(arg == 0)
    {
        QString image_Path = splashScreen::project_Path + "/images/wd/" + ui->listWidget->selectedItems()[0]->text();

        this->base_Image->setPixmap(QPixmap::fromImage(QImage(image_Path)));
    }
    else
    {
        // ### BUG: 06/04/20 ###
        // Cancel currently doesn't work. For some reason when adding the cancel functionality the popup no longer appears.
        // Will have to experiment more in the future.

        QPixmap* avg_Image = new QPixmap(base_Image->pixmap().size());
        QPainter *paint = new QPainter(avg_Image);
        const int COUNT = ui->listWidget->count();

        paint->setOpacity(1.0/ COUNT);

        QProgressDialog progress("Processing Images...", "Cancel", 0, COUNT, this);
        //progress.setWindowModality(Qt::WindowModal);

        for(int i = 0; i < COUNT; ++i)
        {
            progress.setValue(i);

            QString image_Path = splashScreen::project_Path + "/images/wd/" + ui->listWidget->item(i)->text();
            paint->drawImage(0,0,QImage(image_Path));

        }

        progress.setValue(COUNT);

        this->base_Image->setPixmap(*avg_Image);
        this->update_Main_Image();

    }
}

void marble_Widget::on_listWidget_2_itemDoubleClicked(QListWidgetItem *item)
{
    qInfo() <<  marble_List.indexOf(selected_Marble);
    int pos = ui->listWidget_2->row(item);

    selected_Marble->setSelected(false);
    selected_Marble = marble_List.at(pos);
    selected_Marble->setSelected(true);
    qInfo() <<  marble_List.indexOf(selected_Marble);
}

void marble_Widget::on_add_Marble_Button_clicked()
{
    marble *new_Marble = new marble();
    this->marble_Selection_Screen->addItem(new_Marble);
    marble_List.append(new_Marble);
    selected_Marble->setSelected(false);
    selected_Marble = new_Marble;
    selected_Marble->setSelected(true);
    selected_Marble->setParentItem(base_Image);

    QListWidgetItem *list_Icon = new QListWidgetItem("Marble 1");
    ui->listWidget_2->addItem(list_Icon);

    //qInfo() << "1" ;

    this->update_Preview_Image();

    //qInfo() << "2";

    this->set_Maximums();

    //qInfo() << "3";

    QColor marble_Colour = this->selected_Marble->getColour();

    ui->horizontal_Scroll_Bar_Red->setValue(marble_Colour.red());
    ui->horizontal_Scroll_Bar_Green->setValue(marble_Colour.green());
    ui->horizontal_Scroll_Bar_Blue->setValue(marble_Colour.blue());

    ui->spin_Box_X->setValue(int(selected_Marble->x()));
    ui->spin_Box_Y->setValue(int(selected_Marble->y()));

    ui->horizontal_Slider_X->setValue(int(selected_Marble->x()));
    ui->horizontal_Slider_Y->setValue(int(selected_Marble->y()));
}

void marble_Widget::on_remove_Marble_Button_clicked()
{

}
