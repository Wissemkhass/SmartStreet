#include "affichage.h"
#include "ui_affichage.h"
#include "connection.h"
#include <QSqlQueryModel>
#include "smartstreet.h"

affichage::affichage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::affichage)
{
    ui->setupUi(this);
}

affichage::~affichage()
{
    delete ui;
}

void affichage::on_pushButton_clicked()
{
        Connection c;
        c.CreatConnection();
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT id_employe,NOM,PRENOM,ROLE FROM employee");
        ui->tableView->setModel(model);
}

void affichage::on_pushButton_4_clicked()
{
    SmartStreet *s=new SmartStreet();
    this->hide();
    s->show();
}

void affichage::on_pushButton_2_clicked()
{
    Connection c;
    c.CreatConnection();
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id_employe,NOM,PRENOM,ROLE FROM employee where role='Employe' ");
    ui->tableView->setModel(model);
}

void affichage::on_pushButton_3_clicked()
{
    Connection c;
    c.CreatConnection();
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT id_employe,NOM,PRENOM,ROLE FROM employee where role='Admin' ");
    ui->tableView->setModel(model);
}
