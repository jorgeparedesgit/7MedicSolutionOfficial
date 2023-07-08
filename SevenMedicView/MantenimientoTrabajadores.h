#pragma once
#include "NuevoTrabajador.h"

namespace SevenMedicView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace SevenMedicController;
	using namespace SevenMedicModel;

	/// <summary>
	/// Resumen de MantenimientoTrabajadores
	/// </summary>
	public ref class MantenimientoTrabajadores : public System::Windows::Forms::Form
	{
	public:
		
		static MantenimientoTrabajadores^ instancia;
		
		MantenimientoTrabajadores(void)
		{
			InitializeComponent();
			WindowState = FormWindowState::Maximized;
			instancia = this;
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MantenimientoTrabajadores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:









	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;










	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column10, this->Column8, this->Column9,
					this->Column11
			});
			this->dataGridView1->Location = System::Drawing::Point(26, 140);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1144, 289);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Password";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Nombres";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Apellidos";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Email";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Celular";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Genero";
			this->Column7->Name = L"Column7";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"FechaNacimiento";
			this->Column10->Name = L"Column10";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Edad";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"DNI";
			this->Column9->Name = L"Column9";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(102, 465);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 49);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Agregar Trabajador";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantenimientoTrabajadores::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(362, 465);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 49);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Eliminar Trabajador";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantenimientoTrabajadores::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(850, 465);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(163, 49);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Actualizar Tabla";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MantenimientoTrabajadores::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(614, 465);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(155, 49);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Editar Trabajador";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MantenimientoTrabajadores::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(254, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Buscar por ID:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(413, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(226, 20);
			this->textBox1->TabIndex = 6;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(745, 64);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(127, 34);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Buscar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MantenimientoTrabajadores::button5_Click);
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Cargo";
			this->Column11->Name = L"Column11";
			// 
			// MantenimientoTrabajadores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 573);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MantenimientoTrabajadores";
			this->Text = L"MantenimientoTrabajadores";
			this->Load += gcnew System::EventHandler(this, &MantenimientoTrabajadores::MantenimientoTrabajadores_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MantenimientoTrabajadores_Load(System::Object^ sender, System::EventArgs^ e) {

		UsuarioController^ objUsuarioController = gcnew UsuarioController();

		List<Trabajador^>^ ListaTrabajadorEncontrado = objUsuarioController->BuscarTrabajadorAll();

		mostrarGrilla(ListaTrabajadorEncontrado);



	}

	private: void mostrarGrilla(List<Trabajador^>^ ListaTrabajadorEncontrado) {

		this->dataGridView1->Rows->Clear();

		for (int i = 0; i < ListaTrabajadorEncontrado->Count; i++) {

			Trabajador^ objTrabajador = ListaTrabajadorEncontrado[i];
			array<String^>^ fila = gcnew array<String^>(10);
			fila[0] =objTrabajador->ID;
			fila[1] = objTrabajador->Password;
			fila[2] = objTrabajador->Nombres;
			fila[3] = objTrabajador->Apellidos;
			fila[4] = objTrabajador->Email;
			fila[5] = Convert::ToString(objTrabajador->Celular);
			fila[6] = objTrabajador->Genero;
			fila[7] = objTrabajador->FechaNacimiento;
			fila[8] = Convert::ToString(objTrabajador->Edad);
			fila[9] = Convert::ToString(objTrabajador->DNI);


			this->dataGridView1->Rows->Add(fila);
		}
	}




private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;

	String^ ID = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();

	UsuarioController^ objUsuarioController = gcnew UsuarioController();
	objUsuarioController->EliminarUsuario(ID);
	objUsuarioController->EliminarUsuarioLogin(ID);
	objUsuarioController->EliminarTrabajador(ID);


	MessageBox::Show("El trabajador ha sido borrado del sistema");

	List<Trabajador^>^ listaTrabajador = objUsuarioController->BuscarTrabajadorAll();
	mostrarGrilla(listaTrabajador);

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	NuevoTrabajador^ ventanaNuevoTrabajador = gcnew NuevoTrabajador();
	ventanaNuevoTrabajador->ShowDialog();


}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	UsuarioController^ objUsuarioController = gcnew UsuarioController();

	List<Trabajador^>^ ListaTrabajadorEncontrado = objUsuarioController->BuscarTrabajadorAll();

	mostrarGrilla(ListaTrabajadorEncontrado);


}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ IDIngresado = this->textBox1->Text;

	UsuarioController^ objUsuarioController = gcnew UsuarioController();

	Trabajador^ objTrabajador = objUsuarioController->BuscarTrabajadorXID(IDIngresado);

	List<Trabajador^>^ ListaTrabajadorEncontrado = gcnew List<Trabajador^>();

	ListaTrabajadorEncontrado->Add(objTrabajador);


	mostrarGrilla(ListaTrabajadorEncontrado);

	/*
	this->dataGridView1->Rows->Clear();

	

	


	this->dataGridView1->Rows->Add(fila);

	*/


}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//Editar Trabajador



}
};
}
