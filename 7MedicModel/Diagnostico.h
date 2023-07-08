#pragma once

namespace SevenMedicModel {

	using namespace System;

	public ref class Diagnostico {

	public:

		String^ ID;
		String^ TextoDiagnostico;
		String^ Fecha;
		String^ IDMedicoGeneral;
		String^ IDPaciente;

	public:

		Diagnostico();
		Diagnostico(String^ ID, String^ TextoDiagnostico, String^ Fecha, String^ IDMedicoGeneral, String^ IDPaciente);

	private:

		~Diagnostico();



	};





}