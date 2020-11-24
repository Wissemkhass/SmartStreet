#include "connection.h"

Connection::Connection()
{  
}

bool Connection::CreatConnection()
{
           db=QSqlDatabase ::addDatabase("QODBC");
           db.setDatabaseName("mybasefinale");
           db.setUserName("hr");
           db.setPassword("hrhr");

            if(!db.open())
            {
                qDebug()<<"Faild to connect";
            }
            else qDebug()<<"connected";
            return true;
}

bool Connection::CloseConnection()
{
    db.close();
}


