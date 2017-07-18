#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "teamlist.h"
#include <memory>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_buttonTeam_clicked();

    void on_Help_clicked();

private:
    Ui::MainWindow *ui;
    std::unique_ptr<TeamList> teamList;
};

#endif // MAINWINDOW_H
