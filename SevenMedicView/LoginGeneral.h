#pragma once
#include "MenuPaciente.h"
#include "MenuSupervisor.h"
#include "MenuAlmacen.h"
#include "MenuMedico.h"
#include "MenuEnfermera.h"
#include "OlvidarContrasenia.h"
#include "NuevoPaciente.h"

namespace SevenMedicView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SevenMedicModel;
	using namespace SevenMedicController;
	using namespace std;

	/// <summary>
	/// Resumen de LoginGeneral
	/// </summary>
	public ref class LoginGeneral : public System::Windows::Forms::Form
	{
	public:
		LoginGeneral(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LoginGeneral()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginGeneral::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(76, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(76, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contrasenia";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->linkLabel1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(52, 49);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(622, 390);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"LogIn";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(242, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(138, 124);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(285, 245);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(108, 13);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Olvide mi contrasenia";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginGeneral::linkLabel1_LinkClicked);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(473, 213);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 19);
			this->button4->TabIndex = 7;
			this->button4->Text = L"No Mostrar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &LoginGeneral::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(409, 213);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(58, 19);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Mostrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &LoginGeneral::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(355, 308);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Registrarse";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LoginGeneral::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(172, 308);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Acceder";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginGeneral::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(229, 212);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(164, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginGeneral::textBox2_KeyDown);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(229, 167);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 20);
			this->textBox1->TabIndex = 2;
			// 
			// LoginGeneral
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(724, 479);
			this->Controls->Add(this->groupBox1);
			this->Name = L"LoginGeneral";
			this->Text = L"LoginGeneral";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Acceder

		String^ IDIngresado = this->textBox1->Text;
		String^ ContraseniaIngresada = this->textBox2->Text;

		UsuarioController^ objUsuarioController = gcnew UsuarioController();
		Usuario^ objUsuarioEncontrado = gcnew Usuario();

		objUsuarioEncontrado = objUsuarioController->BuscarUsuarioXIDLogin(IDIngresado);

		if (IDIngresado->Contains("P") && objUsuarioEncontrado->Password == ContraseniaIngresada) {

			
			MenuPaciente^ ventanaMenu = gcnew MenuPaciente(IDIngresado);
			ventanaMenu->ShowDialog();

		}
		else if (IDIngresado->Contains("S") && objUsuarioEncontrado->Password == ContraseniaIngresada) {

			
			MenuSupervisor^ ventanaMenu = gcnew MenuSupervisor(IDIngresado);
			ventanaMenu->ShowDialog();

		}
		else if (IDIngresado->Contains("M") && objUsuarioEncontrado->Password == ContraseniaIngresada) {

			
			MenuMedico^ ventanaMenu = gcnew MenuMedico(IDIngresado);
			ventanaMenu->ShowDialog();

		}
		else if (IDIngresado->Contains("A") && objUsuarioEncontrado->Password == ContraseniaIngresada) {

			
			MenuAlmacen^ ventanaMenu = gcnew MenuAlmacen(IDIngresado);
			ventanaMenu->ShowDialog();


		}
		else if (IDIngresado->Contains("E") && objUsuarioEncontrado->Password == ContraseniaIngresada) {

			
			MenuEnfermera^ ventanaMenu = gcnew MenuEnfermera(IDIngresado);
			ventanaMenu->ShowDialog();

		}
		else {

			MessageBox::Show("Error en los datos ingresados");

		}


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Registrarse

	NuevoPaciente^ ventanaNuevoPaciente = gcnew NuevoPaciente();

	ventanaNuevoPaciente->ShowDialog();



}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


	if (this->textBox2->PasswordChar == '*') {

		this->button4->BringToFront();
		this->textBox2->PasswordChar = '\0';


	}



}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->textBox2->PasswordChar == '\0') {

		this->button4->BringToFront();
		this->textBox2->PasswordChar = '*';


	}

}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	OlvidarContrasenia^ ventanaOlvidarContrasenia = gcnew OlvidarContrasenia();

	ventanaOlvidarContrasenia->ShowDialog();


}
	private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyData == Keys::Enter) {
			button1->PerformClick();
		}
	}
};
}
