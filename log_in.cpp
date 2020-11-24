#include "log_in.h"
#include "ui_log_in.h"
#include "smartstreet.h"
#include "employe.h"
#include "connection.h"
#include "ajouter_admin.h"
#include "fonctions.h"



Log_in::Log_in(QWidget *parent) :
    QWidget(parent),
    ui_log(new Ui::Log_in)
{
    ui_log->setupUi(this);
    Connection c;
    c.CreatConnection();
}

Log_in::~Log_in()
{
    Connection c;
    c.CloseConnection();
    delete ui_log;
}

void Log_in::on_Return_clicked()
{
    SmartStreet *s=new SmartStreet();
    this->hide();
    s->show();
}


void Log_in::on_Log_in_2_clicked()
{
  QString username=ui_log->Username->text();
  QString password=ui_log->Password->text();
  QSqlQuery q;
  if(q.exec("Select*from employee where id_employe='"+username+"'and mdp='"+password+"' and role='Admin'"))
  {
      int i=0;
      while (q.next()) {
          i++;
      }
      if(i==1)
      {
         fonctions *f=new fonctions();
         this->hide();
         f->show();
      }
      if(i<1)
      {
          QMessageBox::critical(this,tr("ERROR"),tr("username and password incorrect!!!"));
      }
  }
}

void Log_in::on_Ajouter_clicked()
{
    Ajouter_admin *a=new Ajouter_admin();
    this->hide();
    a->show();
}
