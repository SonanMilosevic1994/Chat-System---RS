#ifndef CLIENTTEST_H
#define CLIENTTEST_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>

class ClientTest : public QObject
{
    Q_OBJECT
public:
    explicit ClientTest(QObject *parent = 0);
    void Connect();

signals:

public slots:

private:
    QTcpSocket *socket;
};

#endif // CLIENTTEST_H
