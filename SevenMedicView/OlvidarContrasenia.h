#pragma once
#include "CambiarContrasenia.h"

namespace SevenMedicView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SevenMedicModel;
	using namespace SevenMedicController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de OlvidarContrasenia
	/// </summary>
	public ref class OlvidarContrasenia : public System::Windows::Forms::Form
	{
	public:
		OlvidarContrasenia(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~OlvidarContrasenia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese DNI";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(72, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ingrese Fecha de Nacimiento";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(286, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(135, 20);
			this->textBox1->TabIndex = 2;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(286, 93);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(135, 20);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(96, 164);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Cambiar Contrasenia";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OlvidarContrasenia::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(299, 164);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &OlvidarContrasenia::button2_Click);
			// 
			// OlvidarContrasenia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(481, 237);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"OlvidarContrasenia";
			this->Text = L"OlvidarContrasenia";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ DNIIngresado = this->textBox1->Text;
		String^ FechaNacimientoIngresada = this->dateTimePicker1->Text;


		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		Paciente^ objPacienteEncontrado = gcnew Paciente();

		if(textBox1->Text!= ""){

			objPacienteEncontrado = objUsuarioController->BuscarPacienteXDNI(DNIIngresado);

			if (FechaNacimientoIngresada == objPacienteEncontrado->FechaNacimiento) {

				CambiarContrasenia^ ventanaCambiarContrasenia = gcnew CambiarContrasenia(objPacienteEncontrado);
				ventanaCambiarContrasenia->ShowDialog();


			}
		}
		else {

			MessageBox::Show("Debe ingresar un DNI valido");

		}


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Close();


}
};
}
