#ifndef TEAMLIST_H
#define TEAMLIST_H

#include <QDialog>

namespace Ui {
class TeamList;
}

class TeamList : public QDialog
{
    Q_OBJECT

public:
    explicit TeamList(QWidget *parent = 0);
    ~TeamList();

private slots:
    void on_pushButtonAddLogo_clicked();

private:
    Ui::TeamList *ui;
};

#endif // TEAMLIST_H
