#ifndef VIEWPRESCRIPTION_H
#define VIEWPRESCRIPTION_H

#include <QDialog>
#include "QMessageBox"


namespace Ui {
class viewprescription;
}

class viewprescription : public QDialog
{
    Q_OBJECT

public:
    explicit viewprescription(QWidget *parent = nullptr);
    ~viewprescription();

private:
    Ui::viewprescription *ui;
};

#endif // VIEWPRESCRIPTION_H
