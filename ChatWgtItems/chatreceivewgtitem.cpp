#include "chatreceivewgtitem.h"
#include "ui_chatreceivewgtitem.h"

#include <QPaintEngine>

ChatReceiveWgtItem::ChatReceiveWgtItem(QWidget *parent)
    :QWidget(parent),
    ChatWgtItemMgr((AbstractionChatWgtItem*)this),
    ui(new Ui::ChatReceiveWgtItem)
{
    ui->setupUi(this);


}

ChatReceiveWgtItem::~ChatReceiveWgtItem()
{
    delete ui;
}

QLabel *ChatReceiveWgtItem::name()
{
    return ui->labelUserName;
}

QLabel *ChatReceiveWgtItem::icon()
{
    return ui->labelUserIcon;
}

QGridLayout *ChatReceiveWgtItem::layout()
{
    return ui->gridLayout;
}

QWidget *ChatReceiveWgtItem::data()
{
    return ui->widgetUserSendData;
}
