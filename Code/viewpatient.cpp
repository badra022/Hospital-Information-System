#include "viewpatient.h"
#include "ui_viewpatient.h"
#include "database.cpp"

viewPatient::viewPatient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewPatient)
{
    ui->setupUi(this);
}

viewPatient::~viewPatient()
{
    delete ui;
}
