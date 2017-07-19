#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "teamlist.h"
#include <QMessageBox>
#include "login.h"


namespace{
    LogIn *loginWindow;
}
MainWindow::MainWindow(const QString& login, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menulogin->setTitle(login);
//    createActions();
//    createMenus(login);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonTeam_clicked()
{
    teamList = std::make_unique<TeamList>(this);
    teamList->show();
}

void MainWindow::on_Help_clicked()
{
    QMessageBox::information(this, "Help", "You're idiot");
}

void MainWindow::logOut()
{

}

/*void MainWindow::createMenus(const QString& login)
{
    menuAccount = std::make_unique<QMenu>(menuBar()->addMenu(login));
    newAct = new QAction("&bla", this);
    newAct->setShortcut(QKeySequence("Ctrl + S"));
    newAct->setStatusTip(tr("Create a new file"));
    menuAccount->addAction(newAct);
    connect(newAct, &QAction::triggered, this, &MainWindow::logOut);
}*/
/*void MainWindow::createActions()
{
    newAct = new QAction("&bla", this);
    newAct->setShortcut(QKeySequence("Ctrl + S"));
    newAct->setStatusTip(tr("Create a new file"));
    connect(newAct, &QAction::triggered, this, &MainWindow::logOut);
}*/

/*void MainWindow::on_actionLog_out_triggered()
{
    hide();
    loginWindow.reset(new LogIn());
    loginWindow->show();
} 0x68204295  <+0x0045>        f0 0f c1 10              lock xadd %edx,(%eax)*/
void MainWindow::on_actionLog_out_triggered()
{
    hide();
    loginWindow = new LogIn();
    loginWindow->show();
}
