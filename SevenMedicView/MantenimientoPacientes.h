#pragma once

namespace SevenMedicView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MantenimientoPacientes
	/// </summary>
	public ref class MantenimientoPacientes : public System::Windows::Forms::Form
	{
	public:
		static MantenimientoPacientes^ instancia;

		MantenimientoPacientes(void)
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
		~MantenimientoPacientes()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// MantenimientoPacientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(448, 343);
			this->Name = L"MantenimientoPacientes";
			this->Text = L"MantenimientoPacientes";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
