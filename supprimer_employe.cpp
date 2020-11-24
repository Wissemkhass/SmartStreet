#include "supprimer_employe.h"
#include "ui_supprimer_employe.h"
#include "connection.h"
#include "affichage.h"

supprimer_employe::supprimer_employe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::supprimer_employe)
{
    ui->setupUi(this);
}

supprimer_employe::~supprimer_employe()
{
    delete ui;
}

void supprimer_employe::on_pushButton_clicked()
{
    Connection c ;
    c.CreatConnection() ;
    QString b=ui->lineEdit->text();
    QSqlQuery q1;
    QSqlQuery q2;

    if(q1.exec("Select*from employee where id_employe='"+b+"'"))
    {
        int i=0;
        while (q1.next()) {
            i++;
        }
        if(i==1)
        {
            q2.prepare("DELETE FROM employee WHERE ID_EMPLOYE=:ID_EMPLOYE");
            q2.bindValue(":ID_EMPLOYE",ui->lineEdit->text());
            q2.exec();
            QMessageBox::information(this,tr("Succes"),tr("employe supprimé"));
        }
        if(i<1)
        {
            QMessageBox::critical(this,tr("ERROR"),tr("Employe not found!!!"));
        }
    }

}

void supprimer_employe::on_pushButton_2_clicked()
{
    affichage *a=new affichage ;
    a->show();
    this->hide();

}
