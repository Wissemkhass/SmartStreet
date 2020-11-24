#ifndef CONNECTION_H
#define CONNECTION_H
#include "smartstreet.h"

class Connection
{
public:
    Connection();
    bool CreatConnection();
    bool CloseConnection();
    QSqlDatabase get_db(){return db;}
private:
    QSqlDatabase db;
};

#endif // CONNECTION_H
