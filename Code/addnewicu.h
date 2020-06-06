#ifndef ADDNEWICU_H
#define ADDNEWICU_H

#include <QDialog>
#include "QMessageBox"

namespace Ui {
class addNewIcu;
}

class addNewIcu : public QDialog
{
    Q_OBJECT

public:
    explicit addNewIcu(QWidget *parent = nullptr);
    ~addNewIcu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addNewIcu *ui;
};

#endif // ADDNEWICU_H
