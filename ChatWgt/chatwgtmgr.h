#ifndef CHATWGTMGR_H
#define CHATWGTMGR_H

#include <QObject>



class ChatWgt;

class ChatWgtMgr : public QObject
{
    Q_OBJECT
public:

    explicit ChatWgtMgr(QObject *parent = nullptr);
    explicit ChatWgtMgr(ChatWgt *wgt,QObject *parent = nullptr);

    void add(QWidget* wgt);

signals:

private:
    ChatWgt *m_chatWgt = nullptr;

};

#endif // CHATWGTMGR_H
