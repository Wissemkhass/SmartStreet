#ifndef FONCTION2_H
#define FONCTION2_H

#include <QWidget>

namespace Ui {
class fonction2;
}

class fonction2 : public QWidget
{
    Q_OBJECT

public:
    explicit fonction2(QWidget *parent = 0);
    ~fonction2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::fonction2 *ui_fonc2;
};

#endif // FONCTION2_H
