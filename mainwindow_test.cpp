#include "mainwindow_test.h"
#include "ui_mainwindow_test.h"
#include "chatwgtmain.h"


#include <QDebug>

MainWindow_Test::MainWindow_Test(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_Test)
{
    ui->setupUi(this);
    test();
}

MainWindow_Test::~MainWindow_Test()
{
    delete ui;
}

void MainWindow_Test::test()
{

    connect(ui->actionadd,&QAction::triggered,this,&MainWindow_Test::test_add);
    connect(ui->actionadd,&QAction::triggered,[](){
        qDebug()<< "add" <<__FUNCTION__;
    });
}


void MainWindow_Test::test_add()
{
    static int i = -1;
    i++;

    ui->wgtChat->addItem(tr("甲人"),QIcon{":/icons/0249609d245c586006e6a9b87b621831.jpeg"},tr("你好"));
    ui->wgtChat->addItem(tr("乙人"),QIcon{":/icons/449a7fc92a6a64d240caaeaf0b829752.jpeg"},tr("大家好"),false);
    ui->wgtChat->addItem(tr("丙人"),QIcon{":/icons/4603288edf898d7b1db01ad76f1c8057.jpeg"},tr("我好 你别说好"));
    ui->wgtChat->addItem(tr("甲人"),QIcon{":/icons/0249609d245c586006e6a9b87b621831.jpeg"},tr("你好"));
    ui->wgtChat->addItem(tr("乙人"),QIcon{":/icons/449a7fc92a6a64d240caaeaf0b829752.jpeg"},tr("都好呀"),false);

}
