#include "RecetaMedica.h"

using namespace SevenMedicModel;

RecetaMedica::RecetaMedica() {



}

RecetaMedica::RecetaMedica(String^ ID, String^ TextoReceta, String^ NombreMedico, String^ Fecha, String^ EmailPaciente, String^ IDPaciente, String^ IDMedico) {

	this->ID = ID;
	this->TextoReceta = TextoReceta;
	this->NombreMedico = NombreMedico;
	this->Fecha = Fecha;
	this->EmailPaciente = EmailPaciente;
	this->IDPaciente = IDPaciente;
	this->IDMedico = IDMedico;

}

SevenMedicModel::RecetaMedica::RecetaMedica(String^ ID, String^ IDMedico, String^ IDPaciente, String^ Fecha, String^ EmailPaciente, String^ TextoReceta)
{
	this->ID = ID;
	this->TextoReceta = TextoReceta;
	this->Fecha = Fecha;
	this->EmailPaciente = EmailPaciente;
	this->IDPaciente = IDPaciente;
	this->IDMedico = IDMedico;
}

RecetaMedica::~RecetaMedica() {


}
