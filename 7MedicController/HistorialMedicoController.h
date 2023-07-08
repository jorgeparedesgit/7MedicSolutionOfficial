#pragma once

namespace SevenMedicController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SevenMedicModel;


	public ref class HistorialMedicoController {

	public:

		HistorialMedicoController();

		List<Diagnostico^>^ BuscarDiagnosticoAll();
		List<RecetaMedica^>^ BuscarRecetaMedicaAll();
		List<Triaje^>^ BuscarTriajeAll();
		List<CitaMedica^>^ BuscarCitaMedicaAll();


		//Funciones para mostrar las listas de recetas medicas de acuerdo a especificacion de ID de Medico o de Paciente o de ambos
		List<RecetaMedica^>^ BuscarRecetaMedicaXIDMedicoLista(String^ IDMedico);
		List<RecetaMedica^>^ BuscarRecetaMedicaXIDPacienteMedico(String^ IDMedico, String^ IDPaciente);
		List<RecetaMedica^>^ BuscarRecetaMedicaXFechaLista(String^ IDMedico, String^ Fecha);


		Diagnostico^ BuscarDiagnosticoXIDPaciente(String^ IDPaciente);
		Diagnostico^ BuscarDiagnosticoXIDMedico(String^ IDMedico);

		RecetaMedica^ BuscarRecetaMedicaXIDPaciente(String^ IDPaciente);
		RecetaMedica^ BuscarRecetaMedicaXIDMedico(String^ IDMedico);

		Triaje^ BuscarTriajeXIDPaciente(String^ IDPaciente);
		Triaje^ BuscarTriajeXIDEnfermero(String^ IDEnfermero);



		void GrabarNuevoDiagnostico(Diagnostico^ objDiagnostico);
		void EscribirDiagnostico(List<Diagnostico^>^ ListaDiagnostico);
		void EliminarDiagnostico(String^ ID);

		void GrabarNuevoRecetaMedica(RecetaMedica^ objRecetaMedica);
		void EscribirRecetaMedica(List<RecetaMedica^>^ ListaRecetaMedica);
		void EliminarRecetaMedica(String^ IDRecetaMedica);

		void GrabarNuevoTriaje(Triaje^ objTriaje);
		void EscribirTriaje(List<Triaje^>^ ListaTriaje);
		void EliminarTriaje(String^ IDTriaje);
		
		


	};


}