#include "employe.h"

Employe::Employe()
{
}

bool Employe::ajouter_emp(QString a, QString b, QString c, QString d,QString e)
{
    int x=e.toInt();
    q.prepare("insert into employee (id_employe,mdp,nom,prenom,num_tel,role) VALUES(:id_employe,:mdp,:nom,:prenom,:num_tel,:role)");
    q.bindValue(":id_employe",a);
    q.bindValue(":mdp",b);
    q.bindValue(":nom",c);
    q.bindValue(":prenom",d);
    q.bindValue(":num_tel",x);
    q.bindValue(":role","Employe");
    return q.exec();
}
bool Employe:: ajouter_ad(QString a, QString b, QString c, QString d,QString e)
{
    int x=e.toInt();
    q.prepare("insert into employee (id_employe,mdp,nom,prenom,num_tel,role) VALUES(:id_employe,:mdp,:nom,:prenom,:num_tel,:role)");
    q.bindValue(":id_employe",a);
    q.bindValue(":mdp",b);
    q.bindValue(":nom",c);
    q.bindValue(":prenom",d);
    q.bindValue(":num_tel",x);
    q.bindValue(":role","Admin");
    return q.exec();
}



