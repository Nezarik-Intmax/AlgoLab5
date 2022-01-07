#pragma once
#include <limits>

namespace AlgoLab5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(13, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 26);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyUp);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 452);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseClick);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int** graph;
		int* nodes;
		bool* flags;
		array <String^>^ pathS;
		int N = 5;
		int count = 0;
		array<System::Windows::Forms::Button^>^ graphBtn;
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e){
			graph = new int* [N];
			nodes = new int[N];
			flags = new bool[N];
			pathS = gcnew array<String^>(N);
			graphBtn = gcnew array<System::Windows::Forms::Button^>(N);
			for(int i = 0; i < N; i++){
				flags[i] = false;
				graph[i] = new int[N];
				nodes[i] = std::numeric_limits<int>::max();
				//graphBtn[i] = gcnew array<System::Windows::Forms::Button^>(N);
				/*for(int j = 0; j < N; j++){
					graph[i][j] = 0;
					System::Windows::Forms::Button^ Node = (gcnew System::Windows::Forms::Button());
					Node->Location = System::Drawing::Point(16 + (j * 75), 220 + (i * 50));
					Node->Name = L"Node" + i + "_" + j;
					Node->Size = System::Drawing::Size(20, 20);
					Node->TabIndex = i;
					Node->Tag = j;
					Node->Text = "0";
					//Node->TextChanged += gcnew System::EventHandler(this, &MyForm::Node_TextChanged);
					//Node->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
					graphBtn[i][j] = Node;
					this->Controls->Add(Node);
				}*/
			}
		}
		private: System::Void MyForm_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e){
			count++;
			System::Windows::Forms::Button^ Node = (gcnew System::Windows::Forms::Button());
			Node->Location = System::Drawing::Point(e->X, e->Y);
			Node->Name = L"Graph"+count;
			Node->Size = System::Drawing::Size(20, 20);
			Node->TabIndex = count;
			Node->Tag = count;
			Node->Text = "0";
			//Node->TextChanged += gcnew System::EventHandler(this, &MyForm::Node_TextChanged);
			//Node->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Controls->Add(Node);
		}
		private: System::Void textBox1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e){
			if(e->KeyCode == Keys::Enter){
				
			}
		}
};
}
