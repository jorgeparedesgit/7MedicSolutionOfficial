#include "Triaje.h"

using namespace SevenMedicModel;

Triaje::Triaje(){

}

Triaje::Triaje(String^ ID, Double Peso, Double Altura, Double PresionSanguinea, Double RitmoCardiaco, String^ Fecha, String^ Diabetico, String^ AlergiaMedicamentos, String^ IDEnfermero, String^ IDPaciente) {

	this->ID = ID;
	this->Peso = Peso;
	this->PresionSanguinea = PresionSanguinea;
	this->RitmoCardiaco = RitmoCardiaco;
	this->Fecha = Fecha;
	this->Diabetico = Diabetico;
	this->AlergiaMedicamentos = AlergiaMedicamentos;
	this->IDEnfermero = IDEnfermero;
	this->IDPaciente = IDPaciente;

}

Triaje::~Triaje() {


}
