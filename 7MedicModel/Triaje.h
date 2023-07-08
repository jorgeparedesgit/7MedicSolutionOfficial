#pragma once

namespace SevenMedicModel {

	using namespace System;

	public ref class Triaje {

	public:

		String^ ID;
		Double Peso;
		Double Altura;
		Double PresionSanguinea;
		Double RitmoCardiaco;
		String^ Fecha;
		String^ Diabetico;
		String^ AlergiaMedicamentos;
		String^ IDEnfermero;
		String^ IDPaciente;

	public:

		Triaje();
		Triaje(String^ ID, Double Peso, Double Altura, Double PresionSanguinea, Double RitmoCardiaco, String^ Fecha, String^ Diabetico, String^ AlergiaMedicamentos, String^ IDEnfermero, String^ IDPaciente);


	private:

		~Triaje();



	};





}