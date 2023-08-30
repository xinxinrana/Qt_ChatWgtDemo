#ifndef CHATWGTITEM_H
#define CHATWGTITEM_H

#include "abstractionchatwgtitem.h"

#include <QWidget>

namespace Ui {
class ChatWgtItem;
}

class ChatWgtItem : public QWidget ,public AbstractionChatWgtItem
{
    Q_OBJECT

public:
    explicit ChatWgtItem(QWidget *parent = nullptr);
    ~ChatWgtItem();

    void setSendorReceive(bool isReceive );
    void setIcon(const QIcon &icon);
    void setName(const QString &name);
    void setWgt(QWidget* wgt);

private:
    Ui::ChatWgtItem *ui;
};

#endif // CHATWGTITEM_H
