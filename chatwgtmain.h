#ifndef CHATWGTMAIN_H
#define CHATWGTMAIN_H

#include <QWidget>
#include "ChatWgt/chatwgt.h"

class QLabel;

class ChatWgtMain : public ChatWgt
{
    Q_OBJECT
private:


public:
    explicit ChatWgtMain(QWidget *parent = nullptr);

    void addItem(const QString &name,const QIcon &icon,const QString &info,bool isReceive = true);

private:
    QPixmap round(const QPixmap &src, int radius);

private:
    QLabel* getDefaultLabel(const QString &info);
};

#endif // CHATWGTMAIN_H
