#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../Controller/controller.h"
namespace s21 {
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

        connect(ui->pushButton0,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButton1,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButton2,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButton3,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButton4,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButton5,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButton6,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButton7,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButton8,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButton9,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButtonSkobka1,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButtonSkobka2,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButtonStepeni,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButtonX,SIGNAL(clicked(bool)),this,SLOT(pushButtonX()));
        connect(ui->pushButtonDiv,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButtonMul,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButtonSub,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButtonAdd,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButtonMod,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));
        connect(ui->pushButtonAC,SIGNAL(clicked(bool)),this,SLOT(enter_obnul()));



        connect(ui->pushButtonSin,SIGNAL(clicked(bool)),this,SLOT(enter_scob()));
        connect(ui->pushButtonCos,SIGNAL(clicked(bool)),this,SLOT(enter_scob()));
        connect(ui->pushButtonTan,SIGNAL(clicked(bool)),this,SLOT(enter_scob()));
        connect(ui->pushButtonAtan,SIGNAL(clicked(bool)),this,SLOT(enter_scob()));
        connect(ui->pushButtonAcos,SIGNAL(clicked(bool)),this,SLOT(enter_scob()));
        connect(ui->pushButtonAsin,SIGNAL(clicked(bool)),this,SLOT(enter_scob()));
        connect(ui->pushButtonLog,SIGNAL(clicked(bool)),this,SLOT(enter_scob()));
        connect(ui->pushButtonSqrt,SIGNAL(clicked(bool)),this,SLOT(enter_scob()));

        connect(ui->pushButtonRavno,SIGNAL(clicked(bool)),this,SLOT(pushButtonRavno()));
        connect(ui->pushButtonLn,SIGNAL(clicked(bool)),this,SLOT(enter_scob()));

        connect(ui->pushButtonDot,SIGNAL(clicked(bool)),this,SLOT(enter_symbols()));


        ui->widget->addGraph();
            h = xrange * 0.0004;
            xBegin = -1*xrange;
            xEnd = xrange;
            ui->widget->xAxis->setRange(-1*xrange, xrange);
            ui->widget->yAxis->setRange(-1*xrange, xrange);
            ui->widget->replot();


}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::enter_symbols()
{
    ui->lineEdit->setText(ui->lineEdit->text() +
                        qobject_cast<QPushButton *>(sender())->text());
}

void MainWindow::enter_scob()
{
    ui->lineEdit->setText(ui->lineEdit->text() +
                        qobject_cast<QPushButton *>(sender())->text() + "(");
}

void MainWindow::enter_obnul()
{
    ui->lineEdit->setText(0);
    xrange_flag = 0;
    x_flag = 0;
}
void MainWindow::pushButtonX()
{
    x_flag = 1;
    ui->lineEdit->insert("x");
}

void MainWindow::pushButtonRavno()
{
    int err = 0;
    s21::Controller controller;
    std::string text = ui->lineEdit->text().toUtf8().constData();
    str = text.c_str();
x_point = xconst;

    if (str[strlen(str) - 1] != '.' && str[strlen(str) - 1] != '\0')   {
        if (((x_select == 0) && (x_flag == 1)) || ((x_flag == 0))) {


            double res = controller.GetResult(str, x_point); // Получение результата из контроллера

            if (std::abs(res) < 0.0000000001) {
                ui->lineEdit->setText("");
            } else {
                QString result_str = QString::number(res, 'f', 7); // Преобразование double в QString с 7 знаками после запятой
                ui->lineEdit->setText(result_str);
                ui->widget->clearGraphs();
                ui->widget->addGraph(0);
                ui->widget->graph(0)->setData(x, y); // Установка данных для графика
                ui->widget->xAxis->setRange(-1 * xrange, xrange);
                ui->widget->yAxis->setRange(-1 * xrange, xrange);
                ui->widget->replot();
            }
        } else if ((x_flag == 1) && (x_select == 1)) {

            x.clear();
            y.clear();
            ui->widget->clearGraphs();
            ui->widget->addGraph(0);

            ui->widget->graph(0)->setPen(QColor(255, 0, 0, 255));
            ui->widget->graph(0)->setLineStyle(QCPGraph::lsNone);
            ui->widget->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 2));

            ui->widget->xAxis->setRange(-1*xrange, xrange);
            ui->widget->yAxis->setRange(-1*xrange, xrange);

            h = 0.0004 * xrange;
            xBegin = -1 * xrange;
            xEnd = xrange;

            for (x_point = xBegin; x_point < xEnd;) {
                double res = controller.GetResult(str, x_point);

                {
                    x.push_back(x_point);
                    y.push_back(res);

                    x_point = x_point + h;
                }
            }

            if (err == 0) {
                ui->widget->graph(0)->setData(x, y); // Установка данных для графика
                ui->widget->replot();
                ui->lineEdit->setText("");
            }
            x_flag = 0;
        }
    } else {
        ui->lineEdit->setText("");
    }
}


//void MainWindow::paintEv()
void MainWindow::on_spinBox_7_valueChanged(int arg1)
{
        xrange = arg1;



}


void MainWindow::on_radioButton_13_toggled(bool checked)
{

        if (checked) x_select = 0;
}


void MainWindow::on_radioButton_14_toggled(bool checked)
{
if (checked) x_select = 1;
}


void MainWindow::on_doubleSpinBox_7_valueChanged(double arg1)
{
        xconst = arg1;

}

}  // namespace s21


