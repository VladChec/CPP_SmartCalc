#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QVector>
#include <QMainWindow>

#include <stdio.h>
#include <stdlib.h>
#include <sstream>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

namespace s21 {
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:

    Ui::MainWindow *ui;


        int x_select = 1;
        int x_flag = 0;
        int xrange_flag = 0;
        int xrange = 1;
        double xconst = 0;
        double h = 2*xrange/50;
        double xBegin = -1*xrange;
        double xEnd = xrange;
        QVector<double> x,y;



        const char *str = NULL;
        const char *x_str = NULL;
        double x_point = 0;
        double res = 0;

private slots:
    void pushButtonRavno();
    void enter_scob();
    void pushButtonX();
    void enter_obnul();
    void enter_symbols();

    void on_spinBox_7_valueChanged(int arg1);
    void on_radioButton_13_toggled(bool checked);
    void on_radioButton_14_toggled(bool checked);
    void on_doubleSpinBox_7_valueChanged(double arg1);


};
#endif // MAINWINDOW_H
}  // namespace s21
