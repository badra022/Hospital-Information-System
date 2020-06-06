#include "viewprescription.h"
#include "ui_viewprescription.h"
#include "database.cpp"

viewprescription::viewprescription(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewprescription)
{
    ui->setupUi(this);
}

viewprescription::~viewprescription()
{
    delete ui;
}
