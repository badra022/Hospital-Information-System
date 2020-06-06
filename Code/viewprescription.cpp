#include "viewprescription.h"
#include "ui_viewprescription.h"
#include "database.cpp"

prescription* pPrescriptionView;

viewprescription::viewprescription(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewprescription)
{
    ui->setupUi(this);
    ui->label_6->setText(pPrescriptionView->p->name);
    ui->label_7->setText(pPrescriptionView->startDate);
    ui->label_8->setText(pPrescriptionView->endDate);
    ui->label_9->setText(QString::number((pPrescriptionView->code)));
    ////     /* iterating over the drugs and printing each count of each drug multiplied with days number */
    ////     /* iteration over map using iterator STL */
    ////     map <string , int >::iterator it = this->prescriptions.drugsList.begin();
    ////     while(it != this->prescription.drugsList.end())
    ////     {
    ////          string drug = it->first;
    ////          int count = it->second;
    ////          cout << drug << " :: " << count * days << "\n";
    ////          it++;
    ////     }
    ////}
    int i = 1;
    map <QString , int >::iterator it = pPrescriptionView->drugsList.begin();
    while(it != pPrescriptionView->drugsList.end())
    {
        ui->comboBox->addItem(QString::number(i) + it->first + "(" + QString::number(it->second) + ")");
    }
}

viewprescription::~viewprescription()
{
    delete ui;
}
