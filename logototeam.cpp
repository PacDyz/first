#include "logototeam.h"
#include "ui_logototeam.h"
#include "teamlist.h"
LogoToTeam::LogoToTeam(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LogoToTeam)
{
    ui->setupUi(this);
}

LogoToTeam::~LogoToTeam()
{
    delete ui;
}

void LogoToTeam::on_pushButtonShowIcon_clicked()
{
    QPixmap picture(ui->lineEditPath->text());
//     ui->labelPicture->setPixmap(picture.scaled(100,100,Qt::KeepAspectRatio));
    int width = ui->labelPicture->width();
    int height = ui->labelPicture->height();
    ui->labelPicture->setPixmap(picture.scaled(width,height, Qt::KeepAspectRatio));
}

void LogoToTeam::on_pushButtonCancel_clicked()
{
    close();
}

void LogoToTeam::on_pushButtonOk_clicked()
{
    ((TeamList*)(parent()))->addNewLogoToTeam(ui->lineEditNameTeam->text(), QIcon(ui->lineEditPath->text()));
    close();
}
