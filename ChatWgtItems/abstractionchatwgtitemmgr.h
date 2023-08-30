#ifndef ABSTRACTIONCHATWGTITEMMGR_H
#define ABSTRACTIONCHATWGTITEMMGR_H

#include <QObject>
class AbstractionChatWgtItem;

class AbstractionChatWgtItemMgr : public QObject
{
    Q_OBJECT
public:
    explicit AbstractionChatWgtItemMgr(AbstractionChatWgtItem* item,QObject *parent = nullptr);
    virtual ~AbstractionChatWgtItemMgr(){}

    virtual void setIcon(const QIcon &icon) = 0;
    virtual void setIcon(const QPixmap &icon);
    virtual void setName(const QString &name)= 0;
    virtual void setWgt(QWidget* wgt)=0;

protected:
    AbstractionChatWgtItem *m_item;

};

#endif // ABSTRACTIONCHATWGTITEMMGR_H
