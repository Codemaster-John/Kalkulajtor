#ifndef UNITS_H
#define UNITS_H

#include <QMainWindow>

class Units : public QMainWindow
{
    Q_OBJECT
public:
    explicit Units(QWidget *parent = 0);
    ~Units();
signals:

public slots:
    void update_geometry();
};

#endif // UNITS_H
