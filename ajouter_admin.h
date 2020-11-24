#ifndef AJOUTER_ADMIN_H
#define AJOUTER_ADMIN_H

#include <QWidget>

namespace Ui {
class Ajouter_admin;
}

class Ajouter_admin : public QWidget
{
    Q_OBJECT

public:
    explicit Ajouter_admin(QWidget *parent = 0);
    ~Ajouter_admin();

private slots:
    void on_Return_login_clicked();

    void on_Ajout_admin_clicked();

private:
    Ui::Ajouter_admin *ui_ad;
};

#endif // AJOUTER_ADMIN_H
