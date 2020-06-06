#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "database.h"
#include "addnewpatient.h"
#include "addnewdoctor.h"
#include "addnewicu.h"
#include "addnewprescription.h"
#include "viewdoctor.h"
#include "viewicu.h"
#include "viewpatient.h"
#include "viewprescription.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionnewPatient_triggered()
{
    addNewPatient _patient;
    _patient.setModal(true);
    _patient.exec();
}

void MainWindow::on_actionnewDoctor_triggered()
{
    addNewDoctor _doctor;
    _doctor.setModal(true);
    _doctor.exec();
}

void MainWindow::on_actionnewIcu_triggered()
{
    addNewIcu _icu;
    _icu.setModal(true);
    _icu.exec();
}

void MainWindow::on_actionnewPrescription_triggered()
{
    addNewPrescription _pre;
    _pre.setModal(true);
    _pre.exec();
}

void MainWindow::on_actionpatients_triggered()
{
    viewPatient _patient;
    _patient.setModal(true);
    _patient.exec();
}

void MainWindow::on_actiondoctors_triggered()
{
    viewDoctor _doctor;
    _doctor.setModal(true);
    _doctor.exec();
}



void MainWindow::on_actionicus_triggered()
{
    viewIcu _icu;
    _icu.setModal(true);
    _icu.exec();
}



void MainWindow::on_actionprescriptions_triggered()
{
    viewprescription _pre;
    _pre.setModal(true);
    _pre.exec();
}
