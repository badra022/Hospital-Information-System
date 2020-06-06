#include "addnewicu.h"
#include "ui_addnewicu.h"
#include "database.cpp"

addNewIcu::addNewIcu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNewIcu)
{
    ui->setupUi(this);
}

addNewIcu::~addNewIcu()
{
    delete ui;
}

void addNewIcu::on_pushButton_clicked()
{
    if(IcuList.size() == N_ICU)
    {
        QMessageBox::critical(this, tr("Status") , tr("No place for new Icu!"));
        ui->pushButton_2->clicked();
    }
    else
    {
    /* adding new icu data and it's list of patients */
    bool distinct = true;
    Icu* newicu = new Icu;
    do{
        newicu->name = ui->lineEdit->text();
        newicu->icuCode = ui->lineEdit_2->text();
        newicu->manager = ui->lineEdit_3->text();
        newicu->bed = ui->lineEdit_4->text().toLong();
        for(auto icu : IcuList)
        {
            if(icu->name == newicu->name || icu->icuCode == newicu->icuCode){
                distinct = false;
            }
        }
    }while(!distinct);
    IcuList.push_back(newicu);
    QMessageBox::information(this, tr("Status") , tr("Success!"));
    ui->pushButton_2->clicked();
    }
}
