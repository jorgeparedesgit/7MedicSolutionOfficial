#pragma once
#include "VerRecetaMedica.h"

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
	/// Resumen de VerListaRecetas
	/// </summary>
	public ref class VerListaRecetas : public System::Windows::Forms::Form
	{
	public:

		Trabajador^ objTrabajadorVentana = gcnew Trabajador();

		VerListaRecetas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		VerListaRecetas(Trabajador^ objTrabajador)
		{
			InitializeComponent();

			objTrabajadorVentana = objTrabajador;

			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~VerListaRecetas()
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(93, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Buscar por IDPaciente";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(93, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Buscar por Fecha";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(319, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 20);
			this->textBox1->TabIndex = 2;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(319, 108);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(203, 20);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(65, 191);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(560, 241);
			this->dataGridView1->TabIndex = 4;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"IDReceta";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"IDPaciente";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Fecha";
			this->Column3->Name = L"Column3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(586, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VerListaRecetas::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(586, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Buscar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VerListaRecetas::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(176, 465);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Ver";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &VerListaRecetas::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(438, 465);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Cerrar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &VerListaRecetas::button4_Click);
			// 
			// VerListaRecetas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(704, 548);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"VerListaRecetas";
			this->Text = L"VerListaRecetas";
			this->Load += gcnew System::EventHandler(this, &VerListaRecetas::VerListaRecetas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Close();

	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	//VerReceta

	VerRecetaMedica^ ventanaVerRecetaMedica = gcnew VerRecetaMedica();
	ventanaVerRecetaMedica->ShowDialog();


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	//BuscarPorIDPaciente
	String^ IDPacienteLeido = this->textBox1->Text;

	HistorialMedicoController^ objHistorialMedicoController = gcnew HistorialMedicoController();

	List<RecetaMedica^>^ ListaRecetaMedicaIDMedico = gcnew List<RecetaMedica^>();

	ListaRecetaMedicaIDMedico = objHistorialMedicoController->BuscarRecetaMedicaXIDPacienteMedico(objTrabajadorVentana->ID, IDPacienteLeido);

	

	if (this->textBox1->Text == "") {

		ListaRecetaMedicaIDMedico = objHistorialMedicoController->BuscarRecetaMedicaXIDMedicoLista(objTrabajadorVentana->ID);
	
	}

	mostrarGrilla(ListaRecetaMedicaIDMedico);

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	String^ FechaLeida = this->dateTimePicker1->Text;

	HistorialMedicoController^ objHistorialMedicoController = gcnew HistorialMedicoController();

	List<RecetaMedica^>^ ListaRecetaMedicaFecha = gcnew List<RecetaMedica^>();

	ListaRecetaMedicaFecha = objHistorialMedicoController->BuscarRecetaMedicaXFechaLista(objTrabajadorVentana->ID, FechaLeida);


	mostrarGrilla(ListaRecetaMedicaFecha);

}
private: System::Void VerListaRecetas_Load(System::Object^ sender, System::EventArgs^ e) {

	HistorialMedicoController^ objHistorialMedicoController = gcnew HistorialMedicoController();

	List<RecetaMedica^>^ ListaRecetaMedicaIDMedico = gcnew List<RecetaMedica^>();

	ListaRecetaMedicaIDMedico = objHistorialMedicoController->BuscarRecetaMedicaXIDMedicoLista(objTrabajadorVentana->ID);

	mostrarGrilla(ListaRecetaMedicaIDMedico);



}
private: void mostrarGrilla(List<RecetaMedica^>^ ListaRecetaMedicaEncontrado) {

	this->dataGridView1->Rows->Clear();

	for (int i = 0; i < ListaRecetaMedicaEncontrado->Count; i++) {

		RecetaMedica^ objRecetaMedica = ListaRecetaMedicaEncontrado[i];
		array<String^>^ fila = gcnew array<String^>(3);
		fila[0] = objRecetaMedica->ID;
		fila[1] = objRecetaMedica->IDPaciente;
		fila[2] = objRecetaMedica->Fecha;
		
		this->dataGridView1->Rows->Add(fila);
	}
}

};
}
