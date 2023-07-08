#pragma once
#include "MantenimientoUsuarios.h"
#include "MantenimientoPacientes.h"
#include "MantenimientoTrabajadores.h"
#include "SupervisionAlmacen.h"

namespace SevenMedicView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuSupervisor
	/// </summary>
	public ref class MenuSupervisor : public System::Windows::Forms::Form
	{
	public:

		String^ IDUsuario;

		MenuSupervisor(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

		MenuSupervisor(String^ IDUsuario)
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
		~MenuSupervisor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoUsuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ verListaDeUsuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoTrabajadoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ verListaDeTrabajadoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoPacientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ verListaDePacientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ almacenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ verAlmacenToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	protected:















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuSupervisor::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mantenimientoUsuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verListaDeUsuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoTrabajadoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verListaDeTrabajadoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoPacientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verListaDePacientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->almacenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verAlmacenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->mantenimientoUsuariosToolStripMenuItem,
					this->mantenimientoTrabajadoresToolStripMenuItem, this->mantenimientoPacientesToolStripMenuItem, this->almacenToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(672, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientoUsuariosToolStripMenuItem
			// 
			this->mantenimientoUsuariosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->verListaDeUsuariosToolStripMenuItem });
			this->mantenimientoUsuariosToolStripMenuItem->Name = L"mantenimientoUsuariosToolStripMenuItem";
			this->mantenimientoUsuariosToolStripMenuItem->Size = System::Drawing::Size(149, 20);
			this->mantenimientoUsuariosToolStripMenuItem->Text = L"Mantenimiento Usuarios";
			// 
			// verListaDeUsuariosToolStripMenuItem
			// 
			this->verListaDeUsuariosToolStripMenuItem->Name = L"verListaDeUsuariosToolStripMenuItem";
			this->verListaDeUsuariosToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->verListaDeUsuariosToolStripMenuItem->Text = L"Ver Lista de Usuarios";
			this->verListaDeUsuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuSupervisor::verListaDeUsuariosToolStripMenuItem_Click);
			// 
			// mantenimientoTrabajadoresToolStripMenuItem
			// 
			this->mantenimientoTrabajadoresToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->verListaDeTrabajadoresToolStripMenuItem });
			this->mantenimientoTrabajadoresToolStripMenuItem->Name = L"mantenimientoTrabajadoresToolStripMenuItem";
			this->mantenimientoTrabajadoresToolStripMenuItem->Size = System::Drawing::Size(167, 20);
			this->mantenimientoTrabajadoresToolStripMenuItem->Text = L"MantenimientoTrabajadores";
			// 
			// verListaDeTrabajadoresToolStripMenuItem
			// 
			this->verListaDeTrabajadoresToolStripMenuItem->Name = L"verListaDeTrabajadoresToolStripMenuItem";
			this->verListaDeTrabajadoresToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->verListaDeTrabajadoresToolStripMenuItem->Text = L"Ver Lista de Trabajadores";
			this->verListaDeTrabajadoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuSupervisor::verListaDeTrabajadoresToolStripMenuItem_Click);
			// 
			// mantenimientoPacientesToolStripMenuItem
			// 
			this->mantenimientoPacientesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->verListaDePacientesToolStripMenuItem });
			this->mantenimientoPacientesToolStripMenuItem->Name = L"mantenimientoPacientesToolStripMenuItem";
			this->mantenimientoPacientesToolStripMenuItem->Size = System::Drawing::Size(154, 20);
			this->mantenimientoPacientesToolStripMenuItem->Text = L"Mantenimiento Pacientes";
			// 
			// verListaDePacientesToolStripMenuItem
			// 
			this->verListaDePacientesToolStripMenuItem->Name = L"verListaDePacientesToolStripMenuItem";
			this->verListaDePacientesToolStripMenuItem->Size = System::Drawing::Size(186, 22);
			this->verListaDePacientesToolStripMenuItem->Text = L"Ver Lista de Pacientes";
			this->verListaDePacientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuSupervisor::verListaDePacientesToolStripMenuItem_Click);
			// 
			// almacenToolStripMenuItem
			// 
			this->almacenToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->verAlmacenToolStripMenuItem });
			this->almacenToolStripMenuItem->Name = L"almacenToolStripMenuItem";
			this->almacenToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->almacenToolStripMenuItem->Text = L"Almacen";
			// 
			// verAlmacenToolStripMenuItem
			// 
			this->verAlmacenToolStripMenuItem->Name = L"verAlmacenToolStripMenuItem";
			this->verAlmacenToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->verAlmacenToolStripMenuItem->Text = L"Ver Almacen";
			this->verAlmacenToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuSupervisor::verAlmacenToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(672, 472);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// MenuSupervisor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(672, 499);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MenuSupervisor";
			this->Text = L"Supervision";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void verListaDeUsuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {


		if (MantenimientoUsuarios::instancia != nullptr)
		{
			// Enfoca la instancia existente
			MantenimientoUsuarios::instancia->Focus();
		}
		else
		{
			// Crea y abre una nueva instancia
			MantenimientoUsuarios^ ventanaMantenimientoUsuarios = gcnew MantenimientoUsuarios();
			ventanaMantenimientoUsuarios->MdiParent = this;
			ventanaMantenimientoUsuarios->ControlBox = false;
			ventanaMantenimientoUsuarios->Show();
		}
		



	}
private: System::Void verListaDeTrabajadoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (MantenimientoTrabajadores::instancia != nullptr)
	{
		// Enfoca la instancia existente
		MantenimientoTrabajadores::instancia->Focus();
	}
	else
	{
		// Crea y abre una nueva instancia
		MantenimientoTrabajadores^ objMantenimientoTrabajadores = gcnew MantenimientoTrabajadores();
		objMantenimientoTrabajadores->MdiParent = this;
		objMantenimientoTrabajadores->ControlBox = false;
		objMantenimientoTrabajadores->Show();


}
}
private: System::Void verListaDePacientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (MantenimientoPacientes::instancia != nullptr)
	{
		// Enfoca la instancia existente
		MantenimientoPacientes::instancia->Focus();
	}
	else
	{
		// Crea y abre una nueva instancia
		MantenimientoPacientes^ objMantenimientoPacientes = gcnew MantenimientoPacientes();
		objMantenimientoPacientes->MdiParent = this;
		objMantenimientoPacientes->ControlBox = false;
		objMantenimientoPacientes->Show();

}
}
private: System::Void verAlmacenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (SupervisionAlmacen::instancia != nullptr)
	{
		// Enfoca la instancia existente
		SupervisionAlmacen::instancia->Focus();
	}
	else
	{
		// Crea y abre una nueva instancia
		SupervisionAlmacen^ objSupervisionAlmacen = gcnew SupervisionAlmacen();
		objSupervisionAlmacen->MdiParent = this;
		objSupervisionAlmacen->ControlBox = false;
		objSupervisionAlmacen->Show();

}
}


};
}
