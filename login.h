#ifndef LOGIN_H
#define LOGIN_H
#include "mainwindow.h"
#include "createaccount.h"
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
    void setUserAccount(const std::pair<QString,QString>&&);
    ~LogIn();

private slots:

    void on_ButtonLogIn_clicked();

    void on_pushButtonRegister_clicked();

private:
    Ui::LogIn *ui;
    std::unique_ptr<MainWindow> mainWindow;
    std::map<QString, QString> userAccount;
    std::unique_ptr<CreateAccount> createAccount;
};

#endif // LOGIN_H
