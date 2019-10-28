#pragma once
#include "Pokemon.h"
#include "Ordenamientos.h"

namespace Laboratorio4JavierMorales1210219 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ ordenado_no;
	private: System::Windows::Forms::RichTextBox^ ordenado_si;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ordenado_no = (gcnew System::Windows::Forms::RichTextBox());
			this->ordenado_si = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(388, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ordenar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ordenado_no
			// 
			this->ordenado_no->Location = System::Drawing::Point(49, 30);
			this->ordenado_no->Name = L"ordenado_no";
			this->ordenado_no->ReadOnly = true;
			this->ordenado_no->Size = System::Drawing::Size(128, 327);
			this->ordenado_no->TabIndex = 1;
			this->ordenado_no->Text = L"";
			// 
			// ordenado_si
			// 
			this->ordenado_si->Location = System::Drawing::Point(207, 30);
			this->ordenado_si->Name = L"ordenado_si";
			this->ordenado_si->Size = System::Drawing::Size(128, 327);
			this->ordenado_si->TabIndex = 2;
			this->ordenado_si->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 364);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Texto obtenido del archivo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(220, 364);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Números ordenados";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Bubble Sort", L"Stupid Sort", L"Quick Sort" });
			this->comboBox1->Location = System::Drawing::Point(388, 117);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(241, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(385, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Instrucciones:";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(385, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(250, 90);
			this->label4->TabIndex = 7;
			this->label4->Text = resources->GetString(L"label4.Text");
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(385, 276);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"----->    ,número,número,número,número,";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(385, 306);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Ejemplo:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(385, 334);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"10,18,19,22,17,44,99,";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(344, 392);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(300, 16);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Javier Andrés Morales González, 1210219.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(656, 417);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ordenado_si);
			this->Controls->Add(this->ordenado_no);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Métodos de ordenamiento";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		StreamReader^ lector = gcnew StreamReader("..//Laboratorio_4_Javier_Morales_1210219//pokemones.txt");
		String^ texto;
		String^ t;
		Stopwatch^ S = gcnew Stopwatch();
		

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (comboBox1->Text != "")
		{
			if (t != "")
			{
				texto = t;
			}
			Ordenamientos* O = new Ordenamientos();
			//Pokemon* P = new Pokemon();
			//P->nombre_pokemon = "Pikachu";
			//P->generacion = 1;
			//P->National_number = 99;
			//P->MostrarPokemon(*P);
			int numeros_unicos[100];
			String^ numero;
			int contador = 0;
			int tamaño = 0;
			tamaño = texto->Length;
			for (int i = 0; i < 100; i++)
			{
				numeros_unicos[i] = -1;
			}
			try
			{
				for (int i = 0; i < tamaño; i++)
				{
					if (System::Convert::ToString(texto[i]) == ",")
					{
						if (i != 0 && System::Convert::ToInt32(numero) < 1)
						{
							MessageBox::Show("El número único de un Pokémon no puede ser menor a 1");
							System::Convert::ToInt16("d");
						}
						if (i != 0)
						{
							numeros_unicos[contador] = System::Convert::ToInt32(numero);
							contador++;
						}
						numero = "";
					}
					else
					{
						numero += Convert::ToString(texto[i]);
					}
				}
			}
			catch (...)
			{
				MessageBox::Show("Hubo un error, ingresó demasiados números o el formato es incorrecto.");
			}
			int n = 0;
			for (int i = 0; i < 100; i++)
			{
				if (numeros_unicos[i] > 0)
				{
					n++;
				}
			}
			String^ res = "";
			int* p;
			if (comboBox1->Text == "Bubble Sort")
			{
				S->Reset();
				S->Start();
				p = O->BubbleSort(numeros_unicos, n);
				S->Stop();
				MessageBox::Show("El método de ordenamiento " + comboBox1->Text + " tardó " + S->Elapsed);
			}
			if (comboBox1->Text == "Stupid Sort")
			{
				S->Reset();
				S->Start();
				p = O->StupidSort(numeros_unicos, n);
				S->Stop();
				MessageBox::Show("El método de ordenamiento " + comboBox1->Text + " tardó " + S->Elapsed);
			}
			if (comboBox1->Text == "Quick Sort")
			{
				S->Reset();
				S->Start();
				p = O->QuickSort(numeros_unicos, 0, n - 1);
				S->Stop();
				MessageBox::Show("El método de ordenamiento " + comboBox1->Text + " tardó " + S->Elapsed);

			}
			for (int* i = p; *i != -1; i++)
			{
				res += *i + "\n";
			}
			ordenado_si->Text = res;
		}
		else
		{
			MessageBox::Show("No seleccionó ningún método de ordenamiento.");
		}




	}
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		t = lector->ReadToEnd();
		ordenado_no->Text = t;
	}
};
}
