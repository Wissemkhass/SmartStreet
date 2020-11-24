#include "ajout_employer.h"
#include "ui_ajout_employer.h"
#include "connection.h"
#include "employe.h"
#include "log_in.h"
#include "fonctions1.h"

Ajout_Employer::Ajout_Employer(QWidget *parent) :
    QWidget(parent),
    ui_ajout(new Ui::Ajout_Employer)
{
    ui_ajout->setupUi(this);
    Connection c;
    c.CreatConnection();
}

Ajout_Employer::~Ajout_Employer()
{
    Connection c;
    c.CloseConnection(); delete ui_ajout;
}

void Ajout_Employer::on_Ajout_emp_clicked()
{     SmartStreet *l=new SmartStreet();
    Employe *e=new Employe();
    e->ajouter_emp(ui_ajout->Username->text(),ui_ajout->Password->text(),ui_ajout->Nom->text(),ui_ajout->Prenom->text(),ui_ajout->Num_tel->text());
    ui_ajout->Username->clear();
    ui_ajout->Password->clear();
    ui_ajout->Nom->clear();
    ui_ajout->Prenom->clear();
    ui_ajout->Num_tel->clear();
    this->hide();
      l->show();

     QMessageBox::information(this,tr("sucess"),tr("COMPTE EMPLOYER SAVED"));
}

void Ajout_Employer::on_Return_login_clicked()
{
    fonctions1 *l=new fonctions1();
    this->hide();
    l->show();
}
