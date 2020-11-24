#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <QWidget>

namespace Ui {
class fonctions;
}

class fonctions : public QWidget
{
    Q_OBJECT

public:
    explicit fonctions(QWidget *parent = 0);
    ~fonctions();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::fonctions *ui_fonc;
};

#endif // FONCTIONS_H
