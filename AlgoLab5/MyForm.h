#pragma once
#include <limits>
#include "Form2.h"

namespace AlgoLab5{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm: public System::Windows::Forms::Form{
	public:
		MyForm(void){
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm(){
			if(components){
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void){
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(13 + 146 + 15, 13);
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
			this->textBox2->Location = System::Drawing::Point(13 + 146 + 15, 45);
			this->textBox2->Name = L"textBox1";
			this->textBox2->Size = System::Drawing::Size(152, 26);
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->TabIndex = 0;
			this->textBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyUp);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(546, 140);
			this->label4->TabIndex = 1;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Text = L"Введите город А:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 45);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(546, 140);
			this->label5->TabIndex = 1;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Text = L"Введите город B:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 546);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(546, 140);
			this->label3->TabIndex = 1;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Text = resources->GetString(L"label1.Text");
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(171, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(971 - 200, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(738, 452);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			//this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Location = System::Drawing::Point(161, 21);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyUp);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseClick);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int** graph;
		//int** graphP;
		bool** edges;
		int* nodes;
		bool* flags;
		array <String^>^ pathS;
		int N = 50;
		int count = 0;
		array<System::Windows::Forms::Button^>^ graphBtn;
		array<Label^, 2>^ labels = gcnew array<Label^, 2>(60, 60);
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e){
		System::Windows::Forms::Button^ Node = (gcnew System::Windows::Forms::Button());
		Node->Location = System::Drawing::Point(13, 45 + 40);
		Node->Name = L"Graph" + count;
		Node->Size = System::Drawing::Size(314, 30);
		Node->TabIndex = count;
		Node->Tag = count;
		Node->Text = "Найти кратчайший путь";
		Node->Click += gcnew System::EventHandler(this, &MyForm::textBox1_KeyUp2);
		this->Controls->Add(Node);
		Node = (gcnew System::Windows::Forms::Button());
		Node->Location = System::Drawing::Point(13, 45 + 85);
		Node->Name = L"shortest_cycle_btn";
		Node->Size = System::Drawing::Size(314, 30);
		Node->TabIndex = count;
		Node->Tag = count;
		Node->Text = "Задача коммивояжёра";
		Node->Click += gcnew System::EventHandler(this, &MyForm::shortest_cycle_start);
		this->Controls->Add(Node);



		graph = new int* [N];
		//graphP = new int*[N];
		edges = new bool* [N];
		nodes = new int[N];
		flags = new bool[N];
		pathS = gcnew array<String^>(N);
		graphBtn = gcnew array<System::Windows::Forms::Button^>(N);
		for(int i = 0; i < N; i++){
			flags[i] = false;
			graph[i] = new int[N];
			//graphP[i] = new int[N];
			edges[i] = new bool[N];
			nodes[i] = std::numeric_limits<int>::max();
			for(int j = 0; j < N; j++){
				graph[i][j] = -1;
				//graphP[i][j] = -1;
				edges[i][j] = false;
			}
		}
	}
	private: System::Void MyForm_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e){
		System::Windows::Forms::Button^ Node = (gcnew System::Windows::Forms::Button());
		Node->Location = System::Drawing::Point(e->X, e->Y);
		Node->Name = L"Graph" + count;
		Node->Size = System::Drawing::Size(20, 20);
		Node->TabIndex = count;
		Node->Tag = count;
		Node->Text = (count + 1).ToString();
		Node->Click += gcnew System::EventHandler(this, &MyForm::CreateEdge);
		graphBtn[count] = Node;
		this->Controls->Add(Node);
		count++;
	}
	private: System::Void textBox1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e){
		try{
			if(e->KeyCode == Keys::Enter){
				int ind = Convert::ToInt32(textBox1->Text) - 1;
				int ind2 = Convert::ToInt32(textBox2->Text) - 1;
				if(count==0 || ind < 0 || ind >=count || ind2 < 0 || ind2 >= count){
					label2->Text = "Ошибка, индекс дороги несуществует";
				}else{
					Algorithm(ind);
					ShowPath(ind, ind2);
				}
			}
		} catch(const System::FormatException^){
			label2->Text = "Ошибка, индекс дороги должен быть целым числом";
		}
	}
	private: System::Void textBox1_KeyUp2(System::Object^ sender, System::EventArgs^ e){
		try{
			int ind = Convert::ToInt32(textBox1->Text) - 1;
			int ind2 = Convert::ToInt32(textBox2->Text) - 1;
			if(count == 0 || ind < 0 || ind >= count || ind2 < 0 || ind2 >= count){
				label2->Text = "Ошибка, индекс дороги несуществует";
			} else{
				Algorithm(ind);
				ShowPath(ind, ind2);
			}

		} catch(const System::FormatException^){
			label2->Text = "Ошибка, индекс дороги должен быть целым числом";
		}
	}
	private: System::Void shortest_cycle_start(System::Object^ sender, System::EventArgs^ e){
		shortest_cycle(0);
		//ShowPath(Convert::ToInt32(textBox1->Text) - 1, Convert::ToInt32(textBox2->Text) - 1);
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
			if(minI != 10000){
				for(int j = 0; j < count; j++){
					if(!flags[j]){
						if((graph[minI][j] != -1) && ((graph[minI][j] /*+ graphP[minI][j]*/ + nodes[minI]) < nodes[j])){
							nodes[j] = graph[minI][j] + /*graphP[minI][j] +*/ nodes[minI];
							//label2->Text += "В массив кратчайших путей к "+j+" записан "+nodes[j]+" из вершины "+minI+"\n";
						}
					}
				}
			}
			flags[minI] = true;
		} while(minI != 10000);
	}
	private: System::Void shortest_cycle(int start){
		for(int i = 0; i < count; i++){
			flags[i] = false;
		}
		int ind = start;
		flags[ind]=true;
		int min, minI;
		label2->Text = "";
		int path=0;
		do{
			min = std::numeric_limits<int>::max(), minI = 10000;
			for(int j = 0; j < count; j++){
				if((!flags[j]) && (graph[ind][j]!=-1) && (graph[ind][j] < min)){
					min = graph[ind][j];
					minI = j;
				}
			}
			if(minI != 10000){
				path+=min;
				ind = minI;
				flags[minI] = true;
			}
		} while(minI != 10000);
		Algorithm(ind);
		path += nodes[start];
		label2->Text = "Длина цикла: "+path;
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
					int temp = weight - graph[i][end]/* - graphP[i][end]*/;
					if(temp == nodes[i]){
						weight = temp;
						end = i;
						ver[k] = i;
						k++;
					}
				}
			}
		}
		label2->Text += "\nПуть из " + (Convert::ToInt32(start) + 1) + " в " + (Convert::ToInt32(endO) + 1) + " = " + nodes[endO] + "\n";
		for(int i = k - 1; i >= 0; i--){
			this->label2->Text += (Convert::ToInt32(ver[i])+1);
			if(i > 0) this->label2->Text += "->";
		}
		this->Invalidate();
	}
	Button^ tmpNode = nullptr;
	public: System::Void CreateEdge(System::Object^ sender, System::EventArgs^ e){
		if(tmpNode == nullptr){
			tmpNode = (Button^)sender;
		} else{
			Form2^ dialogForm = gcnew Form2;
			if(dialogForm->ShowDialog(this) == ::DialogResult::OK){
				try{
					graph[tmpNode->TabIndex][((Button^)sender)->TabIndex] = Convert::ToInt32(dialogForm->textBoxD->Text);
					graph[((Button^)sender)->TabIndex][tmpNode->TabIndex] = Convert::ToInt32(dialogForm->textBoxD->Text);
					/*graphP[tmpNode->TabIndex][((Button^)sender)->TabIndex] = Convert::ToInt32(dialogForm->textBoxP->Text);
					graphP[((Button^)sender)->TabIndex][tmpNode->TabIndex] = Convert::ToInt32(dialogForm->textBoxP->Text);*/
					int x1, x2, y1, y2;
					x1 = graphBtn[tmpNode->TabIndex]->Location.X + 10;
					x2 = graphBtn[((Button^)sender)->TabIndex]->Location.X + 10;
					y1 = graphBtn[tmpNode->TabIndex]->Location.Y + 10;
					y2 = graphBtn[((Button^)sender)->TabIndex]->Location.Y + 10;

					if(labels[((Button^)sender)->TabIndex, tmpNode->TabIndex] != nullptr){
						labels[((Button^)sender)->TabIndex, tmpNode->TabIndex]->Text = dialogForm->textBoxD->Text/* + ", " + dialogForm->textBoxP->Text*/;
					} else{
						Label^ label = gcnew Label();
						label->Text = dialogForm->textBoxD->Text/* + ", " + dialogForm->textBoxP->Text*/;

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
						label2->Text = "";
					}
				} catch(const System::FormatException^){
					label2->Text = "Ошибка, длина дороги должна быть целым числом";
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
		for(int i = 0; i < count; i++){
			for(int j = 0; j < count; j++){
				if((graph[i][j] != -1) && (i != j)){
					x1 = graphBtn[i]->Location.X + 10;
					x2 = graphBtn[j]->Location.X + 10;
					y1 = graphBtn[i]->Location.Y + 10;
					y2 = graphBtn[j]->Location.Y + 10;
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
	}
	};
}