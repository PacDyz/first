#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "teamlist.h"
#include <memory>
#include <QMainWindow>
#include <QMenu>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(const QString&, QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_buttonTeam_clicked();

    void on_Help_clicked();

    void logOut();

    void on_actionLog_out_triggered();

private:
//    void createMenus(const QString&);
//    void createActions();
    Ui::MainWindow *ui;
    std::unique_ptr<TeamList> teamList;
//    std::unique_ptr<QMenu> menuAccount;
//    QAction *newAct;
};

#endif // MAINWINDOW_H
