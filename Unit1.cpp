//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Form1->Canvas->Brush->Color = clWhite;
	Form1->Canvas->Ellipse(10, 10, 50, 50);
	Form1->Canvas->Brush->Color = clBlack;
	Form1->Canvas->Ellipse(50, 50, 170, 170);
}
//---------------------------------------------------------------------------
