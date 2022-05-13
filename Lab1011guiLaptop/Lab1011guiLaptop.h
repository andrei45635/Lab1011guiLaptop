#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Lab1011guiLaptop.h"

class Lab1011guiLaptop : public QMainWindow
{
    Q_OBJECT

public:
    Lab1011guiLaptop(QWidget *parent = Q_NULLPTR);

private:
    Ui::Lab1011guiLaptopClass ui;
};
