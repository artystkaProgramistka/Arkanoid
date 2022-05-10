//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TShape *tlo;
        TImage *b;
        TTimer *Timer_pilka;
        TImage *p;
        TTimer *prawo;
        TTimer *lewo;
        TImage *blok1;
        TImage *blok2;
        TImage *blok5;
        TImage *blok8;
        TImage *blok7;
        TImage *blok4;
        TImage *blok6;
        TImage *blok3;
        TImage *blok9;
        TImage *blok11;
        TImage *blok10;
        TImage *blok12;
        TBitBtn *button1;
        void __fastcall Timer_pilkaTimer(TObject *Sender);
        void __fastcall lewoTimer(TObject *Sender);
        void __fastcall prawoTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 