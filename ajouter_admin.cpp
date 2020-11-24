#include "ajouter_admin.h"
#include "ui_ajouter_admin.h"
#include "ajout_employer.h"
#include "ui_ajout_employer.h"
#include "connection.h"
#include "employe.h"
#include "log_in.h"

Ajouter_admin::Ajouter_admin(QWidget *parent) :
    QWidget(parent),
    ui_ad(new Ui::Ajouter_admin)
{
    ui_ad->setupUi(this);
}

Ajouter_admin::~Ajouter_admin()
{
    delete ui_ad;
}

void Ajouter_admin::on_Return_login_clicked()
{
    Log_in *l=new Log_in();
    this->hide();
    l->show();
}

void Ajouter_admin::on_Ajout_admin_clicked()
{   SmartStreet *l=new SmartStreet();
    Employe *e=new Employe();
    e->ajouter_ad(ui_ad->Username_2->text(),ui_ad->Password_2->text(),ui_ad->Nom_2->text(),ui_ad->Prenom_2->text(),ui_ad->Num_tel_2->text());
    ui_ad->Username_2->clear();
    ui_ad->Password_2->clear();
    ui_ad->Nom_2->clear();
    ui_ad->Prenom_2->clear();
    ui_ad->Num_tel_2->clear();
    this->hide();
    l->show();
     QMessageBox::information(this,tr("sucess"),tr("COMPTE ADMIN ADDED"));
}
