#include "login.h"
#include "ui_login.h"

LogIn::LogIn(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LogIn)
{
    ui->setupUi(this);
}

LogIn::~LogIn()
{
    delete ui;
}

void LogIn::on_ButtonLogIn_clicked()
{
    if("admin" == ui->lineEditLogin->text() && "admin" == ui->lineEditPassword->text())
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
