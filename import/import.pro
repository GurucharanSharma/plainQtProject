TEMPLATE = lib
CONFIG += plugin
QT += qml quick

DESTDIR = ../Charts
TARGET = $$qtLibraryTarget(chartsplugin)

HEADERS += piechart.h \
           pieslice.h \
           chartsplugin.h \
    chartsplugin.h

SOURCES += piechart.cpp \
           pieslice.cpp \
           chartsplugin.cpp

DESTPATH = $$[QT_INSTALL_EXAMPLE]/qml/tutorials/extending/chapter6-plugins/Charts

target.path = $$DESTPATH
qmldir.files = $$PWD/qmldir
qmldir.path = $$DESTPATH

INSTALLS += target qmldir

OTHER_FILES += qmldir

QMAKE_POST_LINK += $$QMAKE_COPY $$replace($$list($$quote($$PWD/qmldir) $$DESTDIR), /, $$QMAKE_DIR_SEP)
