#pragma once
#include "TPolynom.h"
#include "Action.h"

namespace WinFormsLab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		TPolynom* poly ;
	private: System::Windows::Forms::Label^  polynom_box;
	public:

	public:
		TPolynom* inspoly;

		Form1(void)
		{
			InitializeComponent();
			TPolynom* poly = new TPolynom();
			poly = NULL;
			polynom_box->Text = System::Convert::ToString(0);
			TPolynom* inspoly = new TPolynom();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  coeff_box;
	private: System::Windows::Forms::TextBox^  x_box;
	private: System::Windows::Forms::TextBox^  y_box;
	private: System::Windows::Forms::TextBox^  z_box;
	private: System::Windows::Forms::Button^  Add_button;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->coeff_box = (gcnew System::Windows::Forms::TextBox());
			this->x_box = (gcnew System::Windows::Forms::TextBox());
			this->y_box = (gcnew System::Windows::Forms::TextBox());
			this->z_box = (gcnew System::Windows::Forms::TextBox());
			this->Add_button = (gcnew System::Windows::Forms::Button());
			this->polynom_box = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Polynom:";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"coeff";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(12, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"x";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(50, 229);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(12, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"y";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 255);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(12, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"z";
			// 
			// coeff_box
			// 
			this->coeff_box->Location = System::Drawing::Point(68, 155);
			this->coeff_box->Name = L"coeff_box";
			this->coeff_box->Size = System::Drawing::Size(100, 20);
			this->coeff_box->TabIndex = 6;
			this->coeff_box->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// x_box
			// 
			this->x_box->Location = System::Drawing::Point(68, 199);
			this->x_box->Name = L"x_box";
			this->x_box->Size = System::Drawing::Size(100, 20);
			this->x_box->TabIndex = 7;
			// 
			// y_box
			// 
			this->y_box->Location = System::Drawing::Point(68, 229);
			this->y_box->Name = L"y_box";
			this->y_box->Size = System::Drawing::Size(100, 20);
			this->y_box->TabIndex = 8;
			// 
			// z_box
			// 
			this->z_box->Location = System::Drawing::Point(68, 255);
			this->z_box->Name = L"z_box";
			this->z_box->Size = System::Drawing::Size(100, 20);
			this->z_box->TabIndex = 9;
			// 
			// Add_button
			// 
			this->Add_button->Location = System::Drawing::Point(244, 155);
			this->Add_button->Name = L"Add_button";
			this->Add_button->Size = System::Drawing::Size(259, 120);
			this->Add_button->TabIndex = 10;
			this->Add_button->Text = L"ADD";
			this->Add_button->UseVisualStyleBackColor = true;
			this->Add_button->Click += gcnew System::EventHandler(this, &Form1::Add_button_Click);
			// 
			// polynom_box
			// 
			this->polynom_box->AutoSize = true;
			this->polynom_box->Location = System::Drawing::Point(69, 55);
			this->polynom_box->Name = L"polynom_box";
			this->polynom_box->Size = System::Drawing::Size(0, 13);
			this->polynom_box->TabIndex = 11;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(515, 378);
			this->Controls->Add(this->polynom_box);
			this->Controls->Add(this->Add_button);
			this->Controls->Add(this->z_box);
			this->Controls->Add(this->y_box);
			this->Controls->Add(this->x_box);
			this->Controls->Add(this->coeff_box);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"WinFormPolynom";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 

}

		 String^ StrToStr(string s)
		 {
			 String^ str;
			 for (int i = 0; i < s.size(); i++)
			 {
				 str += s[i];
			 }
			 return str;
		 }
private: System::Void Add_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 int type = System::Convert::ToDouble(coeff_box->Text);
			 int x = System::Convert::ToDouble(x_box->Text);
			 int y = System::Convert::ToDouble(y_box->Text);
			 int z = System::Convert::ToDouble(z_box->Text);
			 inspoly->InsPoly(type, x, y, z);
			 *poly += *inspoly;

			 this->polynom_box->Text = StrToStr(poly->OutPoly());
			 //this->polynom_box->Refresh();
}

};
}
