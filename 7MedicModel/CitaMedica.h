#pragma once


namespace SevenMedicModel {

	using namespace System;

	public ref class CitaMedica {

	public:

		String^ ID;
		String^ IDMedico;
		String^ IDPaciente;
		String^ Fecha;
		String^ Hora;
		String^ Especialidad;

	public:

		CitaMedica();
		CitaMedica(String^ ID, String^ IDMedico, String^ IDPaciente, String^ Fecha, String^ Hora, String^ Especialidad);


	private:

		~CitaMedica();


	};


}