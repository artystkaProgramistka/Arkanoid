//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

    int x=8;
    int y=8;

    int do_wygranej=12;

    bool kolizja(TImage * pilka, TImage * cegla)
    {
       if (pilka -> Left >= cegla -> Left - pilka -> Width && pilka ->
        Left <= cegla -> Left + cegla -> Width &&
        pilka -> Top >= cegla -> Top - pilka -> Height &&
        pilka -> Top <= cegla -> Top + cegla -> Height)
        {
            return true;
        }   else return false;
    }
    
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer_pilkaTimer(TObject *Sender)
{
    b -> Left+=x;
    b -> Top+=y;

    //odbij od lewej sciany
    if (b -> Left-5 <= tlo -> Left) x= -x  ;

    //odbij od górnej sciany
    if (b -> Top-5 <= tlo -> Top) y = -y;

    //odbij od prawej sciany
    if (b -> Left+b -> Width+5 >= tlo -> Width) x = -x;

    //skucha!
    if (b -> Top >= p -> Top+p -> Height + 15)
    {
        Timer_pilka -> Enabled = false;
        b -> Visible = false;
        button1 -> Caption = "Pora¿ka! Jeszcze raz?";
        button1 -> Visible = true;

    } else if (b -> Left > p -> Left-b->Width/2 &&
        b -> Left < p -> Left + p -> Width &&
        b -> Top+b -> Height > p -> Top)
        {
            if (y>0) y=-y;
        }
    if (do_wygranej <= 0)
    {
       Timer_pilka -> Enabled=false;
       b -> Visible=false;
       button1 -> Caption = "Wygrana! Jeszcze raz?";
       button1 -> Visible = true;

    }

    //blok1
    if (kolizja(b,blok1) && blok1 -> Visible == true)
    {
       x = -x; y = -y; blok1 -> Visible =false; do_wygranej--;
    }

    //blok2
    if (kolizja(b,blok2) && blok2 -> Visible == true)
    {
       x = -x; y = -y; blok2 -> Visible =false; do_wygranej--;
    }

    //blok3
    if (kolizja(b,blok3) && blok3 -> Visible == true)
    {
       x = -x; y = -y; blok3 -> Visible =false; do_wygranej--;
    }

    //blok4
    if (kolizja(b,blok4) && blok4-> Visible == true)
    {
       x = -x; y = -y; blok4 -> Visible =false; do_wygranej--;
    }

    //blok5
    if (kolizja(b,blok5) && blok5-> Visible == true)
    {
       x = -x; y = -y; blok5 -> Visible =false; do_wygranej--;
    }

    //blok6
    if (kolizja(b,blok6) && blok6-> Visible == true)
    {
       x = -x; y = -y; blok6 -> Visible =false; do_wygranej--;
    }

    //blok7
    if (kolizja(b,blok7) && blok7-> Visible == true)
    {
       x = -x; y = -y; blok7 -> Visible =false; do_wygranej--;
    }

    //blok8
    if (kolizja(b,blok8) && blok8-> Visible == true)
    {
       x = -x; y = -y; blok8 -> Visible =false; do_wygranej--;
    }

    //blok9
    if (kolizja(b,blok9) && blok9-> Visible == true)
    {
       x = -x; y = -y; blok9 -> Visible =false; do_wygranej--;
    }

    //blok10
    if (kolizja(b,blok10) && blok10-> Visible == true)
    {
       x = -x; y = -y; blok10 -> Visible =false; do_wygranej--;
    }

    //blok11
    if (kolizja(b,blok11) && blok11-> Visible == true)
    {
       x = -x; y = -y; blok11 -> Visible =false; do_wygranej--;
    }

    //blok12
    if (kolizja(b,blok12) && blok12-> Visible == true)
    {
       x = -x; y = -y; blok12 -> Visible =false; do_wygranej--;
    }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::lewoTimer(TObject *Sender)
{
   if (p -> Left > 10) p -> Left -= 10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::prawoTimer(TObject *Sender)
{
   if (p -> Left+p -> Width < tlo -> Width - 10) p -> Left += 10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if (Key == VK_LEFT) lewo -> Enabled = true;
   if (Key == VK_RIGHT) prawo -> Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if (Key == VK_LEFT) lewo -> Enabled = false;
   if (Key == VK_RIGHT) prawo -> Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::button1Click(TObject *Sender)
{
    b -> Left = 50;
    b -> Top = 50;

    b -> Visible = true;
    x=-8; y=-8;
    Timer_pilka -> Enabled = true;

    button1 -> Visible = false;
    do_wygranej = 12;

    blok1 -> Visible=true;  blok5 -> Visible=true;  blok9 -> Visible=true;
    blok2 -> Visible=true;  blok6 -> Visible=true;  blok10 -> Visible=true;
    blok3 -> Visible=true;  blok7 -> Visible=true;  blok11 -> Visible=true;
    blok4 -> Visible=true;  blok8 -> Visible=true;  blok12 -> Visible=true;
}
//---------------------------------------------------------------------------

