TEMPLATE = app
TARGET = RTIeBuilder

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    image_Management.cpp \
    main.cpp \
    marble_detection.cpp \
    new_Project.cpp \
    new_Project_Settings.cpp \
    splash_Screen.cpp


RESOURCES += \
    test.qrc

HEADERS += \
    image_Management.h \
    marble_detection.h \
    new_Project.h \
    new_Project_Settings.h \
    splash_Screen.h

FORMS += \
    image_Management.ui \
    new_Project_Wizard.ui
