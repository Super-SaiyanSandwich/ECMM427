TEMPLATE = app
TARGET = RTIeBuilder

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    crop_Widget.cpp \
    cropped_area.cpp \
    deletion_dialog.cpp \
    fitter_Widget.cpp \
    image_Gatherer.cpp \
    image_Management_Nui.cpp \
    import_Widget.cpp \
    main.cpp \
    marble.cpp \
    marble_List_Item.cpp \
    marble_widget.cpp \
    new_Project.cpp \
    new_Project_Settings.cpp \
    project_Wizard.cpp \
    splash_Screen.cpp \
    system_ui.cpp


RESOURCES += \
    test.qrc

HEADERS += \
    crop_Widget.h \
    cropped_area.h \
    deletion_dialog.h \
    fitter_Widget.h \
    image_Gatherer.h \
    image_Management_Nui.h \
    import_Widget.h \
    marble.h \
    marble_List_Item.h \
    marble_widget.h \
    new_Project.h \
    new_Project_Settings.h \
    project_Wizard.h \
    splash_Screen.h \
    system_ui.h

FORMS += \
    crop_Widget.ui \
    deletion_dialog.ui \
    fitter_Widget.ui \
    import_Widget.ui \
    marble_widget.ui \
    project_Wizard.ui \
    system_ui.ui

DISTFILES +=

mac {
    QMAKE_CXXFLAGS += --coverage
    QMAKE_LFLAGS += --coverage
}
