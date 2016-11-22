#pragma once
using namespace System;
ref class FuncionesGenerales
{
public:
	FuncionesGenerales();

public:
	static void WriteLog(String ^ file, String ^ text)
	{
		System::IO::StreamWriter ^ sw = gcnew System::IO::StreamWriter(file, true);
		sw->WriteLine(System::DateTime::Now.ToString() + " : " + text);
		sw->Close();
	}
};

