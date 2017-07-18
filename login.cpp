#include "login.h"
#include "ui_login.h"

LogIn::LogIn(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LogIn)
{
    this->userAccount.insert(std::make_pair("admin", "admin"));
    ui->setupUi(this);
}

LogIn::~LogIn()
{
    delete ui;
}

void LogIn::on_ButtonLogIn_clicked()
{
    for(const auto& itr : userAccount)
    {
        if(itr.first == ui->lineEditLogin->text() && itr.second == ui->lineEditPassword->text())
        {
            hide();
            mainWindow = std::make_unique<MainWindow>(this);
            mainWindow->show();
        }
        else
        {
            ui->labelStatusLogIn->setText("Wrong login or password");
        }
    }
}
void LogIn::setUserAccount(const std::pair<QString,QString>&& newAccount)
{
    this->userAccount.insert(std::move(newAccount));
}

void LogIn::on_pushButtonRegister_clicked()
{
   createAccount = std::make_unique<CreateAccount>(this);
   createAccount->show();
}
