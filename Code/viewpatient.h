#ifndef VIEWPATIENT_H
#define VIEWPATIENT_H

#include <QDialog>
#include "QMessageBox"
#include "database.cpp"
#include "viewprescription.h"

namespace Ui {
class viewPatient;
}

class viewPatient : public QDialog
{
    Q_OBJECT

public:
    explicit viewPatient(QWidget *parent = nullptr);
    void printElement_queue(patient*);
    void printElement_heap(patient*);
    ~viewPatient();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::viewPatient *ui;
};

#endif // VIEWPATIENT_H
