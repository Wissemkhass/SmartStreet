#include "promotion.h"
#include "ui_promotion.h"
#include"connection.h"
#include<qsqlquery.h>
#include<qmessagebox.h>
promotion::promotion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::promotion)
{
    ui->setupUi(this);
}

promotion::~promotion()
{
    delete ui;
}

void promotion::on_pushButton_clicked()
{ Connection c ;
    c.CreatConnection() ;
    QString b=ui->lineEdit->text();
    QSqlQuery q;
    if(q.exec("Select*from employee where id_employe='"+b+"'"))
    {
        int i=0;
        while (q.next()) {
            i++;
        }
        if(i==1)
        {
              q.prepare("update  employee set role=:role WHERE id_employe='"+b+"'");
              q.bindValue(":role","Admin");
              q.exec();
              QMessageBox::information(this,tr("Succes"),tr("employe modifie"));
        }
        if(i<1)
        {
            QMessageBox::critical(this,tr("ERROR"),tr("EMPLYE INEXISTANT!!!"));
        }
    }
  }


void promotion::on_pushButton_2_clicked()
{ SmartStreet *s=new SmartStreet();
    this->hide();
    s->show();
}
