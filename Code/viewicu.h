#ifndef VIEWICU_H
#define VIEWICU_H

#include <QDialog>
#include "QMessageBox"

namespace Ui {
class viewIcu;
}

class viewIcu : public QDialog
{
    Q_OBJECT

public:
    explicit viewIcu(QWidget *parent = nullptr);
    ~viewIcu();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::viewIcu *ui;
};

#endif // VIEWICU_H
