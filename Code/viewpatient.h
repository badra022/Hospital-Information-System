#ifndef VIEWPATIENT_H
#define VIEWPATIENT_H

#include <QDialog>
#include "QMessageBox"


namespace Ui {
class viewPatient;
}

class viewPatient : public QDialog
{
    Q_OBJECT

public:
    explicit viewPatient(QWidget *parent = nullptr);
    ~viewPatient();

private:
    Ui::viewPatient *ui;
};

#endif // VIEWPATIENT_H
