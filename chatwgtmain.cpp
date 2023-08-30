#include "chatwgtmain.h"
#include "ChatWgtItems/chatreceivewgtitem.h"
#include "ChatWgtItems/chatsendwgtitem.h"
#include "qicon.h"
#include "qpainter.h"

#include <QLabel>
#include <QtCore>

ChatWgtMain::ChatWgtMain(QWidget *parent)
    : ChatWgt{parent}
{

}

void ChatWgtMain::addItem(const QString &name, const QIcon &icon, const QString &info, bool isReceive)
{
    QString qss = ("background-color: #E5E5E5;"
                   "border-radius: 10px;"
                   "padding: 6px;");


    AbstractionChatWgtItemMgr* item = nullptr;
    if(isReceive){
        item = new ChatReceiveWgtItem();
        qss.append("border-top-left-radius: 0;");
    }else{
        item = new ChatSendWgtItem();
        qss.append("border-top-right-radius: 0;");
    }



    item->setIcon(round(icon.pixmap(QSize{40,40}),40));
    item->setName(name);
    auto wgt = getDefaultLabel(info);
    wgt->setStyleSheet(qss);
    item->setWgt(wgt);
    this->addWgt(dynamic_cast<QWidget*>(item));
}

QPixmap ChatWgtMain::round(const QPixmap &src, int radius)
{
    if (src.isNull())
    {
        return QPixmap();
    }

    QBitmap mask(src.size());
    QPainter painter(&mask);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.fillRect(mask.rect(), Qt::white);
    painter.setBrush(Qt::black);
    painter.drawRoundedRect(mask.rect(), radius, radius);
    QPixmap image = src.copy();
    image.setMask(mask);
    return image;
}

QLabel *ChatWgtMain::getDefaultLabel(const QString &info)
{
    auto label = new QLabel(info);
    auto font = label->font();
    font.setPointSize(14);
    label->setFont(font);
    return label;
}
