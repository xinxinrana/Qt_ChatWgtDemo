#include "chatwgt.h"
#include "ui_chatwgt.h"

ChatWgt::ChatWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatWgt)
{
    ui->setupUi(this);
}

ChatWgt::~ChatWgt()
{
    delete ui;
}

void ChatWgt::addWgt(QWidget *wgt)
{
    ui->verticalLayout->insertWidget(0 + m_wgtCount ,wgt);
    m_wgtCount++;
}
