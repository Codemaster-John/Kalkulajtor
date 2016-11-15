#include "calculator.h"
#include "ui_calculator.h"
#include <QDebug>
//#include <QSound>

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    waitingForOperand = true;
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_button_0_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");
    ui->screen->setText(ui->screen->text() + "0");

}

void Calculator::on_button_1_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");
    ui->screen->setText(ui->screen->text() + ui->button_1->text());
}

void Calculator::on_button_2_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");
    ui->screen->setText(ui->screen->text() + ui->button_2->text());
}

void Calculator::on_button_3_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");
    ui->screen->setText(ui->screen->text() + ui->button_3->text());
}

void Calculator::on_button_4_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");
    ui->screen->setText(ui->screen->text() + ui->button_4->text());
}

void Calculator::on_button_5_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");
    ui->screen->setText(ui->screen->text() + ui->button_5->text());
}

void Calculator::on_button_6_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");
    ui->screen->setText(ui->screen->text() + ui->button_6->text());
}

void Calculator::on_button_7_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");
    ui->screen->setText(ui->screen->text() + ui->button_7->text());
}

void Calculator::on_button_8_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");
    ui->screen->setText(ui->screen->text() + ui->button_8->text());
}

void Calculator::on_button_9_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");
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
    QString text = ui->screen->text();
    double value = text.toDouble();

    if(value > 0.0)
    {
        text.prepend(tr("-"));
    }
    else if (value < 0.0)
    {
        text.remove(0,1);
    }
    else if(value == 0.0)
    {
        text.clear();
    }

    ui->screen->setText(text);
}


void Calculator::on_backSpace_clicked()
{
    QString text = ui->screen->text();

    if (text.length() <= 2)
    {
        if (text.toDouble() > 0.0)
        {
            ui->screen->backspace();
        }
        else
        {
            ui->screen->clear();
        }
        //text.clear();
    }
    else if( text.length() > 2 )
    {
        ui->screen->backspace();
    }
}

void Calculator::on_reset_clicked()
{
    ui->screen->clear();
    ui->screen->setPlaceholderText("0");
}

void Calculator::on_back_clicked()
{

}
