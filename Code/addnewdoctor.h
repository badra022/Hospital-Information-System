#ifndef ADDNEWDOCTOR_H
#define ADDNEWDOCTOR_H

#include <QDialog>
#include "QMessageBox"

namespace Ui {
class addNewDoctor;
}

class addNewDoctor : public QDialog
{
    Q_OBJECT

public:
    explicit addNewDoctor(QWidget *parent = nullptr);
    ~addNewDoctor();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addNewDoctor *ui;
};

#endif // ADDNEWDOCTOR_H
