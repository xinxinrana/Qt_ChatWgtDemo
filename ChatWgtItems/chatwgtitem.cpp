#include "chatwgtitem.h"
#include "ui_chatwgtitem.h"



#include <QIcon>
#include <QSizePolicy>

ChatWgtItem::ChatWgtItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatWgtItem)
{
    ui->setupUi(this);
}

ChatWgtItem::~ChatWgtItem()
{
    delete ui;
}

void ChatWgtItem::setSendorReceive(bool isReceive)
{

}

void ChatWgtItem::setIcon(const QIcon &icon)
{
    ui->labelUserIcon->setPixmap(icon.pixmap(QSize(40,40)));
}

void ChatWgtItem::setName(const QString &name)
{
    ui->labelUserName->setText(name);
}

void ChatWgtItem::setWgt(QWidget *wgt)
{
    wgt->setSizePolicy(ui->widgetUserSendData->sizePolicy());
    ui->gridLayout->replaceWidget(ui->widgetUserSendData,wgt);
}
