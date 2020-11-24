#ifndef SMARTSTREET_H
#define SMARTSTREET_H
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QlistView>
#include <QLineEdit>
#include <QtWidgets>
#include <QlistWidget>
#include <QString>
#include <QDebug>
#include <QsqlQuery>
#include <QSqlDatabase>
#include <QMainWindow>
#include <QSqlQueryModel>
#include <QMessageBox>

namespace Ui {
class SmartStreet;
}

class SmartStreet : public QMainWindow
{
    Q_OBJECT

public:
    explicit SmartStreet(QWidget *parent = 0);
    ~SmartStreet();

private slots:
    void on_Admin_clicked();

    void on_Employe_clicked();

    void on_pushButton_clicked();

private:
    Ui::SmartStreet *ui;
};

#endif // SMARTSTREET_H
