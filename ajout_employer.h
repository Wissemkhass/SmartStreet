#ifndef AJOUT_EMPLOYER_H
#define AJOUT_EMPLOYER_H
#include <QWidget>

namespace Ui {
class Ajout_Employer;
}

class Ajout_Employer : public QWidget
{
    Q_OBJECT

public:
    explicit Ajout_Employer(QWidget *parent = 0);
    ~Ajout_Employer();

private slots:
    void on_Ajout_emp_clicked();

    void on_Return_login_clicked();

private:
    Ui::Ajout_Employer *ui_ajout;
};

#endif // AJOUT_EMPLOYER_H
