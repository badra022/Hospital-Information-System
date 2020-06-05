#include "addnewprescription.h"
#include "ui_addnewprescription.h"

addNewPrescription::addNewPrescription(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNewPrescription)
{
    ui->setupUi(this);
}

addNewPrescription::~addNewPrescription()
{
    delete ui;
}
