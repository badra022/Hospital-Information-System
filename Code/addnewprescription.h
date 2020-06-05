#ifndef ADDNEWPRESCRIPTION_H
#define ADDNEWPRESCRIPTION_H

#include <QDialog>

namespace Ui {
class addNewPrescription;
}

class addNewPrescription : public QDialog
{
    Q_OBJECT

public:
    explicit addNewPrescription(QWidget *parent = nullptr);
    ~addNewPrescription();

private:
    Ui::addNewPrescription *ui;
};

#endif // ADDNEWPRESCRIPTION_H
