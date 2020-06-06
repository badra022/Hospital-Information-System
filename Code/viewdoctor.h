#ifndef VIEWDOCTOR_H
#define VIEWDOCTOR_H

#include <QDialog>
#include "QMessageBox"


namespace Ui {
class viewDoctor;
}

class viewDoctor : public QDialog
{
    Q_OBJECT

public:
    explicit viewDoctor(QWidget *parent = nullptr);
    ~viewDoctor();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::viewDoctor *ui;
};

#endif // VIEWDOCTOR_H
