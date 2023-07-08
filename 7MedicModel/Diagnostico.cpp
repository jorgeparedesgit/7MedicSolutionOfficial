#include "Diagnostico.h"

using namespace SevenMedicModel;

Diagnostico::Diagnostico() {


}

Diagnostico::Diagnostico(String^ ID, String^ TextoDiagnostico, String^ Fecha, String^ IDMedicoGeneral, String^ IDPaciente) {

	this->ID = ID;
	this->TextoDiagnostico = TextoDiagnostico;
	this->Fecha = Fecha;
	this->IDMedicoGeneral = IDMedicoGeneral;
	this->IDPaciente = IDPaciente;


}

Diagnostico::~Diagnostico() {


}
