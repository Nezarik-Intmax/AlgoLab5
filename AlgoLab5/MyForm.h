#pragma once
#include <limits>
#include "Form2.h"

namespace AlgoLab5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(13, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 26);
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyUp);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(13, 45);
			this->textBox2->Name = L"textBox1";
			this->textBox2->Size = System::Drawing::Size(152, 26);
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->TabIndex = 0;
			this->textBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(171, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(971, 21);
			this->label2->Name = L"label1";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Text = L"label1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(738, 452);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Location = System::Drawing::Point(161, 21);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
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
				for(int j = 0; j < N; j++){graph[i][j] = -1;}
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
			System::Windows::Forms::Button^ Node = (gcnew System::Windows::Forms::Button());
			Node->Location = System::Drawing::Point(e->X, e->Y);
			Node->Name = L"Graph"+count;
			Node->Size = System::Drawing::Size(20, 20);
			Node->TabIndex = count;
			Node->Tag = count;
			Node->Text = count.ToString();
			Node->Click += gcnew System::EventHandler(this, &MyForm::CreateEdge);
			graphBtn[count] = Node;
			this->Controls->Add(Node);
			count++;
		}
		private: System::Void textBox1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e){
			if(e->KeyCode == Keys::Enter){
				Algorithm();
			}
		}
		private: System::Void Algorithm(){
			for(int i = 0; i < N; i++){
				flags[i] = false;
				nodes[i] = std::numeric_limits<int>::max();
				pathS[i] = "";
			}
			nodes[0] = 0;
			int min, minI;
			for(int i = 0; i < N; i++){
				min = std::numeric_limits<int>::max(), minI = 0;
				for(int j = 0; j < count; j++){
					if((!flags[j]) && (nodes[j] < min)){
						min = nodes[j];
						minI = j;
					}
				}
				for(int j = 0; j < count; j++){
					if(!flags[j]){
						if((graph[minI][j] != -1) && ((graph[minI][j] + nodes[minI]) < nodes[j])){
							nodes[j] = graph[minI][j] + nodes[minI];
							pathS[j] += minI + "->";
						}
					}
				}
				flags[minI] = true;
			}
			this->label2->Text = "";
			for(int o = 0; o < N; o++){
				pathS[o] += o;
				this->label2->Text += "S+P = " + nodes[o] + " \n" + pathS[o] + "\n\n";
			}
		}
		Button^ tmpNode = nullptr;
		public: System::Void CreateEdge(System::Object^ sender, System::EventArgs^ e){
			if(tmpNode == nullptr){
				tmpNode = (Button^)sender;
			}else{
				Form2^ dialogForm = gcnew Form2;
				if(dialogForm->ShowDialog(this) == ::DialogResult::OK){
					graph[tmpNode->TabIndex][((Button^)sender)->TabIndex] = Convert::ToInt32(dialogForm->textBoxD->Text);
					graph[((Button^)sender)->TabIndex][tmpNode->TabIndex] = Convert::ToInt32(dialogForm->textBoxD->Text);
					this->label1->Text = dialogForm->textBoxD->Text;
				} else{
					this->label1->Text = "Cancelled";
				}

				delete dialogForm;
				tmpNode = nullptr;
			}
			labelUpdate();
			this->Invalidate();
		}
		private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e){
			Pen^ p = gcnew Pen(Color::Black);
			for(int i=0; i < N; i++){
				for(int j=0; j < N; j++){
					if(graph[i][j] != -1){
						e->Graphics->DrawLine(p, Point(graphBtn[i]->Location.X+10, graphBtn[i]->Location.Y+10), Point(graphBtn[j]->Location.X+10, graphBtn[j]->Location.Y+10));
					}
				}
			}
		}
		private: System::Void labelUpdate(){
			label1->Text = "";
			for(int i = 0; i < count; i++){
				for(int j = 0; j < count; j++){
					label1->Text += (graph[i][j]).ToString() + "  ";
				}
				label1->Text += "\n";
			}
		}
	};
}
