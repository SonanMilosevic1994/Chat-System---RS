#include "clienttest.h"



ClientTest::ClientTest(QObject *parent) : QObject(parent)
{

}

void ClientTest::Connect()
{
    socket = new QTcpSocket(this);
    socket->connectToHost("127.0.0.1",80);
    if (socket->waitForConnected(3000))
    {
       qDebug() << "Conneceted!";
       socket->write("Hello server!!! What's uppp? \n");
       socket->close();

    }
    else
    {
       qDebug() << "Not connected!";
    }

}
