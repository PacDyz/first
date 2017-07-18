#ifndef LOGIN_H
#define LOGIN_H
#include "mainwindow.h"
#include <QMainWindow>
#include <memory>
namespace Ui {
class LogIn;
}

class LogIn : public QMainWindow
{
    Q_OBJECT

public:
    explicit LogIn(QWidget *parent = 0);
    ~LogIn();

private slots:

    void on_ButtonLogIn_clicked();

private:
    Ui::LogIn *ui;
    std::unique_ptr<MainWindow> mainWindow;
};

#endif // LOGIN_H
