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
    ui->screen->setText(ui->screen->text() + ui->button_0->text());
}

void Calculator::on_button_1_clicked()
{
    ui->screen->setText(ui->screen->text() + ui->button_1->text());
}

void Calculator::on_button_2_clicked()
{
    ui->screen->setText(ui->screen->text() + ui->button_2->text());
}

void Calculator::on_button_3_clicked()
{
    ui->screen->setText(ui->screen->text() + ui->button_3->text());
}

void Calculator::on_button_4_clicked()
{
    ui->screen->setText(ui->screen->text() + ui->button_4->text());
}

void Calculator::on_button_5_clicked()
{
    ui->screen->setText(ui->screen->text() + ui->button_5->text());
}

void Calculator::on_button_6_clicked()
{
    ui->screen->setText(ui->screen->text() + ui->button_6->text());
}

void Calculator::on_button_7_clicked()
{
    ui->screen->setText(ui->screen->text() + ui->button_7->text());
}

void Calculator::on_button_8_clicked()
{
    ui->screen->setText(ui->screen->text() + ui->button_8->text());
}

void Calculator::on_button_9_clicked()
{
    ui->screen->setText(ui->screen->text() + ui->button_9->text());
}

void Calculator::on_buttonComma_clicked()
{
    ui->screen->setText(ui->screen->text() + ui->buttonComma->text());
}

void Calculator::on_buttonAdd_clicked()
{
    ui->screen->setText(ui->screen->text() + ui->buttonAdd->text());
}

void Calculator::on_buttonSubtract_clicked()
{
    ui->screen->setText(ui->screen->text() + ui->buttonSubtract->text());
}

void Calculator::on_buttonMultiply_clicked()
{
    ui->screen->setText(ui->screen->text() + ui->buttonMultiply->text());
}

void Calculator::on_buttonShare_clicked()
{
    ui->screen->setText(ui->screen->text() + ui->buttonShare->text());
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
