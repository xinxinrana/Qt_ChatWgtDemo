#include "chatwgtitemmgr.h"
#include "abstractionchatwgtitem.h"
#include "qgridlayout.h"

#include <QIcon>
#include <QLabel>

ChatWgtItemMgr::ChatWgtItemMgr(AbstractionChatWgtItem *item, QObject *parent):AbstractionChatWgtItemMgr(item,parent)
{

}

void ChatWgtItemMgr::setIcon(const QIcon &icon)
{
    m_item->icon()->setPixmap(icon.pixmap(QSize(40,40)));
}

void ChatWgtItemMgr::setName(const QString &name)
{
    m_item->name()->setText(name);
}

void ChatWgtItemMgr::setWgt(QWidget *wgt)
{
    wgt->setSizePolicy(m_item->data()->sizePolicy());

    m_item->layout()->replaceWidget(m_item->data(),wgt);
}
