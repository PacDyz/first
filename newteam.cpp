#include "newteam.h"
#include "ui_newteam.h"
#include "team.h"
#include "teamlist.h"
NewTeam::NewTeam(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NewTeam)
{
    ui->setupUi(this);
}

NewTeam::~NewTeam()
{
    delete ui;
}

void NewTeam::on_pushButtonCancel_clicked()
{
    close();
}

void NewTeam::on_pushButtonOk_clicked()
{
    Team team{ui->lineEditNameTeam->text()};
    ((TeamList*)(parent()))->addNewTeam(std::move(team));
    close();
}
