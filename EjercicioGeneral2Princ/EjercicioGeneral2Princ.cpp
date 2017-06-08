#include "stdafx.h"  //________________________________________ EjercicioGeneral2Princ.cpp
#include "EjercicioGeneral2Princ.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjercicioGeneral2Princ app;
	return app.BeginDialog(IDI_EjercicioGeneral2Princ, hInstance);
}

void EjercicioGeneral2Princ::Window_Open(Win::Event& e)
{
}

void EjercicioGeneral2Princ::btJavier_Click(Win::Event& e)
{
}

void EjercicioGeneral2Princ::btAdri_Click(Win::Event& e)
{
}

void EjercicioGeneral2Princ::btFabi_Click(Win::Event& e)
{
	FabiDlg objFabi;
	objFabi.BeginDialog(hWnd);
}

void EjercicioGeneral2Princ::btAngel_Click(Win::Event& e)
{
	AngelDlg objAngel;
	objAngel.BeginDialog(hWnd);
}

void EjercicioGeneral2Princ::btJesus_Click(Win::Event& e)
{
}

