#include "addnewprescription.h"
#include "ui_addnewprescription.h"
#include "database.cpp"

addNewPrescription::addNewPrescription(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNewPrescription)
{
    ui->setupUi(this);
    int i = 1;
    for(auto ppatient : mainPatientList)
    {
        ui->comboBox->addItem( QString::number(i) + " " + ppatient->name + "(" + ppatient->ID + ")");
        i++;
    }
    i = 1;
    for(auto pdoctor : doctorsList)
    {
        ui->comboBox_2->addItem( QString::number(i) + " " + pdoctor->name);
        i++;
    }
    ui->spinBox->setRange(1 , 4);
    ui->spinBox_2->setRange(1 , 4);
    ui->spinBox_3->setRange(1 , 4);
    ui->spinBox_4->setRange(1 , 4);
    ui->spinBox_5->setRange(1 , 4);
}

addNewPrescription::~addNewPrescription()
{
    delete ui;
}

void addNewPrescription::on_pushButton_clicked()
{
    int i = 1, j = 1;
    i = ui->comboBox->currentIndex();
    j = ui->comboBox_2->currentIndex();
    prescription* pnewprescription = new prescription;
    pnewprescription->p = mainPatientList[i];
    pnewprescription->writer = doctorsList[j];
    pnewprescription->startDate = ui->lineEdit->text();
    pnewprescription->endDate = ui->lineEdit_2->text();
    if(ui->lineEdit_3->text() != "")
    pnewprescription->drugsList[ui->lineEdit_3->text()] = ui->spinBox->value();
    if(ui->lineEdit_4->text() != "")
    pnewprescription->drugsList[ui->lineEdit_4->text()] = ui->spinBox_2->value();
    if(ui->lineEdit_5->text() != "")
    pnewprescription->drugsList[ui->lineEdit_5->text()] = ui->spinBox_3->value();
    if(ui->lineEdit_6->text() != "")
    pnewprescription->drugsList[ui->lineEdit_6->text()] = ui->spinBox_4->value();
    if(ui->lineEdit_7->text() != "")
    pnewprescription->drugsList[ui->lineEdit_7->text()] = ui->spinBox_5->value();

    prescriptionList.push_back(pnewprescription);
    QMessageBox::information(this , tr("Status") , tr("Success!"));
    ui->pushButton_2->clicked();

}
