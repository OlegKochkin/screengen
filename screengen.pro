TEMPLATE = app
TARGET = screengen
DEPENDPATH += . src
INCLUDEPATH += . /usr/include/ffmpeg
QT += widgets

# Input
SOURCES += src/main.cpp src/qffmpeg.cpp src/qshadow.cpp
LIBS += -lavformat -lavcodec -lavutil -lswscale

DESTDIR = bin
OBJECTS_DIR = build

TRANSLATIONS += screengen_ru_RU.ts

INSTALLS += target translations
target.path = /usr/bin/
translations.path = /usr/share/screengen/translations/
translations.files += screengen_ru_RU.qm
