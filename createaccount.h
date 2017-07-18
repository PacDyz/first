#ifndef CREATEACCOUNT_H
#define CREATEACCOUNT_H
#include <QMainWindow>
namespace Ui {
class CreateAccount;
}

class CreateAccount : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreateAccount( QWidget *parent = 0);
    ~CreateAccount();

private slots:
    void on_pushButtonCreateAccount_clicked();

private:
    Ui::CreateAccount *ui;
    //std::unique_ptr<LogIn> logIn;
};

#endif // CREATEACCOUNT_H
