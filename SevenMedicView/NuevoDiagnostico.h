#pragma once

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
	/// Resumen de NuevoDiagnostico
	/// </summary>
	public ref class NuevoDiagnostico : public System::Windows::Forms::Form
	{
	public:

		Trabajador^ objTrabajadorVentana = gcnew Trabajador();

		NuevoDiagnostico(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		NuevoDiagnostico(Trabajador^ objTrabajador)
		{
			InitializeComponent();

			objTrabajadorVentana = objTrabajador;

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~NuevoDiagnostico()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(277, 179);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 28;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(358, 219);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(69, 17);
			this->checkBox1->TabIndex = 27;
			this->checkBox1->Text = L"Derivado";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(79, 268);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Texto de Diagnostico";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(160, 581);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NuevoDiagnostico::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(82, 302);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(433, 241);
			this->textBox5->TabIndex = 23;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(277, 141);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(205, 20);
			this->textBox3->TabIndex = 22;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &NuevoDiagnostico::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(277, 104);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(205, 20);
			this->textBox2->TabIndex = 21;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(277, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(205, 20);
			this->textBox1->TabIndex = 20;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(79, 220);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(207, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Derivacion a otro establecimiento de salud";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(79, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Fecha";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(79, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"IDPaciente";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(79, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"IDMedico";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(79, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"IDDiagnostico";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(387, 581);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Cerrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &NuevoDiagnostico::button3_Click);
			// 
			// NuevoDiagnostico
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 638);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"NuevoDiagnostico";
			this->Text = L"NuevoDiagnostico";
			this->Load += gcnew System::EventHandler(this, &NuevoDiagnostico::NuevoDiagnostico_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//Aceptar
		this->textBox2->Text = objTrabajadorVentana->ID;
		String^ IDMedicoLeido = objTrabajadorVentana->ID;
		String^ IDPacienteLeido = this->textBox3->Text;
		String^ IDDiagnostico = this->textBox1->Text;
		String^ FechaLeida = this->dateTimePicker1->Text;
		String^ TextoDiagnosticoLeido = this->textBox5->Text;

		TextoDiagnosticoLeido = TextoDiagnosticoLeido->Replace("\r\n", "^");

		String^ DerivadoLeido;


		if (checkBox1->Checked) {

			DerivadoLeido = "Derivado";

		}
		else {
			DerivadoLeido = "NoDerivado";
		}

		HistorialMedicoController^ objHistorialMedicoController = gcnew HistorialMedicoController();
		Diagnostico^ objDiagnostico = gcnew Diagnostico(IDDiagnostico, TextoDiagnosticoLeido, FechaLeida, IDMedicoLeido, IDPacienteLeido);

		objHistorialMedicoController->GrabarNuevoDiagnostico(objDiagnostico);




	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		//Cerrar
		this->Close();

	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		this->textBox1->Text = this->textBox2->Text + "-" + this->textBox3->Text + "-" + this->dateTimePicker1->Text;



	}
	private: System::Void NuevoDiagnostico_Load(System::Object^ sender, System::EventArgs^ e) {

		this->textBox2->Text = objTrabajadorVentana->ID;

	}
	};
}