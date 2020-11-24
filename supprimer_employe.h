#ifndef SUPPRIMER_EMPLOYE_H
#define SUPPRIMER_EMPLOYE_H

#include <QWidget>

namespace Ui {
class supprimer_employe;
}

class supprimer_employe : public QWidget
{
    Q_OBJECT

public:
    explicit supprimer_employe(QWidget *parent = 0);
    ~supprimer_employe();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::supprimer_employe *ui;
};

#endif // SUPPRIMER_EMPLOYE_H
