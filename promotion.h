#ifndef PROMOTION_H
#define PROMOTION_H

#include <QWidget>

namespace Ui {
class promotion;
}

class promotion : public QWidget
{
    Q_OBJECT

public:
    explicit promotion(QWidget *parent = 0);
    ~promotion();



private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::promotion *ui;
};

#endif // PROMOTION_H
