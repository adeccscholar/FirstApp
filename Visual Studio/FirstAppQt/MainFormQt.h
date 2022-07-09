#pragma once

#include <QtWidgets/QMainWindow>
#include <QLabel>
#include "ui_MainFormQt.h"

class frmMainQt : public QMainWindow
{
    Q_OBJECT

public:
    frmMainQt(QWidget *parent = nullptr);
    ~frmMainQt();

private:
    Ui::frmMainQtClass ui;
    QLabel* statusLabel;

private slots:
   void Action1(void);
   void Action2(void);
};
