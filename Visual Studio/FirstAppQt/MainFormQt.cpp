#include <MyForm.h>
#include <MyStream.h>

#include "MainFormQt.h"

TStreamWrapper<Narrow> old_cout(std::cout);
TStreamWrapper<Narrow> old_cerr(std::cerr);
TStreamWrapper<Narrow> old_clog(std::clog);

frmMainQt::frmMainQt(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    ui.statusBar->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
    statusLabel = new QLabel(this);
    statusLabel->setObjectName("sbMain");
    statusLabel->setText("sbMain");
    ui.statusBar->addPermanentWidget(statusLabel);

    connect(ui.btnAction1, SIGNAL(clicked()), this, SLOT(Action1()));
    connect(ui.btnAction2, SIGNAL(clicked()), this, SLOT(Action2()));

    TMyForm frm(this);
    frm.SetCaption("first app for visual studio with qt6");
    frm.GetAsStream<Narrow, EMyFrameworkType::memo>(old_cout, "memOutput");
    frm.GetAsStream<Narrow, EMyFrameworkType::memo>(old_cerr, "memError");
    frm.GetAsStream<Narrow, EMyFrameworkType::statusbar>(old_clog, "sbMain");

    for (auto s : { &std::cout, &std::cerr, &std::clog }) s->setf(std::ios::fixed);
    std::clog << "ready ..." << std::endl;
}

frmMainQt::~frmMainQt() {
}


void frmMainQt::Action1(void) {
   try {
      std::cout << "first action" << std::endl;
   }
   catch (std::exception& ex) {
      std::cerr << "error: " << ex.what() << std::endl;
   }
}

void frmMainQt::Action2(void) {
   try {
      std::cout << "second action" << std::endl;
   }
   catch (std::exception& ex) {
      std::cerr << "error: " << ex.what() << std::endl;
   }
}
