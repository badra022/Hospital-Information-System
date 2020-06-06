#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionnewPatient_triggered();

    void on_actionnewDoctor_triggered();

    void on_actionnewIcu_triggered();

    void on_actionnewPrescription_triggered();

    void on_actionpatients_triggered();

    void on_actiondoctors_triggered();

    void on_actionicus_triggered();

    void on_actionprescriptions_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
