#-------------------------------------------------
#
# Project created by QtCreator 2016-11-18T22:46:53
#
#-------------------------------------------------

QT       += core gui
QT       +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Final
TEMPLATE = app


SOURCES += main.cpp\
        smartstreet.cpp \
    log_in.cpp \
    connection.cpp \
    employe.cpp \
    ajout_employer.cpp \
    fonctions.cpp \
    fonctions1.cpp \
    fonction2.cpp \
    ajouter_admin.cpp \
    affichage.cpp \
    supprimer_employe.cpp \
    promotion.cpp

HEADERS  += smartstreet.h \
    log_in.h \
    connection.h \
    employe.h \
    ajout_employer.h \
    fonctions.h \
    fonctions1.h \
    fonction2.h \
    ajouter_admin.h \
    affichage.h \
    supprimer_employe.h \
    promotion.h

FORMS    += smartstreet.ui \
    log_in.ui \
    ajout_employer.ui \
    fonctions.ui \
    fonctions1.ui \
    fonction2.ui \
    ajouter_admin.ui \
    affichage.ui \
    supprimer_employe.ui \
    promotion.ui \
    ajout_radar.ui

RESOURCES += \
    resource.qrc

