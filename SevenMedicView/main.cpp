//#include "NuevaReservaCita.h"
//#include "MenuAlmacen.h"
#include "LoginGeneral.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace SevenMedicView;


void main(array <String^>^ args){

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//NuevaReservaCita  ventana;
	//MenuAlmacen ventana;
	LoginGeneral ventana;
	Application::Run(% ventana);

}