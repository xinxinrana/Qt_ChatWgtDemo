#ifndef CHATRECEIVEWGTITEM_H
#define CHATRECEIVEWGTITEM_H

#include <QWidget>
#include "abstractionchatwgtitem.h"
#include "chatwgtitemmgr.h"

namespace Ui {
class ChatReceiveWgtItem;
}

class ChatReceiveWgtItem : public QWidget ,public AbstractionChatWgtItem,public ChatWgtItemMgr
{
    Q_OBJECT

public:
    explicit ChatReceiveWgtItem(QWidget *parent = nullptr);
    ~ChatReceiveWgtItem();

private:
    Ui::ChatReceiveWgtItem *ui;

    // AbstractionChatWgtItem interface
public:
    QLabel *name()override;
    QLabel *icon()override;
    QGridLayout *layout()override;
    QWidget *data()override;

//    void paintEvent()
};

#endif // CHATRECEIVEWGTITEM_H
