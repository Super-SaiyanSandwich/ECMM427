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
    splash_Screen.cpp


RESOURCES += \
    test.qrc

HEADERS += \
    image_Management.h \
    marble_Detection.h \
    new_Project.h \
    new_Project_Settings.h \
    splash_Screen.h

FORMS += \
<<<<<<< HEAD
    marble_Detection.ui \
=======
    image_Management.ui \
>>>>>>> image_Manipulation_projectw_broken
    new_Project_Wizard.ui
