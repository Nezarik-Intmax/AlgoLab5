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
		bool** edges;
		int* nodes;
		bool* flags;
		array <String^>^ pathS;
		int N = 50;
		int count = 0;
		array<System::Windows::Forms::Button^>^ graphBtn;
		array<Label^, 2>^ labels = gcnew array<Label^, 2>(60, 60);
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e){
			graph = new int*[N];
			edges = new bool*[N];
			nodes = new int[N];
			flags = new bool[N];
			pathS = gcnew array<String^>(N);
			graphBtn = gcnew array<System::Windows::Forms::Button^>(N);
			for(int i = 0; i < N; i++){
				flags[i] = false;
				graph[i] = new int[N];
				edges[i] = new bool[N];
				nodes[i] = std::numeric_limits<int>::max();
				for(int j = 0; j < N; j++){
					graph[i][j] = -1;
					edges[i][j] = false;
				}
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
				Algorithm(Convert::ToInt32(textBox1->Text));
				ShowPath(Convert::ToInt32(textBox1->Text), Convert::ToInt32(textBox2->Text));
			}
		}
		private: System::Void Algorithm(int start){
			for(int i = 0; i < count; i++){
				flags[i] = false;
				nodes[i] = std::numeric_limits<int>::max();
				pathS[i] = "";
			}
			nodes[start] = 0;
			int min, minI;
			label2->Text = "";
			do{
				min = std::numeric_limits<int>::max(), minI = 10000;
				for(int j = 0; j < count; j++){
					if((!flags[j]) && (nodes[j] < min)){
						min = nodes[j];
						minI = j;
					}
				}
				if(minI!=10000){
					for(int j = 0; j < count; j++){
						if(!flags[j]){
							if((graph[minI][j] != -1) && ((graph[minI][j] + nodes[minI]) < nodes[j])){
								nodes[j] = graph[minI][j] + nodes[minI];
								label2->Text += "� ������ ���������� ����� � "+j+" ������� "+nodes[j]+" �� ������� "+minI+"\n";
								/*edges[minI][j] = true;
								edges[j][minI] = true;
								this->Invalidate();
								_sleep(1000);*/
							}
						}
					}
				}
				flags[minI] = true;
			}while(minI != 10000);
		}
		int k = 1;
		int* ver = new int[N];
		private: System::Void ShowPath(int start, int endO){
			int end = endO;
			ver[0] = end;
			k = 1;
			int weight = nodes[end];

			Pen^ pr = gcnew Pen(Color::Red);
			while(end != start){
				for(int i = 0; i < count; i++){
					if(graph[i][end] != -1){
						int temp = weight - graph[i][end];
						if(temp == nodes[i]){
							weight = temp;
							end = i;
							ver[k] = i;
							k++;
						}
					}
				}
			}
			label2->Text += "\n���� �� "+start+" � "+endO+" = "+nodes[endO]+"\n";
			for(int i = k - 1; i >= 0; i--){
				this->label2->Text += ver[i];
				if(i>0) this->label2->Text += "->";
			}
			this->Invalidate();
			/*if(!edges[i][j])
				e->Graphics->DrawLine(pb, Point(graphBtn[i]->Location.X+10, graphBtn[i]->Location.Y+10), Point(graphBtn[j]->Location.X+10, graphBtn[j]->Location.Y+10));
			else*/
			//delete[](ver);
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
					int x1, x2, y1, y2;
					x1 = graphBtn[tmpNode->TabIndex]->Location.X + 10;
					x2 = graphBtn[((Button^)sender)->TabIndex]->Location.X + 10;
					y1 = graphBtn[tmpNode->TabIndex]->Location.Y + 10;
					y2 = graphBtn[((Button^)sender)->TabIndex]->Location.Y + 10;

					if(labels[((Button^)sender)->TabIndex, tmpNode->TabIndex] != nullptr){
						labels[((Button^)sender)->TabIndex, tmpNode->TabIndex]->Text = dialogForm->textBoxD->Text;
					}else{
						Label^ label = gcnew Label();
						label->Text = graph[tmpNode->TabIndex][((Button^)sender)->TabIndex].ToString();

						label->AutoSize = true;
						label->Location = System::Drawing::Point((x1 + x2) / 2, (y1 + y2) / 2);
						label->Name = L"label" + tmpNode->TabIndex.ToString() + ((Button^)sender)->TabIndex.ToString();
						label->Size = System::Drawing::Size(35, 13);
						label->TabIndex = 1;
						label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(204)));
						this->Controls->Add(label);
						labels[tmpNode->TabIndex, ((Button^)sender)->TabIndex] = label;
						labels[((Button^)sender)->TabIndex, tmpNode->TabIndex] = label;
					}
				}

				delete dialogForm;
				tmpNode = nullptr;
			}
			labelUpdate();
			this->Invalidate();
		}
		private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e){
			Pen^ pb = gcnew Pen(Color::Black);
			Pen^ pr = gcnew Pen(Color::Red);
			int x1, x2, y1, y2;
			for(int i=0; i < count; i++){
				for(int j=0; j < count; j++){
					if((graph[i][j] != -1)&&(i!=j)){
						x1 = graphBtn[i]->Location.X + 10;
						x2 = graphBtn[j]->Location.X + 10;
						y1 = graphBtn[i]->Location.Y + 10;
						y2 = graphBtn[j]->Location.Y + 10;
						/*if(!edges[i][j])
							e->Graphics->DrawLine(pb, Point(graphBtn[i]->Location.X+10, graphBtn[i]->Location.Y+10), Point(graphBtn[j]->Location.X+10, graphBtn[j]->Location.Y+10));
						else*/
						e->Graphics->DrawLine(pb, Point(x1, y1), Point(x2, y2));
					}
				}
			}
			for(int i = k - 1; i > 0; i--){
				x1 = graphBtn[ver[i]]->Location.X + 10;
				x2 = graphBtn[ver[i - 1]]->Location.X + 10;
				y1 = graphBtn[ver[i]]->Location.Y + 10;
				y2 = graphBtn[ver[i - 1]]->Location.Y + 10;
				e->Graphics->DrawLine(pr, x1, y1, x2, y2);
			}
		}
		private: System::Void labelUpdate(){
			label1->Text = "";
			/*for(int i = 0; i < count; i++){
				for(int j = 0; j < count; j++){
					label1->Text += (graph[i][j]).ToString() + "  ";
				}
				label1->Text += "\n";
			}*/
		}
	};
}
