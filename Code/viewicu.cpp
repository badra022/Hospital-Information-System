#include "viewicu.h"
#include "ui_viewicu.h"
#include "database.cpp"

viewIcu::viewIcu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewIcu)
{
    ui->setupUi(this);
    int i = 1;
    for(auto icu : IcuList)
    {
        ui->comboBox->addItem( QString::number(i) + " " + icu->name);
        i++;
    }
}

viewIcu::~viewIcu()
{
    delete ui;
}

void viewIcu::on_pushButton_2_clicked()
{
    int i = ui->comboBox->currentIndex();
    ui->label_5->setText(IcuList[i]->icuCode);
    ui->label_6->setText(QString::number(IcuList[i]->bed));
    ui->label_7->setText(IcuList[i]->manager);
}
