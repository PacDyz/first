#include "teamlist.h"
#include "ui_teamlist.h"
#include <QPixmap>
TeamList::TeamList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeamList)
{
    ui->setupUi(this);
}

TeamList::~TeamList()
{
    delete ui;
}

void TeamList::on_pushButtonAddLogo_clicked()
{
     QPixmap picture(ui->lineEditPath->text());
//     ui->labelPicture->setPixmap(picture.scaled(100,100,Qt::KeepAspectRatio));
     int width = ui->labelPicture->width();
     int height = ui->labelPicture->height();
     ui->labelPicture->setPixmap(picture.scaled(width,height, Qt::KeepAspectRatio));
}
