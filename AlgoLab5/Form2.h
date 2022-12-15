#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

public ref class Form2: public System::Windows::Forms::Form{
public:
	Form2(void){
		InitializeComponent();
	}
	String^ getText(){
		return textBoxD->Text;
	}
	System::Windows::Forms::TextBox^ textBoxD;

public:
private:
	System::ComponentModel::IContainer^ components;
	void InitializeComponent(void){
		this->textBoxD = (gcnew System::Windows::Forms::TextBox());
		this->SuspendLayout();
		// 
		// textBoxD
		// 
		this->textBoxD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		this->textBoxD->Location = System::Drawing::Point(10, 10);
		this->textBoxD->Name = L"textBoxD";
		this->textBoxD->Size = System::Drawing::Size(100, 26);
		this->textBoxD->TabIndex = 0;
		this->textBoxD->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form2::textBoxD_KeyUp);
		// 
		// Form2
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(120, 44);
		this->Controls->Add(this->textBoxD);
		this->Name = L"Form2";
		this->Text = L"MyForm";
		this->ResumeLayout(false);
		this->PerformLayout();

	}
	bool enter = false;
	System::Void textBoxD_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e){
		if(e->KeyCode == Keys::Enter){
			enter = true;
			this->DialogResult = ::DialogResult::OK;
		}
	}
};