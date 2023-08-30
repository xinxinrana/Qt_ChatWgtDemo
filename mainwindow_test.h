#ifndef MAINWINDOW_TEST_H
#define MAINWINDOW_TEST_H

#include <QMainWindow>


namespace Ui {
class MainWindow_Test;
}

class MainWindow_Test : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_Test(QWidget *parent = nullptr);
    ~MainWindow_Test();

private:
    void test();
    void test_add();

private:
    Ui::MainWindow_Test *ui;
};

#endif // MAINWINDOW_TEST_H
