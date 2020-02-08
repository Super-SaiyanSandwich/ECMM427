TEMPLATE = app
TARGET = RTIeBuilder

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    image_Management.cpp \
    main.cpp \
    marble_Detection.cpp \
    new_Project.cpp \
    new_Project_Settings.cpp \
    new_Project_Wizard.cpp \
    splash_Screen.cpp \
    system_ui.cpp


RESOURCES += \
    test.qrc

HEADERS += \
    image_Management.h \
    marble_Detection.h \
    new_Project.h \
    new_Project_Settings.h \
    new_Project_Wizard.h \
    splash_Screen.h \
    system_ui.h

FORMS += \
    marble_Detection.ui \
    new_Project_Wizard.ui \
    image_Management.ui \
    system_ui.ui

DISTFILES += \
    img/image1.jpg \
    img/image10.jpg \
    img/image11.jpg \
    img/image12.jpg \
    img/image13.jpg \
    img/image14.jpg \
    img/image15.jpg \
    img/image2.jpg \
    img/image3.jpg \
    img/image4.jpg \
    img/image5.jpg \
    img/image6.jpg \
    img/image7.jpg \
    img/image8.jpg \
    img/image9.jpg
