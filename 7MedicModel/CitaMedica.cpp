#include "CitaMedica.h"

using namespace SevenMedicModel;

CitaMedica::CitaMedica() {


}

CitaMedica::CitaMedica(String^ ID, String^ IDMedico,String^ IDPaciente, String^ Fecha, String^ Hora, String^ Especialidad) {

	this->ID = ID;
	this->IDMedico = IDMedico;
	this->IDPaciente = IDPaciente;
	this->Fecha = Fecha;
	this->Hora = Hora;
	this->Especialidad = Especialidad;


}

CitaMedica:: ~CitaMedica() {


}
