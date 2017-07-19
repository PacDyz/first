#ifndef ADDNEWTEAM_H
#define ADDNEWTEAM_H

#include <QMainWindow>

namespace Ui {
class NewTeam;
}

class NewTeam : public QMainWindow
{
    Q_OBJECT

public:
    explicit NewTeam(QWidget *parent = 0);
    ~NewTeam();

private slots:

    void on_pushButtonCancel_clicked();

    void on_pushButtonOk_clicked();

private:
    Ui::NewTeam *ui;
};

#endif // ADDNEWTEAM_H
