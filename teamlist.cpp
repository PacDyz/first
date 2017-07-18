#include "teamlist.h"
#include "ui_teamlist.h"

TeamList::TeamList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeamList)
{
    ui->setupUi(this);
}

TeamList::~TeamList()
{
    delete ui;
}
