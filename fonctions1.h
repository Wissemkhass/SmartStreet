#ifndef FONCTIONS1_H
#define FONCTIONS1_H

#include <QWidget>

namespace Ui {
class fonctions1;
}

class fonctions1 : public QWidget
{
    Q_OBJECT

public:
    explicit fonctions1(QWidget *parent = 0);
    ~fonctions1();

private slots:
    void on_Ajouter_clicked();

    void on_Return_clicked();

    void on_Log_in_2_clicked();


private:
    Ui::fonctions1 *ui_fon_1;
};

#endif // FONCTIONS1_H
