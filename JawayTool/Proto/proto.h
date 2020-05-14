#ifndef PROTO_H
#define PROTO_H

#include <QObject>

class Proto : public QObject
{
    Q_OBJECT
public:
    explicit Proto(QObject *parent = nullptr);

    QString protocal_name;
    QString configFile_name;
    QString logFile_name;



signals:

public slots:
};

#endif // PROTO_H
