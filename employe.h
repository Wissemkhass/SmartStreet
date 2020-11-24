#ifndef EMPLOYE_H
#define EMPLOYE_H
#include "connection.h"
#include "smartstreet.h"
#include "ajout_employer.h"

class Employe
{
public:
    Employe();
    bool ajouter_emp(QString,QString,QString,QString,QString);
    bool ajouter_ad(QString,QString,QString,QString,QString);
private:
    QSqlQuery q;

};

#endif // EMPLOYE_H
