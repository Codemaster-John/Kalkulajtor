#ifndef UNITS_H
#define UNITS_H

#include <QMainWindow>

class Units : public QMainWindow
{
    Q_OBJECT
public:
    explicit Units(QWidget *parent = 0);
    ~Units();

    void update_geometry();


signals:
    //void update_geometry();

public slots:

};

#endif // UNITS_H
