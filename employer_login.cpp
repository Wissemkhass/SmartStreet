#include "employer_login.h"
#include "ui_employer_login.h"

Employer_login::Employer_login(QWidget *parent) :
    QWidget(parent),
    ui_log_in_1(new Ui::Employer_login)
{
    ui_log_in_1->setupUi(this);
}

Employer_login::~Employer_login()
{
    delete ui_log_in_1;
}
