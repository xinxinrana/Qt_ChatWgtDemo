#ifndef CHATWGTITEMMGR_H
#define CHATWGTITEMMGR_H

#include <QObject>
#include "abstractionchatwgtitemmgr.h"

class ChatWgtItemMgr : public AbstractionChatWgtItemMgr
{
    Q_OBJECT
public:
    explicit ChatWgtItemMgr(AbstractionChatWgtItem* item,QObject *parent = nullptr);

    // AbstractionChatWgtItemMgr interface
public:
    void setIcon(const QIcon &icon);
    void setName(const QString &name);
    void setWgt(QWidget *wgt);
};

#endif // CHATWGTITEMMGR_H
