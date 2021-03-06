#include "teamlist.h"
#include "ui_teamlist.h"
#include <QPixmap>
#include <QTextStream>
#include <QMessageBox>
TeamList::TeamList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeamList),
    file(dir.currentPath() + "/team.txt")
{
    ui->setupUi(this);
    if(!file.open(QFile::ReadOnly | QFile::Text))
        QMessageBox::warning(this, "Openning file", "File isn't open");
    QTextStream in(&file);
    while(!in.atEnd())
    {
        QString team = in.readLine();
        ui->listWidgetTeam1->addItem(team);
        ui->listWidgetTeam2->addItem(team);
    }
    file.close();
}

TeamList::~TeamList()
{
    delete ui;
}

/*void TeamList::on_pushButtonAddLogo_clicked()
{
     QPixmap picture(ui->lineEditPath->text());
//     ui->labelPicture->setPixmap(picture.scaled(100,100,Qt::KeepAspectRatio));
     int width = ui->labelPicture->width();
     int height = ui->labelPicture->height();
     ui->labelPicture->setPixmap(picture.scaled(width,height, Qt::KeepAspectRatio));
}*/

void TeamList::on_pushButtonAddTeamLogo_clicked()
{
    logoWindow = std::make_unique<LogoToTeam>(this);
    logoWindow->show();
}

void TeamList::on_pushButtonAddTeam_clicked()
{
    newTeamWindow = std::make_unique<NewTeam>(this);
    newTeamWindow->show();
}

void TeamList::addNewTeam(const Team&& team)
{
    QTextStream out(&file);
    if(!file.open(QFile::WriteOnly | QFile::Append))
        QMessageBox::warning(this, "Openning file", "File isn't open");
    out << team.getName() << "\r\n";
    file.close();
    teamsList.emplace_back(std::move(team));
 //   auto item = std::make_shared<QListWidgetItem>(teamsList.back().getName());
    ui->listWidgetTeam1->addItem(teamsList.back().getName());
    ui->listWidgetTeam2->addItem(teamsList.back().getName());
}
void TeamList::addNewLogoToTeam(const QString& name, const QIcon& icon) //dokończyć
{
    for(auto& itr : teamsList)
    {
        if(itr.getName() == name)
        {
            itr.setIcon(icon);
            for(int i = 0; i < ui->listWidgetTeam1->count(); ++i)
            {
                if(ui->listWidgetTeam1->item(i)->text() == name)
                {
                    ui->listWidgetTeam1->item(i)->setIcon(icon);
                    ui->listWidgetTeam2->item(i)->setIcon(icon);
                }
            }
        }
    }
}
