#include "chatsendwgtitem.h"
#include "ui_chatsendwgtitem.h"

ChatSendWgtItem::ChatSendWgtItem(QWidget *parent)
    :QWidget(parent),
    ChatWgtItemMgr((AbstractionChatWgtItem*)this),
    ui(new Ui::ChatSendWgtItem)
{
    ui->setupUi(this);

}

ChatSendWgtItem::~ChatSendWgtItem()
{
    delete ui;
}

QLabel *ChatSendWgtItem::name()
{
    return ui->labelUserName;
}

QLabel *ChatSendWgtItem::icon()
{
    return ui->labelUserIcon;
}

QGridLayout *ChatSendWgtItem::layout()
{
    return ui->gridLayout;
}

QWidget *ChatSendWgtItem::data()
{
    return ui->widgetUserSendData;
}
