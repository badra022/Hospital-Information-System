#include "viewdoctor.h"
#include "ui_viewdoctor.h"
#include "database.cpp"

viewDoctor::viewDoctor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewDoctor)
{
    ui->setupUi(this);
    int i = 1;
    if(doctorsList.size())
    {
    for(auto ppatient : doctorsList[0]->listOfPatients)
    {
        ui->comboBox_2->addItem( QString::number(i) + " " + ppatient.first->name + "(" + QString::number(ppatient.second) + " hr)");
        i++;
    }
    i = 1;
    for(auto pdoctor : doctorsList)
    {
        ui->comboBox->addItem( QString::number(i) + " " + pdoctor->name);
        i++;
    }
    }
    ui->spinBox->setRange(1 , 10);
}

viewDoctor::~viewDoctor()
{
    delete ui;
}

void viewDoctor::on_pushButton_2_clicked()
{
    int j = 1;
    int i = ui->comboBox->currentIndex();
    for(auto ppatient : doctorsList[i]->listOfPatients)
    {
        ui->comboBox_2->addItem( QString::number(j) + " " + ppatient.first->name + "(" + QString::number(ppatient.second) + " hr)");
        j++;
    }
    ui->label_8->setText(doctorsList[i]->name);
    ui->label_9->setText(doctorsList[i]->gender);
    ui->label_10->setText(doctorsList[i]->birthDate);
    ui->label_11->setText(doctorsList[i]->socialSecurityNumber);
    ui->label_12->setText(doctorsList[i]->majorScientificArea);
    ui->label_13->setText(doctorsList[i]->degree);
}

void viewDoctor::on_pushButton_clicked()
{
    patient* pfind;
    if(ui->lineEdit->text() == "");
    else
    {
        long long ID = ui->lineEdit->text().toLong();
        int hours = ui->spinBox->value();
        for(auto ppatient : mainPatientList)
        {
            if(ppatient->ID == ID)
            {
                pfind = ppatient;
                break;
            }
        }
        int i = ui->comboBox->currentIndex();
        doctorsList[i]->listOfPatients.push_back(std::make_pair(pfind , hours));
        QMessageBox::information(this, tr("Status") , tr("added Successfuly!"));
}
}
