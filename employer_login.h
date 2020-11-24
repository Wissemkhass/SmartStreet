#ifndef EMPLOYER_LOGIN_H
#define EMPLOYER_LOGIN_H

#include <QWidget>

namespace Ui {
class Employer_login;
}

class Employer_login : public QWidget
{
    Q_OBJECT

public:
    explicit Employer_login(QWidget *parent = 0);
    ~Employer_login();

private:
    Ui::Employer_login *ui_log_in_1;
};

#endif // EMPLOYER_LOGIN_H
