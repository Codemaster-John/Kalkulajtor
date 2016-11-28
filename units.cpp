#include "units.h"
#include "calculator.h"
#include <QDebug>

Units::Units(QWidget *parent) : QMainWindow(parent)
{

}
Units::~Units()
{

}

void Units::update_geometry()
{
    //Ui::Calculator calc;
    int max_width = 750;
    for(int i = 415 ;i <= max_width; i+=5)
    {
       this->resize(i,693);
    }

}
