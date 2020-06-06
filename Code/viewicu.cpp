#include "viewicu.h"
#include "ui_viewicu.h"
#include "database.cpp"

viewIcu::viewIcu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewIcu)
{
    ui->setupUi(this);
}

viewIcu::~viewIcu()
{
    delete ui;
}
