//---------------------------------------------------------------------------

#ifndef MainFormVCLH
#define MainFormVCLH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------


class TfrmMain : public TForm
{
__published:	// Von der IDE verwaltete Komponenten
    TPanel *pnlCtrl;
    TButton *btnAction;
    TPanel *pnlCenter;
    TMemo *memOutput;
    TMemo *memError;
    TSplitter *Splitter1;
    TButton *btnAction2;
    TStatusBar *sbMain;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall btnActionClick(TObject *Sender);
    void __fastcall btnAction2Click(TObject *Sender);
private:	// Benutzer-Deklarationen
    int Test(void);
public:		// Benutzer-Deklarationen
    __fastcall TfrmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain *frmMain;
//---------------------------------------------------------------------------
#endif
