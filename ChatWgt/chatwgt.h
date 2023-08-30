#ifndef CHATWGT_H
#define CHATWGT_H

#include <QWidget>

namespace Ui {
class ChatWgt;
}

class ChatWgt : public QWidget
{
    Q_OBJECT

public:
    explicit ChatWgt(QWidget *parent = nullptr);
    ~ChatWgt();

    void addWgt(QWidget *wgt);

private:
    Ui::ChatWgt *ui;
    int m_wgtCount = 0;
};

#endif // CHATWGT_H
