#include "addnewicu.h"
#include "ui_addnewicu.h"

addNewIcu::addNewIcu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNewIcu)
{
    ui->setupUi(this);
}

addNewIcu::~addNewIcu()
{
    delete ui;
}
