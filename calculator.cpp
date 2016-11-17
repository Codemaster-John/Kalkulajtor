#include "calculator.h"
#include "ui_calculator.h"
#include <QDebug>
#include <QSound>

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    waitingForOperand = true;
    multiplyClicked = false;
    divideClicked = false;

    factorTemp = 0.0;
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_button_0_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");

    if (ui->screen->text() == "0" && ui->button_0->text().toInt() == 0.0)
    {
        waitingForOperand = false;
        return;
    }

    //if (waitingForOperand)
    //{
    //    ui->screen->clear();
    //    waitingForOperand = false;
    //}

    ui->screen->setText(ui->screen->text() + "0");

}

void Calculator::on_button_1_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");

    if (ui->screen->text() == "0" && ui->button_1->text().toInt() == 0.0)
        return;

    if (waitingForOperand)
    {
        ui->screen->clear();
        waitingForOperand = false;
    }

    ui->screen->setText(ui->screen->text() + "1");
}

void Calculator::on_button_2_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");

    if (ui->screen->text() == "0" && ui->button_2->text().toInt() == 0.0)
        return;

    if (waitingForOperand)
    {
        ui->screen->clear();
        waitingForOperand = false;
    }

    ui->screen->setText(ui->screen->text() + "2");
}

void Calculator::on_button_3_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");

    if (ui->screen->text() == "0" && ui->button_3->text().toInt() == 0.0)
        return;

    if (waitingForOperand)
    {
        ui->screen->clear();
        waitingForOperand = false;
    }

    ui->screen->setText(ui->screen->text() + "3");
}

void Calculator::on_button_4_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");

    if (ui->screen->text() == "0" && ui->button_4->text().toInt() == 0.0)
        return;

    if (waitingForOperand)
    {
        ui->screen->clear();
        waitingForOperand = false;
    }

    ui->screen->setText(ui->screen->text() + "4");
}

void Calculator::on_button_5_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");

    if (ui->screen->text() == "0" && ui->button_5->text().toInt() == 0.0)
        return;

    if (waitingForOperand)
    {
        ui->screen->clear();
        waitingForOperand = false;
    }

    ui->screen->setText(ui->screen->text() + "5");
}

void Calculator::on_button_6_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");

    if (ui->screen->text() == "0" && ui->button_6->text().toInt() == 0.0)
        return;

    if (waitingForOperand)
    {
        ui->screen->clear();
        waitingForOperand = false;
    }

    ui->screen->setText(ui->screen->text() + "6");
}

void Calculator::on_button_7_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");

    if (ui->screen->text() == "0" && ui->button_7->text().toInt() == 0.0)
        return;

    if (waitingForOperand)
    {
        ui->screen->clear();
        waitingForOperand = false;
    }

    ui->screen->setText(ui->screen->text() + "7");
}

void Calculator::on_button_8_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");

    if (ui->screen->text() == "0" && ui->button_8->text().toInt() == 0.0)
        return;

    if (waitingForOperand)
    {
        ui->screen->clear();
        waitingForOperand = false;
    }

    ui->screen->setText(ui->screen->text() + "8");
}

void Calculator::on_button_9_clicked()
{
    QSound::play(":/new/sounds/metal_click_1.wav");

    if (ui->screen->text() == "0" && ui->button_9->text().toInt() == 0.0)
        return;

    if (waitingForOperand)
    {
        ui->screen->clear();
        waitingForOperand = false;
    }

    ui->screen->setText(ui->screen->text() + "9");
}

void Calculator::on_buttonComma_clicked()
{
    ui->screen->setText(ui->screen->text() + ",");
    waitingForOperand = false;
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
    double operand = ui->screen->text().toDouble();
    qDebug() << operand;

    if(multiplyClicked)
    {
        if(true)
        {
            factorTemp *= operand;
        }
        ui->screen->setText(QString::number(factorTemp));
    }
    else
    {
        factorTemp = operand;
    }

    multiplyClicked = true;

    //ui->screen->setText(ui->screen->text());
    ui->screen1->setText(ui->screen1->text().append(QString::number(operand) + " * "));

    waitingForOperand = true;
}

void Calculator::on_buttonShare_clicked()
{
    double operand = ui->screen->text().toDouble();
    qDebug() << operand;

    if(divideClicked)
    {
        if(true)
        {
            factorTemp /= operand;
        }
        ui->screen->setText(QString::number(factorTemp));
    }
    else
    {
        factorTemp = operand;
    }

    divideClicked = true;

    ui->screen1->setText(ui->screen1->text().append(QString::number(operand) + " / "));

    waitingForOperand = true;
}

void Calculator::on_buttonEqual_clicked()
{
    QString text = ui->screen1->text();
    double operand = ui->screen->text().toDouble();

    if(text.remove(0,(text.length()-3)) == " + ")
    {

    }
    if(text.remove(0,(text.length()-3)) == " - ")
    {

    }
    if(text.remove(0,(text.length()-3)) == " * ")
    {
        factorTemp *= operand;
        ui->screen->setText(QString::number(factorTemp));
        ui->screen1->clear();
    }
    if(text.remove(0,(text.length()-3)) == " / ")
    {
        if (operand == 0.0)
        {
            ui->screen->setText("Nie można dzielić przez 0");
            return;
        }
        factorTemp /= operand;
        ui->screen->setText(QString::number(factorTemp));
        ui->screen1->clear();
    }


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
    //else if(value == 0.0)
    //{
    //    text.clear();
    //}

    ui->screen->setText(text);
}

//FIXME: sprawdzic jeszcze raz dla np. 0.345 itd, zmień if na switch-case
void Calculator::on_backSpace_clicked()
{
    QString text = ui->screen->text();

    if (text.indexOf("-",0) == true || text.length() <= 2)
    {
        if (text.toDouble() > 0.0)
        {
            ui->screen->backspace();
        }
        else
        {
            ui->screen->setText("0");
            waitingForOperand = true;
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
    ui->screen1->clear();
    ui->screen->setText("0");

    factorTemp = 0.0;
    multiplyClicked = false;
    divideClicked = false;
    waitingForOperand = true;
}

void Calculator::on_back_clicked()
{

}
