#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private slots:
    void on_button_0_clicked();

    void on_button_1_clicked();

    void on_button_2_clicked();

    void on_button_3_clicked();

    void on_button_4_clicked();

    void on_button_5_clicked();

    void on_button_6_clicked();

    void on_button_7_clicked();

    void on_button_8_clicked();

    void on_button_9_clicked();

    void on_buttonComma_clicked();

    void on_buttonAdd_clicked();

    void on_buttonSubtract_clicked();

    void on_buttonMultiply_clicked();

    void on_buttonShare_clicked();

    void on_buttonEqual_clicked();

    void on_buttonReplace_clicked();

    void on_backSpace_clicked();

    void on_reset_clicked();

    void on_back_clicked();

    void on_actionPrzelicznik_jednostek_triggered();

private:
    Ui::Calculator *ui;

    bool waitingForOperand;

    bool addClicked;
    bool subtractClicked;
    bool multiplyClicked;
    bool divideClicked;

    double sumTemp;
    double factorTemp;

    int length;

};

#endif // CALCULATOR_H
