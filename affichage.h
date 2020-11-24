#ifndef AFFICHAGE_H
#define AFFICHAGE_H

#include <QWidget>

namespace Ui {
class affichage;
}

class affichage : public QWidget
{
    Q_OBJECT

public:
    explicit affichage(QWidget *parent = 0);
    ~affichage();
    void set_affi_employe()
    {
        return on_pushButton_2_clicked();
    }

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::affichage *ui;
};

#endif // AFFICHAGE_H
