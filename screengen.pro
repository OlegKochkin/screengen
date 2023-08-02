TEMPLATE = app
TARGET = screengen
DEPENDPATH += . src
INCLUDEPATH += . /usr/include/ffmpeg

# Input
SOURCES += src/main.cpp src/qffmpeg.cpp src/qshadow.cpp
LIBS += -lavformat -lavcodec -lavutil -lswscale

DESTDIR = bin
OBJECTS_DIR = build

TRANSLATIONS += screengen_ru_RU.ts

INSTALLS += target translations sg_ru
target.path = /usr/bin/
translations.path = /usr/share/screengen/translations/
translations.files += screengen_ru_RU.qm

sg_ru.path = /usr/bin
sg_ru.files += screengen-ru
