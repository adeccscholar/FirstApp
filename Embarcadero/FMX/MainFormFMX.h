//---------------------------------------------------------------------------

#ifndef MainFormFMXH
#define MainFormFMXH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Memo.hpp>
#include <FMX.Memo.Types.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TfrmMainFMX : public TForm
{
__published:	// Von der IDE verwaltete Komponenten
    TStatusBar *sbContainer;
    TLabel *SbMain;
    TPanel *Panel1;
    TPanel *Panel2;
    TMemo *memOutput;
    TMemo *memError;
    TSplitter *Splitter1;
    TButton *btnAction1;
    TButton *btnAction2;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall btnAction1Click(TObject *Sender);
    void __fastcall btnAction2Click(TObject *Sender);
private:	// Benutzer-Deklarationen
public:		// Benutzer-Deklarationen
    __fastcall TfrmMainFMX(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMainFMX *frmMainFMX;
//---------------------------------------------------------------------------
#endif
