#ifndef CHATSENDWGTITEM_H
#define CHATSENDWGTITEM_H

#include <QWidget>
#include "abstractionchatwgtitem.h"
#include "chatwgtitemmgr.h"

namespace Ui {
class ChatSendWgtItem;
}

class ChatSendWgtItem : public QWidget ,public AbstractionChatWgtItem,public ChatWgtItemMgr
{
    Q_OBJECT

public:
    explicit ChatSendWgtItem(QWidget *parent = nullptr);
    ~ChatSendWgtItem();

    // AbstractionChatWgtItem interface
public:
    QLabel *name()override;
    QLabel *icon()override;
    QGridLayout *layout()override;
    QWidget *data()override;

private:
    Ui::ChatSendWgtItem *ui;
};

#endif // CHATSENDWGTITEM_H
