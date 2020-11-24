#include "fonctions.h"
#include "ui_fonctions.h"
#include "supprimer_employe.h"
#include "log_in.h"
#include "promotion.h"

fonctions::fonctions(QWidget *parent) :
    QWidget(parent),
    ui_fonc(new Ui::fonctions)
{
    ui_fonc->setupUi(this);
}

fonctions::~fonctions()
{
    delete ui_fonc;
}

void fonctions::on_pushButton_clicked()
{
        supprimer_employe *s=new supprimer_employe() ;
        s->show();

}

void fonctions::on_pushButton_2_clicked()
{
    Log_in *a=new Log_in();
    a->show();
    this->hide();
}

void fonctions::on_pushButton_3_clicked()
{
    promotion *p=new promotion();
    p->show();
    this->hide();
}
