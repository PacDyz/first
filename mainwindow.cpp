#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "teamlist.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonTeam_clicked()
{
    hide();
    teamList = std::make_unique<TeamList>(this);
    teamList->show();
}

void MainWindow::on_Help_clicked()
{
    QMessageBox::information(this, "Help", "You're idiot");
}
