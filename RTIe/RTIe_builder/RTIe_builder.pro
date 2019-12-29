TEMPLATE = app
TARGET = RTIeBuilder

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    new_Project.cpp \
    new_Project_Settings.cpp \
    splash_screen.cpp


RESOURCES += \
    test.qrc

HEADERS += \
    new_Project.h \
    new_Project_Settings.h \
    splash_screen.h
