#ifndef TEAM_H
#define TEAM_H
#include <QString>
#include <teamlist.h>
#include <QIcon>
class Team
{
public:
    Team(const QString&);
    void setIcon(const QIcon&);
    QString getName() const;
    QIcon getIcon() const;
private:
    QString name;
    QIcon icon;
};

#endif // TEAM_H
