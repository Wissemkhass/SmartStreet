#ifndef LOG_IN_H
#define LOG_IN_H

#include <QWidget>

namespace Ui {
class Log_in;
}

class Log_in : public QWidget
{
    Q_OBJECT

public:
    explicit Log_in(QWidget *parent = 0);
    ~Log_in();

private slots:
    void on_Return_clicked();



    void on_Log_in_2_clicked();

    void on_Ajouter_clicked();

private:
    Ui::Log_in *ui_log;
};

#endif // LOG_IN_H
