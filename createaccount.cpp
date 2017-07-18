#include "createaccount.h"
#include "ui_createaccount.h"
#include "login.h"
#include <QMessageBox>
CreateAccount::CreateAccount( QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CreateAccount)
{
    //this->logIn(*parent));
    ui->setupUi(this);
}

CreateAccount::~CreateAccount()
{
    delete ui;
}

void CreateAccount::on_pushButtonCreateAccount_clicked()
{
    if(ui->lineEditPassword->text() == ui->lineEditRepeatPassword->text())
    {
        ((LogIn*)(parent()))->setUserAccount(std::make_pair(ui->lineEditLogin->text(), ui->lineEditPassword->text()));
        hide();
        QMessageBox::information(this, "Registered", "Registration is correctly");
    }
    else
        QMessageBox::critical(this, "Error", "Repeat password isn't the same like Password");
}



void CreateAccount::on_checkBoxShowPassword_clicked(bool checked)
{
    if(checked)
    {
        ui->lineEditPassword->setEchoMode(QLineEdit::Normal);
        ui->lineEditRepeatPassword->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->lineEditPassword->setEchoMode(QLineEdit::Password);
        ui->lineEditRepeatPassword->setEchoMode(QLineEdit::Password);
    }
}
