TEMPLATE = app
TARGET = RTIeBuilder

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    image_Management.cpp \
    image_Gatherer.cpp \
    image_Management_Nui.cpp \
    main.cpp \
    marble_Detection.cpp \
    new_Project.cpp \
    new_Project_Settings.cpp \
    new_Project_Wizard.cpp \
    splash_Screen.cpp \
    system_ui.cpp \
    wizardpage.cpp\
    testwizard.cpp


RESOURCES += \
    test.qrc

HEADERS += \
    image_Management.h \
    image_Gatherer.h \
    image_Management_Nui.h \
    marble_Detection.h \
    new_Project.h \
    new_Project_Settings.h \
    new_Project_Wizard.h \
    splash_Screen.h \
    system_ui.h \
    wizardpage.h\
    testwizard.h

FORMS += \
    marble_Detection.ui \
    new_Project_Wizard.ui \
    image_Management.ui \
    system_ui.ui \
    wizardpage.ui\
    testwizard.ui


