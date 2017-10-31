#include "gridsizer.h"
#include <iostream>
using namespace std;

GridSizer::GridSizer(const wxString& title)
       : wxFrame(NULL, -1, title, wxPoint(-1, -1), wxSize(270, 220))
{
  sizer = new wxBoxSizer(wxVERTICAL);
 
  display = new wxTextCtrl(this, -1, wxT(""), wxPoint(-1, -1),
     wxSize(-1, -1), wxTE_RIGHT);

  sizer->Add(display, 0, wxEXPAND | wxTOP | wxBOTTOM, 4);
  gs = new wxGridSizer(5, 4, 3, 3);

  gs->Add(new wxButton(this, 1050, wxT("Cls")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("Bck")), 0, wxEXPAND);
  gs->Add(new wxStaticText(this, -1, wxT("")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("Close")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("7")), 0, wxEXPAND); 
  gs->Add(new wxButton(this, -1, wxT("8")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("9")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1013, wxT("/")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1004, wxT("4")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1005, wxT("5")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("6")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1012, wxT("*")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1001, wxT("1")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1002, wxT("2")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1003, wxT("3")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("-")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1014, wxT("0")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT(".")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("=")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1011 , wxT("+")), 0, wxEXPAND);

  sizer->Add(gs, 1, wxEXPAND);
  SetSizer(sizer);
  SetMinSize(wxSize(270, 220));

  Centre();
}

void GridSizer::onCls (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	cout <<"Hola " << nClicks << endl;
}


void GridSizer::onBt1 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	cout <<"Hola " << nClicks << endl;
	if (nClicks==1)
		valor1 = 1;
	if (nClicks==2)
		valor2 = 1;
}

void GridSizer::onBt2 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	cout <<"Hola " << nClicks << endl;
	if (nClicks==1)
		valor1 = 2;
	if (nClicks==2)
		valor2 = 2;
}

void GridSizer::onBt3 (wxCommandEvent& WXUNUSED (event)) {
	nClicks +=1;
	cout<<"Hola"<< nClicks << endl;
	if(nClicks==1)
		valor1=3;
	if(nClicks==2)
		valor2=3;
}

void GridSizer::onBt4 (wxCommandEvent& WXUNUSED (event)) {
	nClicks +=1;
	cout<<"Hola"<<nClicks << endl;
	if(nClicks==1)
		valor1==4;
	if(nClicks=2)
		valor2==4;
}

void GridSizer::onBt5 (wxCommandEvent& WXUNUSED (event)) {
	nClicks +=1;
	if(nClicks==1)
		valor1==5;
	if(nClicks==2)
		valor2==5;
}



void GridSizer::onBtSum (wxCommandEvent& WXUNUSED (event)) {
	int total = valor1 + valor2;
	cout << "Resultado suma " << total << endl;
}

void GridSizer::onBtMult (wxCommandEvent& WXUNUSED (event)) {
	int totalm = valor1*valor2;
	cout<<"Resultado multiplicacion"<< totalm << endl;
}

void GridSizer::onBtDiv (wxCommandEvent& WXUNUNSED (event)) {
	int totald = valor1/valor2;
	cout<<"Resultado division"<< totald << endl;
}

void GridSizer::onBtRes (wxCommandEvent& WXUNUNSED (event)) {
	int totalr = valor1-valor2;
	cout<<"Resultado resta"<<totalr << endl;
}

BEGIN_EVENT_TABLE(GridSizer, wxFrame)
    EVT_BUTTON(1050,  GridSizer::onCls)
    EVT_BUTTON(1001,  GridSizer::onBt1)
    EVT_BUTTON(1002,  GridSizer::onBt2)
    EVT_BUTTON(1011,  GridSizer::onBtSum)
    EVT_BUTTON(1012,  GridSeizer::onBtMult)
    EVT_BUTTON(1013,  GridSeizer::onBtDiv)
    EVT_BUTTON(1003,  GridSeizer::onBt3)
    EVT_BUTTON(1004,  GridSeizer::onBt4)
    EVT_BUTTON(1005,  GridSeizer::onBt5)
END_EVENT_TABLE()
