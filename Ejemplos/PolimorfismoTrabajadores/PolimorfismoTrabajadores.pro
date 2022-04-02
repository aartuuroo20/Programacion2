TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        doctor.cpp \
        main.cpp \
        policeman.cpp \
        worker.cpp

HEADERS += \
    doctor.h \
    policeman.h \
    worker.h
