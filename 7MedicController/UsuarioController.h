#pragma once

namespace SevenMedicController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SevenMedicModel;


	public ref class UsuarioController {

	public:

		UsuarioController();

		Supervisor^ BuscarSupervisorXID(String^ IDSupervisor);

		List<Usuario^>^ BuscarUsuarioAll();
		List<Paciente^>^ BuscarPacienteAll();
		List<Trabajador^>^ BuscarTrabajadorAll();

		Usuario^ BuscarUsuarioXID(String^ ID);
		Paciente^ BuscarPacienteXID(String^ ID);
		Paciente^ BuscarPacienteXDNI(String^ DNI);
		Trabajador^ BuscarTrabajadorXID(String^ ID);

		List<Usuario^>^ BuscarUsuarioLoginAll();
		Usuario^ BuscarUsuarioXIDLogin(String^ ID);
		void GrabarNuevoUsuarioLogin(Usuario^ objUsuario);
		void EscribirUsuarioLogin(List<Usuario^>^ ListaUsuario);
		void EliminarUsuarioLogin(String^ ID);



		void GrabarNuevoUsuario(Usuario^ objUsuario);
		void EscribirUsuario(List<Usuario^>^ ListaUsuario);
		void EliminarUsuario(String^ ID);
		
		void GrabarNuevoPaciente(Paciente^ objPaciente);
		void EscribirPaciente(List<Paciente^>^ ListaPaciente);
		void EliminarPaciente(String^ ID);
		
		void GrabarNuevoTrabajador(Trabajador^ objTrabajador);
		void EscribirTrabajador(List<Trabajador^>^ ListaTrabajador);
		void EliminarTrabajador(String^ ID);

		/*
		void GrabarNuevoMedico(MedicoGeneral^ objMedicoGeneral);
		void EscribirMedico(List<MedicoGeneral^>^ ListaMedico);
		void EliminarMedico(String^ ID);

		void GrabarNuevoEnfermero(Enfermero^ objEnfermero);
		void EscribirEnfermero(List<Enfermero^>^ ListaEnfermero);
		void EliminarEnfermero(String^ ID);

		void GrabarNuevoAlmacenero(Almacenero^ objAlmacenero);
		void EscribirAlmacenero(List<Almacenero^>^ ListaAlmacenero);
		void EliminarAlmacenero(String^ ID);
		*/




	};


}