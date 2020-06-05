#ifndef ADDNEWPATIENT_H
#define ADDNEWPATIENT_H

#include <QDialog>

namespace Ui {
class addNewPatient;
}

class addNewPatient : public QDialog
{
    Q_OBJECT

public:
    explicit addNewPatient(QWidget *parent = nullptr);
    ~addNewPatient();

private:
    Ui::addNewPatient *ui;
};

#endif // ADDNEWPATIENT_H
