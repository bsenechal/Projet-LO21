#-------------------------------------------------
#
# Project created by QtCreator 2014-05-02T09:08:31
#
#-------------------------------------------------
QT       += core
QT       += core gui
QT       += sql # On rajoute SQL
QT       -= gui # On enlève la GUI

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UTProfiler
TEMPLATE = app


SOURCES += \
    liste_uv.cpp \
    main.cpp \
    dbmanager.cpp \
    uvediteur.cpp \
    uvmanager.cpp \
    uv.cpp \
    categorie.cpp \
    connexion.cpp \
    accueil.cpp \
    mondossier.cpp \
    inscription.cpp

HEADERS  += \
    liste_uv.h \
    dbmanager.h \
    uvediteur.h \
    uvmanager.h \
    uv.h \
    categorie.h \
    utprofilerexception.h \
    connexion.h \
    accueil.h \
    mondossier.h \
    inscription.h \
    formulaire.h

FORMS    += \
    liste_uv.ui \
    uvediteur.ui \
    connexion.ui \
    accueil.ui \
    mondossier.ui \
    inscription.ui

OTHER_FILES += \
    UTProfiler
