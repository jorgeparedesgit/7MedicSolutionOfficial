#pragma once

namespace SevenMedicModel {

	using namespace System;

	public ref class RecetaMedica {

	public:

		String^ ID;
		String^ TextoReceta;
		String^ NombreMedico;
		String^ Fecha;
		String^ EmailPaciente;
		String^ IDPaciente;
		String^ IDMedico;

	public:

		RecetaMedica();
		RecetaMedica(String^ ID, String^ TextoReceta, String^ NombreMedico, String^ Fecha, String^ EmailPaciente, String^ IDPaciente, String^ IDMedico);
		RecetaMedica(String^ ID, String^ IDMedico, String^ IDPaciente, String^ Fecha, String^ EmailPaciente, String^ TextoReceta);


	private:

		~RecetaMedica();

	};

}