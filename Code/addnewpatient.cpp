#include "addnewpatient.h"
#include "ui_addnewpatient.h"
#include "database.cpp"

addNewPatient::addNewPatient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNewPatient)
{
    ui->setupUi(this);
    int i = 1;
    for(auto icu : IcuList)
    {
        ui->comboBox->addItem( QString::number(i) + " " + icu->name);
        i++;
    }
}

addNewPatient::~addNewPatient()
{
    delete ui;
}

void addNewPatient::on_pushButton_clicked()
{
    int beds = 0;
    for(auto icu : IcuList)
    {
        beds += icu->bed;
    }
    if(!beds)
    {
        QMessageBox::critical(this, tr("Status") , tr("No Available Icu!"));
        ui->pushButton_2->clicked();
    }
    else{
    patient* ppatient = new patient();
    bool distinct = true;
    do{
    ppatient->name = ui->lineEdit->text();
    ppatient->ID = ui->lineEdit_2->text().toLong();
    ppatient->address = ui->lineEdit_3->text();
    ppatient->gender = ui->lineEdit_4->text();
    ppatient->phone = ui->lineEdit_5->text();
    ppatient->birthDate = ui->lineEdit_6->text();
    ppatient->medicalHistory = ui->lineEdit_7->text();
    ppatient->allergies = ui->lineEdit_8->text();
    ppatient->medicalStatus.bloodPressure = ui->lineEdit_9->text();
    ppatient->medicalStatus.heartRate = ui->lineEdit_10->text();
    ppatient->medicalStatus.temperature = ui->lineEdit_11->text();
    for(auto p : mainPatientList)
    {
        if(p->ID == ppatient->ID)distinct = false;
    }
    }while(!distinct);
    int i = 1;
    i = ui->comboBox->currentIndex();
    while(IcuList[i]->bed == 0)
    {
        QMessageBox::warning(this, tr("Status") , tr("this Icu not Available!"));
    }
    IcuList[i]->patientsList.enqueue(ppatient);
    IcuList[i]->patientsPriorityList.insert(ppatient);
    IcuList[i]->bed--;
    mainPatientList.push_back(ppatient);

    //qDebug() << "success!";
    QMessageBox::information(this, tr("Status") , tr("Success!"));
    ui->pushButton_2->clicked();
    }
}
