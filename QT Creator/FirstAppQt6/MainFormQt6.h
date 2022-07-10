#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QMainWindow>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class frmMain; }
QT_END_NAMESPACE

class frmMain : public QMainWindow
{
    Q_OBJECT

public:
    frmMain(QWidget *parent = nullptr);
    ~frmMain();

private:
    Ui::frmMain *ui;

    QLabel* statusLabel;

private slots:
   void Action1(void);
   void Action2(void);
};
#endif // FRMMAIN_H
