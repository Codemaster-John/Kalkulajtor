#include "units.h"
#include "calculator.h"

Units::Units(QWidget *parent) : QMainWindow(parent)
{

}
Units::~Units()
{

}

void Units::update_geometry()
{
    int max_width = 750;
    for(int i = Calculator::Calculator.width();i <= max_width; i+=5)
    {
        Calculator::Calculator.resize(i,Calculator::Calculator.height();
    }
}
