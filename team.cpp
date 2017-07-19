#include "team.h"

Team::Team(const QString& name ):name(name){}

void Team::setIcon(const QIcon& newIcon)
{
    icon = newIcon;
}
QString Team::getName() const
{
    return name;
}
QIcon Team::getIcon() const
{
    return icon;
}
