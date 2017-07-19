#ifndef ADDLOGOTOTEAM_H
#define ADDLOGOTOTEAM_H

#include <QMainWindow>

namespace Ui {
class LogoToTeam;
}

class LogoToTeam : public QMainWindow
{
    Q_OBJECT

public:
    explicit LogoToTeam(QWidget *parent = 0);
    ~LogoToTeam();

private slots:
    void on_pushButtonShowIcon_clicked();

    void on_pushButtonCancel_clicked();

    void on_pushButtonOk_clicked();

private:
    Ui::LogoToTeam *ui;
};

#endif // ADDLOGOTOTEAM_H
