#include "addnewdoctor.h"
#include "ui_addnewdoctor.h"
#include "database.cpp"

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

void addNewDoctor::on_pushButton_clicked()
{
    if(doctorsList.size() == N_DOCTORS){
        QMessageBox::warning(this, tr("Status") , tr("full capacity of doctors!"));
    }
    else{
        /* using the doctor's list we will fill the data of the available seat */
        doctor* newdoctor = new doctor;
        newdoctor->name = ui->lineEdit->text();
        newdoctor->gender = ui->lineEdit_2->text();
        newdoctor->birthDate = ui->lineEdit_3->text();
        newdoctor->socialSecurityNumber = ui->lineEdit_4->text();
        newdoctor->majorScientificArea = ui->lineEdit_5->text();
        newdoctor->degree = ui->lineEdit_6->text();

        doctorsList.push_back(newdoctor);
        QMessageBox::information(this, tr("Status") , tr("success!"));
        ui->pushButton_2->clicked();
    }
}
