#include "addnewdoctor.h"
#include "ui_addnewdoctor.h"

addNewDoctor::addNewDoctor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNewDoctor)
{
    ui->setupUi(this);
}

addNewDoctor::~addNewDoctor()
{
    delete ui;
}
