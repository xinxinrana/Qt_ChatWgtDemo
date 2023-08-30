#include "chatwgtmgr.h"
#include "chatwgt.h"

ChatWgtMgr::ChatWgtMgr(QObject *parent)
    : QObject{parent}
{

}

ChatWgtMgr::ChatWgtMgr(ChatWgt *wgt, QObject *parent):QObject(parent),m_chatWgt(wgt)
{

}

void ChatWgtMgr::add(QWidget *wgt)
{
//    m_chatWgt->layout()->addWidget(wgt);
    m_chatWgt->addWgt(wgt);
}


