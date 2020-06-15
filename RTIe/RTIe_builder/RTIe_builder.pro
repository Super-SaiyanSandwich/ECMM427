TEMPLATE = app
TARGET = RTIeBuilder

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    image_Gatherer.cpp \
    image_Management_Nui.cpp \
    main.cpp \
    marble.cpp \
    marble_Detection.cpp \
    new_Project.cpp \
    new_Project_Settings.cpp \
    project_Wizard.cpp \
    ptm_fitter.cpp \
    splash_Screen.cpp \
    system_ui.cpp


RESOURCES += \
    test.qrc

HEADERS += \
    image_Gatherer.h \
    image_Management_Nui.h \
    marble.h \
    marble_Detection.h \
    new_Project.h \
    new_Project_Settings.h \
    project_Wizard.h \
    ptm_fitter.h \
    splash_Screen.h \
    system_ui.h

FORMS += \
    marble_Detection.ui \
    project_Wizard.ui \
    ptm_fitter.ui \
    system_ui.ui


