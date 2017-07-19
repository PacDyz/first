#ifndef TEAMLIST_H
#define TEAMLIST_H

#include <QDialog>
#include "logototeam.h"
#include <memory>
#include "newteam.h"
#include "team.h"
class Team;
namespace Ui {
class TeamList;
}

class TeamList : public QDialog
{
    Q_OBJECT

public:
    explicit TeamList(QWidget *parent = 0);
    ~TeamList();

    void addNewTeam(const Team&&);

    void addNewLogoToTeam(const QString&, const QIcon&);
private slots:
//    void on_pushButtonAddLogo_clicked();

    void on_pushButtonAddTeamLogo_clicked();

    void on_pushButtonAddTeam_clicked();

private:
    Ui::TeamList *ui;
    std::unique_ptr<LogoToTeam> logoWindow;
    std::unique_ptr<NewTeam> newTeamWindow;
    std::vector<Team> teamsList;
};

#endif // TEAMLIST_H
