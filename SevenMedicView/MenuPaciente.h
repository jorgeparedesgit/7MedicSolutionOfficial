#pragma once
#include "NuevaReservaCita.h"
#include "VerHistorialMedico.h"
#include "ActualizarDatosPaciente.h"

namespace SevenMedicView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SevenMedicModel;
	using namespace SevenMedicController;


	/// <summary>
	/// Resumen de MenuPaciente
	/// </summary>
	public ref class MenuPaciente : public System::Windows::Forms::Form
	{
	public:

		String^ IDUsuarioPaciente;
		Paciente^ objPacienteVentana = gcnew Paciente();

		MenuPaciente(void)
		{
			InitializeComponent();


			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

		MenuPaciente(String^ IDUsuario)
		{
			InitializeComponent();

			IDUsuarioPaciente = IDUsuario;
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}



	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MenuPaciente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(83, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Reservar Cita";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(83, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Historial Medico";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(83, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Actualizar Datos";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(342, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Nueva Reserva Cita";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MenuPaciente::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(342, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Ver";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MenuPaciente::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(342, 213);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Actualizar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MenuPaciente::button3_Click);
			// 
			// MenuPaciente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(569, 321);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MenuPaciente";
			this->Text = L"MenuPaciente";
			this->Load += gcnew System::EventHandler(this, &MenuPaciente::MenuPaciente_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Nueva Reserva Cita

		NuevaReservaCita^ ventanaNuevaReservaCita = gcnew NuevaReservaCita(objPacienteVentana);

		ventanaNuevaReservaCita->ShowDialog();




	}
	private: System::Void MenuPaciente_Load(System::Object^ sender, System::EventArgs^ e) {

	//	IDUsuarioPaciente

		UsuarioController^ objUsuarioController = gcnew UsuarioController();

		objPacienteVentana = objUsuarioController->BuscarPacienteXID(IDUsuarioPaciente);


	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// VerHistorialMedico

		VerHistorialMedico^ ventanaVerHistorialMedico = gcnew VerHistorialMedico(objPacienteVentana);

		ventanaVerHistorialMedico->ShowDialog();

				



	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//ActualizarDatosPaciente

		ActualizarDatosPaciente^ ventanaActualizarDatosPaciente = gcnew ActualizarDatosPaciente(objPacienteVentana);

		ventanaActualizarDatosPaciente->ShowDialog();

	}
};
}
