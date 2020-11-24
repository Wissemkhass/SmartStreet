#include "fonctions1.h"
#include "fonction2.h"
#include "ui_fonctions1.h"
#include "smartstreet.h"
#include "ajout_employer.h"
#include "employe.h"
#include "connection.h"

fonctions1::fonctions1(QWidget *parent) :
    QWidget(parent),
    ui_fon_1(new Ui::fonctions1)
{
    Connection c;
    c.CreatConnection();
    ui_fon_1->setupUi(this);
}

fonctions1::~fonctions1()
{
    Connection c;
    c.CloseConnection();
    delete ui_fon_1;
}

void fonctions1::on_Ajouter_clicked()
{
    Ajout_Employer *a=new Ajout_Employer();
    this->hide();
    a->show();
}

void fonctions1::on_Return_clicked()
{
    SmartStreet *s=new SmartStreet();
    this->hide();
    s->show();
}

void fonctions1::on_Log_in_2_clicked()
{
    QString username=ui_fon_1->Username->text();
    QString password=ui_fon_1->Password->text();
    QSqlQuery q,q1;
    if(q.exec("Select*from employee where id_employe='"+username+"'and mdp='"+password+"' and role='Employe'"))
    {
        int i=0;
        while (q.next()) {
            i++;
        }
        if(i==1)
        {
           fonction2 *f=new fonction2();
           this->hide();
           f->show();
        }
        if(i<1)
        {
            QMessageBox::critical(this,tr("ERROR"),tr("username and password incorrect!!!"));
        }
    }
}


