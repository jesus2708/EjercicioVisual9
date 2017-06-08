#pragma once  //______________________________________ EjercicioGeneral2Princ.h  
#include "Resource.h"
#include "AngelDlg.h"
class EjercicioGeneral2Princ : public Win::Dialog
{
public:
	EjercicioGeneral2Princ()
	{
	}
	~EjercicioGeneral2Princ()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btJavier;
	Win::Button btAdri;
	Win::Button btFabi;
	Win::Button btAngel;
	Win::Button btJesus;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(1045);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(216);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjercicioGeneral2Princ";
		btJavier.Create(NULL, L"Javier", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 243, 181, 111, 28, hWnd, 1000);
		btAdri.Create(NULL, L"Adri", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 392, 181, 122, 28, hWnd, 1001);
		btFabi.Create(NULL, L"Fabi", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 552, 181, 131, 28, hWnd, 1002);
		btAngel.Create(NULL, L"Angel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 721, 181, 131, 28, hWnd, 1003);
		btJesus.Create(NULL, L"Jesus", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 890, 181, 148, 28, hWnd, 1004);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		btJavier.Font = fontArial014A;
		btAdri.Font = fontArial014A;
		btFabi.Font = fontArial014A;
		btAngel.Font = fontArial014A;
		btJesus.Font = fontArial014A;
	}
	//_________________________________________________
	void btJavier_Click(Win::Event& e);
	void btAdri_Click(Win::Event& e);
	void btFabi_Click(Win::Event& e);
	void btAngel_Click(Win::Event& e);
	void btJesus_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btJavier.IsEvent(e, BN_CLICKED)) { btJavier_Click(e); return true; }
		if (btAdri.IsEvent(e, BN_CLICKED)) { btAdri_Click(e); return true; }
		if (btFabi.IsEvent(e, BN_CLICKED)) { btFabi_Click(e); return true; }
		if (btAngel.IsEvent(e, BN_CLICKED)) { btAngel_Click(e); return true; }
		if (btJesus.IsEvent(e, BN_CLICKED)) { btJesus_Click(e); return true; }
		return false;
	}
};
