#ifndef WHICHICU_H
#define WHICHICU_H

#include <QDialog>

namespace Ui {
class whichIcu;
}

class whichIcu : public QDialog
{
    Q_OBJECT

public:
    explicit whichIcu(QWidget *parent = nullptr);
    ~whichIcu();

private slots:
        void on_pushButton_clicked();

private:
    Ui::whichIcu *ui;
};

#endif // WHICHICU_H
