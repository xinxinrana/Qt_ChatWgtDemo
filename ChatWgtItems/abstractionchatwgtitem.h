#ifndef ABSTRACTIONCHATWGTITEM_H
#define ABSTRACTIONCHATWGTITEM_H

class QIcon;
class QLabel;
class QGridLayout;
class QString;
class QWidget;

class AbstractionChatWgtItem
{

public:
    explicit AbstractionChatWgtItem();
    virtual ~AbstractionChatWgtItem(){}

    virtual QLabel* name() = 0;
    virtual QLabel* icon() = 0;
    virtual QGridLayout* layout() = 0;
    virtual QWidget* data() = 0;

};

#endif // ABSTRACTIONCHATWGTITEM_H
