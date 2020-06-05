#include "addnewpatient.h"
#include "ui_addnewpatient.h"

addNewPatient::addNewPatient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNewPatient)
{
    ui->setupUi(this);
}

addNewPatient::~addNewPatient()
{
    delete ui;
}
