#include "abstractionchatwgtitemmgr.h"
#include "abstractionchatwgtitem.h"

#include <QLabel>

AbstractionChatWgtItemMgr::AbstractionChatWgtItemMgr(AbstractionChatWgtItem *item, QObject *parent)
    : QObject{parent},
    m_item(item)
{

}

void AbstractionChatWgtItemMgr::setIcon(const QPixmap &icon)
{
    m_item->icon()->setPixmap(icon);
}
