QT += testlib \
    widgets
QT += gui
CONFIG += qt warn_on depend_includepath testcase\
          console

TARGET = RTIeBuilder #CodeCoverageExample

# --coverage option is synonym for: -fprofile-arcs -ftest-coverage -lgcov
QMAKE_CXXFLAGS += --coverage
QMAKE_LFLAGS += --coverage

TEMPLATE = app

SOURCES +=  tst_rtie_tests.cpp \
    test_suite.cpp\
    ../RTIe_builder/crop_Widget.cpp \
    ../RTIe_builder/cropped_area.cpp \
    ../RTIe_builder/fitter_Widget.cpp \
    ../RTIe_builder/image_Gatherer.cpp \
    ../RTIe_builder/image_Management_Nui.cpp \
    ../RTIe_builder/import_Widget.cpp \
    ../RTIe_builder/marble.cpp \
    ../RTIe_builder/marble_List_Item.cpp \
    ../RTIe_builder/marble_widget.cpp \
    ../RTIe_builder/new_Project.cpp \
    ../RTIe_builder/new_Project_Settings.cpp \
    ../RTIe_builder/project_Wizard.cpp \
    ../RTIe_builder/splash_Screen.cpp \
    ../RTIe_builder/system_ui.cpp

HEADERS += \
    test_suite.h\
    ../RTIe_builder/crop_Widget.h \
    ../RTIe_builder/cropped_area.h \
    ../RTIe_builder/fitter_Widget.h \
    ../RTIe_builder/image_Gatherer.h \
    ../RTIe_builder/image_Management_Nui.h \
    ../RTIe_builder/import_Widget.h \
    ../RTIe_builder/marble.h \
    ../RTIe_builder/marble_List_Item.h \
    ../RTIe_builder/marble_widget.h \
    ../RTIe_builder/new_Project.h \
    ../RTIe_builder/new_Project_Settings.h \
    ../RTIe_builder/project_Wizard.h \
    ../RTIe_builder/splash_Screen.h \
    ../RTIe_builder/system_ui.h


FORMS += \
    ../RTIe_builder/crop_Widget.ui \
    ../RTIe_builder/fitter_Widget.ui \
    ../RTIe_builder/import_Widget.ui \
    ../RTIe_builder/marble_widget.ui \
    ../RTIe_builder/project_Wizard.ui \
    ../RTIe_builder/system_ui.ui

#RESOURCES += \
#    test.qrc





#DISTFILES +=

#mac {
#    QMAKE_CXXFLAGS += --coverage
#    QMAKE_LFLAGS += --coverage
#}
