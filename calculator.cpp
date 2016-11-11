#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_button_0_clicked()
{
    ui->textBrowser->setText("0");
}

void Calculator::on_button_1_clicked()
{
    ui->textBrowser->setText("1");
}

void Calculator::on_button_2_clicked()
{
    ui->textBrowser->setText("2");
}

void Calculator::on_button_3_clicked()
{
    ui->textBrowser->setText("3");
}

void Calculator::on_button_4_clicked()
{
    ui->textBrowser->setText("4");
}

void Calculator::on_button_5_clicked()
{
    ui->textBrowser->setText("5");
}

void Calculator::on_button_6_clicked()
{
    ui->textBrowser->setText("6");
}

void Calculator::on_button_7_clicked()
{
    ui->textBrowser->setText("7");
}

void Calculator::on_button_8_clicked()
{
    ui->textBrowser->setText("8");
}

void Calculator::on_button_9_clicked()
{
    ui->textBrowser->setText("9");
}

void Calculator::on_buttonComma_clicked()
{
    ui->textBrowser->setText(",");
}

void Calculator::on_buttonAdd_clicked()
{
    ui->textBrowser->setText("+");
}

void Calculator::on_buttonSubtract_clicked()
{
    ui->textBrowser->setText("-");
}

void Calculator::on_buttonMultiply_clicked()
{
        ui->textBrowser->setText("x");
}

void Calculator::on_buttonShare_clicked()
{
    ui->textBrowser->setText("/");
}

void Calculator::on_buttonEqual_clicked()
{

}

void Calculator::on_buttonReplace_clicked()
{

}

void Calculator::on_backSpace_clicked()
{

}

void Calculator::on_reset_clicked()
{
    ui->textBrowser->setText(" ");
}

void Calculator::on_back_clicked()
{

}
