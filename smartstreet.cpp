#include "smartstreet.h"
#include "ui_smartstreet.h"
#include "log_in.h"
#include "fonctions1.h"
#include "affichage.h"

SmartStreet::SmartStreet(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SmartStreet)
{
    ui->setupUi(this);
}

SmartStreet::~SmartStreet()
{
    delete ui;
}

void SmartStreet::on_Admin_clicked()
{
    QSqlQuery q;
    Log_in *l=new Log_in();
    this->hide();
    l->show();
}

void SmartStreet::on_Employe_clicked()
{
    fonctions1 *l=new fonctions1();
    this->hide();
    l->show();
}

void SmartStreet::on_pushButton_clicked()
{
    affichage *a=new affichage();
    this->hide();
    a->show();
}
