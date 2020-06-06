#include "whichicu.h"
#include "ui_whichicu.h"

whichIcu::whichIcu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::whichIcu)
{
    ui->setupUi(this);
}

whichIcu::~whichIcu()
{
    delete ui;
}


