#include "HistorialMedicoController.h"

using namespace SevenMedicController;
using namespace SevenMedicModel;
using namespace System::Collections::Generic;
using namespace System::IO; /*Para manipular archivos de texto*/


HistorialMedicoController::HistorialMedicoController() {


}

List<Diagnostico^>^ SevenMedicController::HistorialMedicoController::BuscarDiagnosticoAll()
{
	List<Diagnostico^>^ ListaDiagnosticoEncontrado = gcnew List<Diagnostico^>();

	array<String^>^ lineas = File::ReadAllLines("Diagnosticos.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaDiagnostico in lineas) {

		array<String^>^ datos = lineaDiagnostico->Split(separador->ToCharArray());
		String^ IDDiagnosticoLeido = datos[0];
		String^ IDMedicoLeido = datos[1];
		String^ IDPacienteLeido = datos[2];
		String^ FechaLeida = datos[3];
		String^ TextoDiagnosticoLeido = datos[4];


		Diagnostico^ objDiagnostico = gcnew Diagnostico(IDDiagnosticoLeido,TextoDiagnosticoLeido,FechaLeida,IDMedicoLeido,IDPacienteLeido);

		ListaDiagnosticoEncontrado->Add(objDiagnostico);

	}

	return ListaDiagnosticoEncontrado;

}

List<RecetaMedica^>^ SevenMedicController::HistorialMedicoController::BuscarRecetaMedicaAll()
{
	List<RecetaMedica^>^ ListaRecetaMedicaEncontrado = gcnew List<RecetaMedica^>();

	array<String^>^ lineas = File::ReadAllLines("Recetas.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaRecetaMedica in lineas) {

		array<String^>^ datos = lineaRecetaMedica->Split(separador->ToCharArray());
		String^ IDRecetaLeido = datos[0];
		String^ IDMedicoLeido = datos[1];
		String^ IDPacienteLeido = datos[2];
		String^ FechaLeida = datos[3];
		String^ EmailLeido = datos[4];
		String^ TextoRecetaLeido = datos[5];


		RecetaMedica^ objRecetaMedica = gcnew RecetaMedica(IDRecetaLeido,IDMedicoLeido,IDPacienteLeido,FechaLeida,EmailLeido,TextoRecetaLeido);

		ListaRecetaMedicaEncontrado->Add(objRecetaMedica);

	}

	return ListaRecetaMedicaEncontrado;
}

List<Triaje^>^ SevenMedicController::HistorialMedicoController::BuscarTriajeAll()
{
	List<Triaje^>^ ListaTriajeEncontrado = gcnew List<Triaje^>();

	array<String^>^ lineas = File::ReadAllLines("Triaje.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaTriaje in lineas) {

		array<String^>^ datos = lineaTriaje->Split(separador->ToCharArray());
		String^ IDTriajeLeido = datos[0];
		String^ IDEnfermeroLeido = datos[1];
		String^ IDPacienteLeido = datos[2];
		String^ FechaLeida = datos[3];
		Double PesoLeido = Convert::ToDouble(datos[4]);
		Double AlturaLeida = Convert::ToDouble(datos[5]);
		Double PresionSanguineaLeida = Convert::ToDouble(datos[6]);
		Double RitmoCardiacoLeido = Convert::ToDouble(datos[7]);
		String^ DiabeticoLeido = datos[8];
		String^ AlergiaMedicamentosLeido = datos[9];

		Triaje^ objTriaje = gcnew Triaje(IDTriajeLeido, PesoLeido, AlturaLeida, PresionSanguineaLeida, RitmoCardiacoLeido, FechaLeida, DiabeticoLeido, AlergiaMedicamentosLeido, IDEnfermeroLeido, IDPacienteLeido);

		ListaTriajeEncontrado->Add(objTriaje);

	}

	return ListaTriajeEncontrado;
}

List<CitaMedica^>^ SevenMedicController::HistorialMedicoController::BuscarCitaMedicaAll()
{
	List<CitaMedica^>^ ListaCitaMedicaEncontrado = gcnew List<CitaMedica^>();

	array<String^>^ lineas = File::ReadAllLines("CitaMedica.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaCitaMedica in lineas) {

		array<String^>^ datos = lineaCitaMedica->Split(separador->ToCharArray());
		String^ IDCitaLeido = datos[0];
		String^ IDMedicoLeido = datos[1];
		String^ IDPacienteLeido = datos[2];
		String^ FechaLeida = datos[3];
		String^ HoraLeida = datos[4];
		String^ EspecialidadLeida = datos[5];

		CitaMedica^ objCitaMedica = gcnew CitaMedica(IDCitaLeido, IDMedicoLeido, IDPacienteLeido, FechaLeida, HoraLeida, EspecialidadLeida);

		ListaCitaMedicaEncontrado->Add(objCitaMedica);

	}

	return ListaCitaMedicaEncontrado;
}

List<RecetaMedica^>^ SevenMedicController::HistorialMedicoController::BuscarRecetaMedicaXIDMedicoLista(String^ IDMedico)
{
	List<RecetaMedica^>^ ListaRecetaMedicaEncontrado = gcnew List<RecetaMedica^>();

	array<String^>^ lineas = File::ReadAllLines("Recetas.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaRecetaMedica in lineas) {

		array<String^>^ datos = lineaRecetaMedica->Split(separador->ToCharArray());
		String^ IDRecetaLeido = datos[0];
		String^ IDMedicoLeido = datos[1];
		String^ IDPacienteLeido = datos[2];
		String^ FechaLeida = datos[3];
		String^ EmailLeido = datos[4];
		String^ TextoRecetaLeido = datos[5];

		if(IDMedicoLeido == IDMedico){
			RecetaMedica^ objRecetaMedica = gcnew RecetaMedica(IDRecetaLeido, IDMedicoLeido, IDPacienteLeido, FechaLeida, EmailLeido, TextoRecetaLeido);

			ListaRecetaMedicaEncontrado->Add(objRecetaMedica);

		}
		
	}

	return ListaRecetaMedicaEncontrado;
}

List<RecetaMedica^>^ SevenMedicController::HistorialMedicoController::BuscarRecetaMedicaXIDPacienteMedico(String^ IDMedico, String^ IDPaciente)
{
	List<RecetaMedica^>^ ListaRecetaMedicaEncontrado = gcnew List<RecetaMedica^>();

	array<String^>^ lineas = File::ReadAllLines("Recetas.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaRecetaMedica in lineas) {

		array<String^>^ datos = lineaRecetaMedica->Split(separador->ToCharArray());
		String^ IDRecetaLeido = datos[0];
		String^ IDMedicoLeido = datos[1];
		String^ IDPacienteLeido = datos[2];
		String^ FechaLeida = datos[3];
		String^ EmailLeido = datos[4];
		String^ TextoRecetaLeido = datos[5];

		if (IDMedicoLeido == IDMedico && IDPacienteLeido== IDPaciente) {

			RecetaMedica^ objRecetaMedica = gcnew RecetaMedica(IDRecetaLeido, IDMedicoLeido, IDPacienteLeido, FechaLeida, EmailLeido, TextoRecetaLeido);

			ListaRecetaMedicaEncontrado->Add(objRecetaMedica);

		}

	}

	return ListaRecetaMedicaEncontrado;




}

List<RecetaMedica^>^ SevenMedicController::HistorialMedicoController::BuscarRecetaMedicaXFechaLista(String^ IDMedico, String^ Fecha)
{
	List<RecetaMedica^>^ ListaRecetaMedicaEncontrado = gcnew List<RecetaMedica^>();

	array<String^>^ lineas = File::ReadAllLines("Recetas.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaRecetaMedica in lineas) {

		array<String^>^ datos = lineaRecetaMedica->Split(separador->ToCharArray());
		String^ IDRecetaLeido = datos[0];
		String^ IDMedicoLeido = datos[1];
		String^ IDPacienteLeido = datos[2];
		String^ FechaLeida = datos[3];
		String^ EmailLeido = datos[4];
		String^ TextoRecetaLeido = datos[5];

		if (IDMedicoLeido == IDMedico && FechaLeida == Fecha) {

			RecetaMedica^ objRecetaMedica = gcnew RecetaMedica(IDRecetaLeido, IDMedicoLeido, IDPacienteLeido, FechaLeida, EmailLeido, TextoRecetaLeido);

			ListaRecetaMedicaEncontrado->Add(objRecetaMedica);

		}

	}

	return ListaRecetaMedicaEncontrado;




}





Diagnostico^ SevenMedicController::HistorialMedicoController::BuscarDiagnosticoXIDPaciente(String^ IDPaciente)
{
	Diagnostico^ objDiagnosticoEncontrado = nullptr;

	array<String^>^ lineas = File::ReadAllLines("Diagnosticos.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaDiagnostico in lineas) {

		array<String^>^ datos = lineaDiagnostico->Split(separador->ToCharArray());
		String^ IDDiagnosticoLeido = datos[0];
		String^ IDMedicoLeido = datos[1];
		String^ IDPacienteLeido = datos[2];
		String^ FechaLeida = datos[3];
		String^ TextoDiagnosticoLeido = datos[4];


		if(IDPacienteLeido==IDPaciente){
			
			objDiagnosticoEncontrado = gcnew Diagnostico(IDDiagnosticoLeido, TextoDiagnosticoLeido, FechaLeida, IDMedicoLeido, IDPacienteLeido);
			break;
		
		}
	}

	return objDiagnosticoEncontrado;
}

Diagnostico^ SevenMedicController::HistorialMedicoController::BuscarDiagnosticoXIDMedico(String^ IDMedico)
{
	Diagnostico^ objDiagnosticoEncontrado = nullptr;

	array<String^>^ lineas = File::ReadAllLines("Diagnosticos.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaDiagnostico in lineas) {

		array<String^>^ datos = lineaDiagnostico->Split(separador->ToCharArray());
		String^ IDDiagnosticoLeido = datos[0];
		String^ IDMedicoLeido = datos[1];
		String^ IDPacienteLeido = datos[2];
		String^ FechaLeida = datos[3];
		String^ TextoDiagnosticoLeido = datos[4];


		if (IDMedicoLeido == IDMedico) {

			objDiagnosticoEncontrado = gcnew Diagnostico(IDDiagnosticoLeido, TextoDiagnosticoLeido, FechaLeida, IDMedicoLeido, IDPacienteLeido);
			break;

		}
	}

	return objDiagnosticoEncontrado;
}

RecetaMedica^ SevenMedicController::HistorialMedicoController::BuscarRecetaMedicaXIDPaciente(String^ IDPaciente)
{
	RecetaMedica^ objRecetaMedicaEncontrado = nullptr;

	array<String^>^ lineas = File::ReadAllLines("Recetas.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaRecetas in lineas) {

		array<String^>^ datos = lineaRecetas->Split(separador->ToCharArray());
		String^ IDRecetaLeido = datos[0];
		String^ IDMedicoLeido = datos[1];
		String^ IDPacienteLeido = datos[2];
		String^ FechaLeida = datos[3];
		String^ TextoRecetaLeido = datos[4];
		String^ EmailLeido = datos[5];


		if (IDPacienteLeido == IDPaciente) {

			objRecetaMedicaEncontrado = gcnew RecetaMedica(IDRecetaLeido, IDMedicoLeido, IDPacienteLeido, FechaLeida, EmailLeido, TextoRecetaLeido);
			break;

		}
	}

	return objRecetaMedicaEncontrado;
}

RecetaMedica^ SevenMedicController::HistorialMedicoController::BuscarRecetaMedicaXIDMedico(String^ IDMedico)
{
	RecetaMedica^ objRecetaMedicaEncontrado = nullptr;

	array<String^>^ lineas = File::ReadAllLines("Recetas.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaRecetas in lineas) {

		array<String^>^ datos = lineaRecetas->Split(separador->ToCharArray());
		String^ IDRecetaLeido = datos[0];
		String^ IDMedicoLeido = datos[1];
		String^ IDPacienteLeido = datos[2];
		String^ FechaLeida = datos[3];
		String^ TextoRecetaLeido = datos[4];
		String^ EmailLeido = datos[5];


		if (IDMedicoLeido == IDMedico) {

			objRecetaMedicaEncontrado = gcnew RecetaMedica(IDRecetaLeido, IDMedicoLeido, IDPacienteLeido, FechaLeida, EmailLeido, TextoRecetaLeido);
			break;

		}
	}

	return objRecetaMedicaEncontrado;
}

Triaje^ SevenMedicController::HistorialMedicoController::BuscarTriajeXIDPaciente(String^ IDPaciente)
{
	Triaje^ objTriajeEncontrado = nullptr;

	array<String^>^ lineas = File::ReadAllLines("Triaje.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaRecetas in lineas) {

		array<String^>^ datos = lineaRecetas->Split(separador->ToCharArray());
		String^ IDTriajeLeido = datos[0];
		String^ IDEnfermeroLeido = datos[1];
		String^ IDPacienteLeido = datos[2];
		String^ FechaLeida = datos[3];
		Double PesoLeido = Convert::ToDouble(datos[4]);
		Double AlturaLeida = Convert::ToDouble(datos[5]);
		Double PresionSanguineaLeida = Convert::ToDouble(datos[6]);
		Double RitmoCardiacoLeido = Convert::ToDouble(datos[7]);
		String^ DiabeticoLeido = datos[8];
		String^ AlergiaMedicamentosLeido = datos[9];


		if (IDPacienteLeido == IDPaciente) {

			objTriajeEncontrado = gcnew Triaje(IDTriajeLeido, PesoLeido, AlturaLeida, PresionSanguineaLeida, RitmoCardiacoLeido, FechaLeida, DiabeticoLeido, AlergiaMedicamentosLeido, IDEnfermeroLeido,IDPacienteLeido);
			break;

		}
	}

	return objTriajeEncontrado;
}

Triaje^ SevenMedicController::HistorialMedicoController::BuscarTriajeXIDEnfermero(String^ IDEnfermero)
{
	Triaje^ objTriajeEncontrado = nullptr;

	array<String^>^ lineas = File::ReadAllLines("Triaje.txt");

	String^ separador = ";"; /*El caracter que permite separar los campos de una fila*/

	for each (String ^ lineaRecetas in lineas) {

		array<String^>^ datos = lineaRecetas->Split(separador->ToCharArray());
		String^ IDTriajeLeido = datos[0];
		String^ IDEnfermeroLeido = datos[1];
		String^ IDPacienteLeido = datos[2];
		String^ FechaLeida = datos[3];
		Double PesoLeido = Convert::ToDouble(datos[4]);
		Double AlturaLeida = Convert::ToDouble(datos[5]);
		Double PresionSanguineaLeida = Convert::ToDouble(datos[6]);
		Double RitmoCardiacoLeido = Convert::ToDouble(datos[7]);
		String^ DiabeticoLeido = datos[8];
		String^ AlergiaMedicamentosLeido = datos[9];


		if (IDEnfermeroLeido == IDEnfermero) {

			objTriajeEncontrado = gcnew Triaje(IDTriajeLeido, PesoLeido, AlturaLeida, PresionSanguineaLeida, RitmoCardiacoLeido, FechaLeida, DiabeticoLeido, AlergiaMedicamentosLeido, IDEnfermeroLeido, IDPacienteLeido);
			break;

		}
	}

	return objTriajeEncontrado;
}
void SevenMedicController::HistorialMedicoController::GrabarNuevoDiagnostico(Diagnostico^ objDiagnostico)
{
	List<Diagnostico^>^ listaDiagnostico = BuscarDiagnosticoAll();

	listaDiagnostico->Add(objDiagnostico);
	EscribirDiagnostico(listaDiagnostico);
}
void SevenMedicController::HistorialMedicoController::EscribirDiagnostico(List<Diagnostico^>^ ListaDiagnostico)
{
	array<String^>^ lineasArchivo = gcnew array<String^>(ListaDiagnostico->Count);
	int k = 0;
	for (int i = 0; i < ListaDiagnostico->Count; i++) {
		Diagnostico^ objDiagnostico = ListaDiagnostico[i];
		lineasArchivo[i] = objDiagnostico->ID + ";" + objDiagnostico->IDMedicoGeneral + ";" + objDiagnostico->IDPaciente + ";" + objDiagnostico->Fecha + ";" + objDiagnostico->TextoDiagnostico;
	}
	/*Aqu� ya mi array de lineasArchivo esta OK, con la informaci�n a grabar*/
	File::WriteAllLines("Diagnosticos.txt", lineasArchivo);
}
void SevenMedicController::HistorialMedicoController::EliminarDiagnostico(String^ ID)
{
	List<Diagnostico^>^ listaDiagnostico = BuscarDiagnosticoAll();
	int posLista = 0;

	for (int i = 0; i < listaDiagnostico->Count; i++) {

		if (listaDiagnostico[i]->ID == ID) {

			posLista = i;
			break;

		}
	}

	listaDiagnostico->RemoveAt(posLista);
	EscribirDiagnostico(listaDiagnostico);
}
void SevenMedicController::HistorialMedicoController::GrabarNuevoRecetaMedica(RecetaMedica^ objRecetaMedica)
{
	List<RecetaMedica^>^ listaRecetaMedica = BuscarRecetaMedicaAll();

	listaRecetaMedica->Add(objRecetaMedica);
	EscribirRecetaMedica(listaRecetaMedica);
}
void SevenMedicController::HistorialMedicoController::EscribirRecetaMedica(List<RecetaMedica^>^ ListaRecetaMedica)
{
	array<String^>^ lineasArchivo = gcnew array<String^>(ListaRecetaMedica->Count);
	int k = 0;
	for (int i = 0; i < ListaRecetaMedica->Count; i++) {
		RecetaMedica^ objRecetaMedica = ListaRecetaMedica[i];
		lineasArchivo[i] = objRecetaMedica->ID + ";" + objRecetaMedica->IDMedico + ";" + objRecetaMedica->IDPaciente + ";" + objRecetaMedica->Fecha + ";" + objRecetaMedica->EmailPaciente + ";" + objRecetaMedica->TextoReceta;
	}
	/*Aqu� ya mi array de lineasArchivo esta OK, con la informaci�n a grabar*/
	File::WriteAllLines("Recetas.txt", lineasArchivo);
}
void SevenMedicController::HistorialMedicoController::EliminarRecetaMedica(String^ IDRecetaMedica)
{
	List<RecetaMedica^>^ listaRecetaMedica = BuscarRecetaMedicaAll();
	int posLista = 0;

	for (int i = 0; i < listaRecetaMedica->Count; i++) {

		if (listaRecetaMedica[i]->ID == IDRecetaMedica) {

			posLista = i;
			break;

		}
	}

	listaRecetaMedica->RemoveAt(posLista);
	EscribirRecetaMedica(listaRecetaMedica);
}
void SevenMedicController::HistorialMedicoController::GrabarNuevoTriaje(Triaje^ objTriaje)
{
	List<Triaje^>^ listaTriaje = BuscarTriajeAll();

	listaTriaje->Add(objTriaje);
	EscribirTriaje(listaTriaje);
}
void SevenMedicController::HistorialMedicoController::EscribirTriaje(List<Triaje^>^ ListaTriaje)
{
	array<String^>^ lineasArchivo = gcnew array<String^>(ListaTriaje->Count);
	int k = 0;
	for (int i = 0; i < ListaTriaje->Count; i++) {
		Triaje^ objTriaje = ListaTriaje[i];	
		lineasArchivo[i] = objTriaje->ID + ";" + objTriaje->IDEnfermero + ";" + objTriaje->IDPaciente + ";" + objTriaje->Fecha + ";" + objTriaje->Peso + ";" + objTriaje->Altura + ";" + objTriaje->PresionSanguinea + ";" + objTriaje->RitmoCardiaco + ";" + objTriaje->Diabetico + ";" + objTriaje->AlergiaMedicamentos;
	}
	/*Aqu� ya mi array de lineasArchivo esta OK, con la informaci�n a grabar*/
	File::WriteAllLines("Triaje.txt", lineasArchivo);
}
void SevenMedicController::HistorialMedicoController::EliminarTriaje(String^ IDTriaje)
{
	List<Triaje^>^ listaTriaje = BuscarTriajeAll();
	int posLista = 0;

	for (int i = 0; i < listaTriaje->Count; i++) {

		if (listaTriaje[i]->ID == IDTriaje) {

			posLista = i;
			break;

		}
	}

	listaTriaje->RemoveAt(posLista);
	EscribirTriaje(listaTriaje);
}


