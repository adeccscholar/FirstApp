//---------------------------------------------------------------------------
// Sample application for C++ lecture and assignments.
// These applications use the library "adecc Scholar" to use text fields in
// the GUI interface as output stream.
// Variant for Visual Component Framework (VCL) of Embarcadero
// predefine BUILD_WITH_VCL

#include <vcl.h>
#pragma hdrstop

#include "MainFormVCL.h"
#include <MyForm.h>
#include <MyStream.h>

#pragma package(smart_init)
#pragma resource "*.dfm"

//===========================================================================
// part to define the techniqual base for the programm
//===========================================================================

TfrmMain *frmMain;

TStreamWrapper<Narrow> old_cout(std::cout);
TStreamWrapper<Narrow> old_cerr(std::cerr);
TStreamWrapper<Narrow> old_clog(std::clog);

//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner): TForm(Owner) {
   }

//---------------------------------------------------------------------------
void __fastcall TfrmMain::FormCreate(TObject *Sender) {
   TMyForm frm(this);
   frm.SetCaption("first app for vcl");
   frm.GetAsStream<Narrow, EMyFrameworkType::memo>(old_cout, "memOutput");
   frm.GetAsStream<Narrow, EMyFrameworkType::memo>(old_cerr, "memError");
   frm.GetAsStream<Narrow, EMyFrameworkType::statusbar>(old_clog, "sbMain");

   for(auto s : { &std::cout, &std::cerr, &std::clog } ) s->setf(std::ios::fixed);
   std::clog << "ready ..." << std::endl;
   }

//===========================================================================
//                        Start of the exercise task
//                       use only C++ from this point
//===========================================================================

#include <iomanip>

//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnActionClick(TObject *Sender) {
   try {
      std::cout << "first action" << std::endl;
      }
   catch(std::exception& ex) {
      std::cerr << "error: " << ex.what() << std::endl;
      }
   }

//---------------------------------------------------------------------------

void __fastcall TfrmMain::btnAction2Click(TObject *Sender) {
   try {
      std::cout << "second action" << std::endl;
      }
   catch(std::exception& ex) {
      std::cerr << "error: " << ex.what() << std::endl;
      }
   }
//---------------------------------------------------------------------------


