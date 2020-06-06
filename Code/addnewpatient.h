#ifndef ADDNEWPATIENT_H
#define ADDNEWPATIENT_H

#include <QDialog>
#include "whichicu.h"
#include "ui_whichicu.h"
#include "QMessageBox"
namespace Ui {
class addNewPatient;
}

class addNewPatient : public QDialog
{
    Q_OBJECT

public:
    explicit addNewPatient(QWidget *parent = nullptr);
    ~addNewPatient();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addNewPatient *ui;
};

#endif // ADDNEWPATIENT_H
