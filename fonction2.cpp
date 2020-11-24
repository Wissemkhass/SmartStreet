#include "fonction2.h"
#include "ui_fonction2.h"
#include "fonctions1.h"

fonction2::fonction2(QWidget *parent) :
    QWidget(parent),
    ui_fonc2(new Ui::fonction2)
{
    ui_fonc2->setupUi(this);
}

fonction2::~fonction2()
{
    delete ui_fonc2;
}

void fonction2::on_pushButton_clicked()
{
    fonctions1 *f=new fonctions1();
    f->show();
    this->hide();
}
