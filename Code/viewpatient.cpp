#include "viewpatient.h"
#include "ui_viewpatient.h"


extern prescription* pPrescriptionView;

void viewPatient::printElement_queue(patient* ppatient)
{
    static int i = 1;
    ui->comboBox->addItem(QString::number(i) + " " + ppatient->name + "(" + QString::number(ppatient->ID) + ")");
}

void viewPatient::printElement_heap(patient* ppatient)
{
    static int i = 1;
    ui->comboBox_3->addItem(QString::number(i) + " " + ppatient->name + "(" + QString::number(ppatient->ID) + ")");
}

viewPatient::viewPatient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewPatient)
{
    ui->setupUi(this);
    int i = 1;
    for(auto icu : IcuList)
    {
        ui->comboBox_2->addItem( QString::number(i) + " " + icu->name);
        i++;
    }

    int j = 1;
    for(auto ppatient : mainPatientList)
    {
        ui->comboBox_2->addItem( QString::number(j) + " " + ppatient->name + "(" + QString::number(ppatient->ID) + ")");
        j++;
    }
    if(!mainPatientList.size())
    {
        QMessageBox::critical(this , tr("error") , tr("No patients in Hospital!"));
        ui->pushButton_3->clicked();
    }
    /* initial informations for the first patient in the list */
    ui->label_15->setText(mainPatientList[0]->name);
    ui->label_16->setText(QString::number(mainPatientList[0]->ID));
    ui->label_17->setText(mainPatientList[0]->phone);
    ui->label_18->setText(mainPatientList[0]->address);
    ui->label_19->setText(mainPatientList[0]->birthDate);
    ui->label_20->setText(mainPatientList[0]->allergies);
    ui->label_21->setText(mainPatientList[0]->gender);
    ui->label_22->setText(mainPatientList[0]->medicalHistory);
    ui->label_23->setText(mainPatientList[0]->medicalStatus.bloodPressure);
    ui->label_24->setText(mainPatientList[0]->medicalStatus.heartRate);
    ui->label_26->setText(mainPatientList[0]->medicalStatus.temperature);
}

viewPatient::~viewPatient()
{
    delete ui;
}

void viewPatient::on_pushButton_clicked()
{
    pPrescriptionView = prescriptionList[ui->comboBox_4->currentIndex()];
    viewprescription _pre;
    _pre.setModal(true);
    _pre.exec();
}

void viewPatient::on_pushButton_2_clicked()
{
    if(ui->radioButton_2->isChecked())
    {
        int i = ui->comboBox_2->currentIndex();
        //IcuList[i]->patientsList.TraverseQueue(ui->printElement_queue);
        //IcuList[i]->patientsPriorityList.traverseHeap(ui->printElement_heap);
    }
    else
    {
        /* set information for the i'th patient in the general list */
        int i = ui->comboBox->currentIndex();
        ui->label_15->setText(mainPatientList[i]->name);
        ui->label_16->setText(QString::number(mainPatientList[i]->ID));
        ui->label_17->setText(mainPatientList[i]->phone);
        ui->label_18->setText(mainPatientList[i]->address);
        ui->label_19->setText(mainPatientList[i]->birthDate);
        ui->label_20->setText(mainPatientList[i]->allergies);
        ui->label_21->setText(mainPatientList[i]->gender);
        ui->label_22->setText(mainPatientList[i]->medicalHistory);
        ui->label_23->setText(mainPatientList[i]->medicalStatus.bloodPressure);
        ui->label_24->setText(mainPatientList[i]->medicalStatus.heartRate);
        ui->label_26->setText(mainPatientList[i]->medicalStatus.temperature);
    }
}
