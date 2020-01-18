TEMPLATE = subdirs

SUBDIRS = RTIe_builder\
          RTIe_tests

HEADERS += \
    RTIe_builder/image_management.h

SOURCES += \
    RTIe_builder/image_management.cpp

CONFIG += qt

QT += widgets
