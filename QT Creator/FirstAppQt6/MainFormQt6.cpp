//---------------------------------------------------------------------------
// Sample application for C++ lecture and assignments.
// These applications use the library "adecc Scholar" to use text fields in
// the GUI interface as output stream.
// Variant for Visual Studio with Qt6
// predefine BUILD_WITH_QT

// The project was created with Visual Studio 2019. To use it, Qt6 must also
// be installed on the computer. You also need the Visual Studio Addon for Qt.


//===========================================================================
// part to define the techniqual base for the programm
//===========================================================================

#include "MainFormQt6.h"
#include "./ui_MainFormQt6.h"

#include <MyForm.h>
#include <MyStream.h>

TStreamWrapper<Narrow> old_cout(std::cout);
TStreamWrapper<Narrow> old_cerr(std::cerr);
TStreamWrapper<Narrow> old_clog(std::clog);

frmMain::frmMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::frmMain)
{
    ui->setupUi(this);

    ui->statusbar->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
    statusLabel = new QLabel(this);
    statusLabel->setObjectName("sbMain");
    statusLabel->setText("sbMain");
    ui->statusbar->addPermanentWidget(statusLabel);

    connect(ui->btnAction1, SIGNAL(clicked()), this, SLOT(Action1()));
    connect(ui->btnAction2, SIGNAL(clicked()), this, SLOT(Action2()));

    TMyForm frm(this);
    frm.SetCaption("first app for QT Creator 7");
    frm.GetAsStream<Narrow, EMyFrameworkType::memo>(old_cout, "memOutput");
    frm.GetAsStream<Narrow, EMyFrameworkType::memo>(old_cerr, "memError");
    frm.GetAsStream<Narrow, EMyFrameworkType::statusbar>(old_clog, "sbMain");

    for (auto s : { &std::cout, &std::cerr, &std::clog }) s->setf(std::ios::fixed);
    std::clog << "ready ..." << std::endl;

}

frmMain::~frmMain()
{
    delete ui;
}


//===========================================================================
//                        Start of the exercise task
//                       use only C++ from this point
//===========================================================================

#include <iomanip>
#include <exception>

void frmMain::Action1(void) {
   try {
      std::cout << "first action" << std::endl;
   }
   catch (std::exception& ex) {
      std::cerr << "error: " << ex.what() << std::endl;
   }
}

void frmMain::Action2(void) {
   try {
      std::cout << "second action" << std::endl;
   }
   catch (std::exception& ex) {
      std::cerr << "error: " << ex.what() << std::endl;
   }
}
