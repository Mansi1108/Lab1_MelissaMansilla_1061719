#pragma once
#include "Recursividad.h"

namespace Lab1MelissaMansilla1061719 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
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
	private: System::Windows::Forms::Label^  numFlbl;
	protected:
	private: System::Windows::Forms::TextBox^  Numtxt;
	private: System::Windows::Forms::Button^  fiboBTn;
	private: System::Windows::Forms::Label^  resLbl;
	private: System::Windows::Forms::Label^  respueslbl;
	private: System::Windows::Forms::Label^  NumFactlbl;
	private: System::Windows::Forms::TextBox^  num2txt;
	private: System::Windows::Forms::Button^  Factorialbtn;
	private: System::Windows::Forms::Label^  resFact;
	private: System::Windows::Forms::Label^  respuesFactlbl;
	private: System::Windows::Forms::Label^  respues3lbl;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  Binariobtn;
	private: System::Windows::Forms::TextBox^  num3txt;
	private: System::Windows::Forms::Label^  label3;



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
			this->numFlbl = (gcnew System::Windows::Forms::Label());
			this->Numtxt = (gcnew System::Windows::Forms::TextBox());
			this->fiboBTn = (gcnew System::Windows::Forms::Button());
			this->resLbl = (gcnew System::Windows::Forms::Label());
			this->respueslbl = (gcnew System::Windows::Forms::Label());
			this->NumFactlbl = (gcnew System::Windows::Forms::Label());
			this->num2txt = (gcnew System::Windows::Forms::TextBox());
			this->Factorialbtn = (gcnew System::Windows::Forms::Button());
			this->resFact = (gcnew System::Windows::Forms::Label());
			this->respuesFactlbl = (gcnew System::Windows::Forms::Label());
			this->respues3lbl = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Binariobtn = (gcnew System::Windows::Forms::Button());
			this->num3txt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// numFlbl
			// 
			this->numFlbl->AutoSize = true;
			this->numFlbl->Location = System::Drawing::Point(25, 63);
			this->numFlbl->Name = L"numFlbl";
			this->numFlbl->Size = System::Drawing::Size(197, 20);
			this->numFlbl->TabIndex = 0;
			this->numFlbl->Text = L"Ingrese número Fibonacci:";
			// 
			// Numtxt
			// 
			this->Numtxt->Location = System::Drawing::Point(260, 63);
			this->Numtxt->Name = L"Numtxt";
			this->Numtxt->Size = System::Drawing::Size(110, 26);
			this->Numtxt->TabIndex = 1;
			// 
			// fiboBTn
			// 
			this->fiboBTn->Location = System::Drawing::Point(112, 116);
			this->fiboBTn->Name = L"fiboBTn";
			this->fiboBTn->Size = System::Drawing::Size(190, 30);
			this->fiboBTn->TabIndex = 2;
			this->fiboBTn->Text = L"Fibonacci";
			this->fiboBTn->UseVisualStyleBackColor = true;
			this->fiboBTn->Click += gcnew System::EventHandler(this, &MyForm::fiboBTn_Click);
			// 
			// resLbl
			// 
			this->resLbl->AutoSize = true;
			this->resLbl->Location = System::Drawing::Point(40, 158);
			this->resLbl->Name = L"resLbl";
			this->resLbl->Size = System::Drawing::Size(89, 20);
			this->resLbl->TabIndex = 3;
			this->resLbl->Text = L"Resulltado:";
			// 
			// respueslbl
			// 
			this->respueslbl->AutoSize = true;
			this->respueslbl->Location = System::Drawing::Point(147, 158);
			this->respueslbl->Name = L"respueslbl";
			this->respueslbl->Size = System::Drawing::Size(0, 20);
			this->respueslbl->TabIndex = 4;
			// 
			// NumFactlbl
			// 
			this->NumFactlbl->AutoSize = true;
			this->NumFactlbl->Location = System::Drawing::Point(106, 197);
			this->NumFactlbl->Name = L"NumFactlbl";
			this->NumFactlbl->Size = System::Drawing::Size(125, 20);
			this->NumFactlbl->TabIndex = 5;
			this->NumFactlbl->Text = L"Ingrese número:";
			this->NumFactlbl->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// num2txt
			// 
			this->num2txt->Location = System::Drawing::Point(252, 197);
			this->num2txt->Name = L"num2txt";
			this->num2txt->Size = System::Drawing::Size(110, 26);
			this->num2txt->TabIndex = 6;
			// 
			// Factorialbtn
			// 
			this->Factorialbtn->Location = System::Drawing::Point(121, 243);
			this->Factorialbtn->Name = L"Factorialbtn";
			this->Factorialbtn->Size = System::Drawing::Size(190, 30);
			this->Factorialbtn->TabIndex = 7;
			this->Factorialbtn->Text = L"Factorial";
			this->Factorialbtn->UseVisualStyleBackColor = true;
			this->Factorialbtn->Click += gcnew System::EventHandler(this, &MyForm::Factorialbtn_Click);
			// 
			// resFact
			// 
			this->resFact->AutoSize = true;
			this->resFact->Location = System::Drawing::Point(40, 297);
			this->resFact->Name = L"resFact";
			this->resFact->Size = System::Drawing::Size(89, 20);
			this->resFact->TabIndex = 8;
			this->resFact->Text = L"Resulltado:";
			// 
			// respuesFactlbl
			// 
			this->respuesFactlbl->AutoSize = true;
			this->respuesFactlbl->Location = System::Drawing::Point(144, 297);
			this->respuesFactlbl->Name = L"respuesFactlbl";
			this->respuesFactlbl->Size = System::Drawing::Size(0, 20);
			this->respuesFactlbl->TabIndex = 9;
			// 
			// respues3lbl
			// 
			this->respues3lbl->AutoSize = true;
			this->respues3lbl->Location = System::Drawing::Point(144, 422);
			this->respues3lbl->Name = L"respues3lbl";
			this->respues3lbl->Size = System::Drawing::Size(0, 20);
			this->respues3lbl->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 422);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 20);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Resulltado:";
			// 
			// Binariobtn
			// 
			this->Binariobtn->Location = System::Drawing::Point(121, 368);
			this->Binariobtn->Name = L"Binariobtn";
			this->Binariobtn->Size = System::Drawing::Size(190, 30);
			this->Binariobtn->TabIndex = 12;
			this->Binariobtn->Text = L"Binario";
			this->Binariobtn->UseVisualStyleBackColor = true;
			this->Binariobtn->Click += gcnew System::EventHandler(this, &MyForm::Binariobtn_Click);
			// 
			// num3txt
			// 
			this->num3txt->Location = System::Drawing::Point(252, 322);
			this->num3txt->Name = L"num3txt";
			this->num3txt->Size = System::Drawing::Size(110, 26);
			this->num3txt->TabIndex = 11;
			this->num3txt->TextChanged += gcnew System::EventHandler(this, &MyForm::num3txt_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(106, 322);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Ingrese número:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(444, 456);
			this->Controls->Add(this->respues3lbl);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Binariobtn);
			this->Controls->Add(this->num3txt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->respuesFactlbl);
			this->Controls->Add(this->resFact);
			this->Controls->Add(this->Factorialbtn);
			this->Controls->Add(this->num2txt);
			this->Controls->Add(this->NumFactlbl);
			this->Controls->Add(this->respueslbl);
			this->Controls->Add(this->resLbl);
			this->Controls->Add(this->fiboBTn);
			this->Controls->Add(this->Numtxt);
			this->Controls->Add(this->numFlbl);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void fiboBTn_Click(System::Object^  sender, System::EventArgs^  e) {
		//Declaracion de Stopwatch
		Stopwatch^stopWatch1 = gcnew Stopwatch();
		stopWatch1->Start();
		//Ejecución Fibonacco
		int num = System::Convert::ToInt32(Numtxt->Text);
		Recursividad^recursividadObj = gcnew Recursividad();
		respueslbl->Text = respueslbl->Text + System::Convert::ToString(recursividadObj->Fibonacci(num));
		stopWatch1->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo de Ejecución:" + System::Convert::ToString(stopWatch1->Elapsed));
		//Leer Archivo
		StreamReader^ streamReader = gcnew StreamReader("...//Archivos//numeros.csv");
		String^contenidoArchivo = streamReader->ReadToEnd();
		//Escribir Archivo
		StreamWriter^streamWriter = gcnew StreamWriter("...//Archivos//resultado.csv");
		//StreamWriter->WriteLine("Texto que quieren escribir");
		//StreamWriter->Close();
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {

}
	private: System::Void Factorialbtn_Click(System::Object^  sender, System::EventArgs^  e) {
		int num2 = System::Convert::ToInt32(num2txt->Text);
		Recursividad^recursividadObj2 = gcnew Recursividad();
		respuesFactlbl->Text = respuesFactlbl->Text + System::Convert::ToString(recursividadObj2->Factorial(num2));
}
private: System::Void num3txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Binariobtn_Click(System::Object^  sender, System::EventArgs^  e) {
		int num3 = System::Convert::ToInt32(num3txt->Text);
		Recursividad^recursividadObj2 = gcnew Recursividad();
		respues3lbl->Text = respues3lbl->Text + System::Convert::ToString(recursividadObj2->Binario(num3));
		
}
};
}
