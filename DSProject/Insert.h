#pragma once
#include "Heap.h"
#include"Delete.h"

namespace DSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Insert
	/// </summary>
	public ref class Insert : public System::Windows::Forms::Form
	{

	public:
		MinHeap *h3;
		Insert(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	
		Insert(MinHeap *h2)
		{
			InitializeComponent();
			h3 = h2;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Insert()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label0;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label14;



	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;



	private: System::Windows::Forms::Label^ label9;



	private: System::Windows::Forms::Label^ label8;



	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label24;

	private: System::Windows::Forms::Label^ label23;


	private: System::Windows::Forms::Label^ label26;

	private: System::Windows::Forms::Label^ label25;


	private: System::Windows::Forms::Label^ label28;

	private: System::Windows::Forms::Label^ label27;


	private: System::Windows::Forms::Label^ label30;

	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Insert::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label0 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(756, 503);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 63);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Visualize";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Insert::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gold;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(594, 503);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 63);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Insert";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Insert::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Gold;
			this->textBox1->Location = System::Drawing::Point(391, 522);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(167, 30);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Insert::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Insert::textBox1_KeyPress);
			// 
			// label0
			// 
			this->label0->AutoSize = true;
			this->label0->BackColor = System::Drawing::Color::Transparent;
			this->label0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label0->ForeColor = System::Drawing::Color::PaleGreen;
			this->label0->Location = System::Drawing::Point(489, 67);
			this->label0->Name = L"label0";
			this->label0->Size = System::Drawing::Size(0, 29);
			this->label0->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::PaleGreen;
			this->label1->Location = System::Drawing::Point(248, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 29);
			this->label1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::PaleGreen;
			this->label2->Location = System::Drawing::Point(710, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 29);
			this->label2->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::PaleGreen;
			this->label6->Location = System::Drawing::Point(821, 220);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 29);
			this->label6->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::PaleGreen;
			this->label5->Location = System::Drawing::Point(614, 220);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 29);
			this->label5->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::PaleGreen;
			this->label4->Location = System::Drawing::Point(373, 220);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 29);
			this->label4->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::PaleGreen;
			this->label3->Location = System::Drawing::Point(138, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 29);
			this->label3->TabIndex = 10;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::PaleGreen;
			this->label14->Location = System::Drawing::Point(887, 305);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 29);
			this->label14->TabIndex = 11;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::PaleGreen;
			this->label13->Location = System::Drawing::Point(776, 305);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 29);
			this->label13->TabIndex = 12;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::PaleGreen;
			this->label12->Location = System::Drawing::Point(677, 305);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 29);
			this->label12->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::PaleGreen;
			this->label11->Location = System::Drawing::Point(549, 305);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 29);
			this->label11->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::PaleGreen;
			this->label7->Location = System::Drawing::Point(70, 305);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 29);
			this->label7->TabIndex = 15;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::PaleGreen;
			this->label10->Location = System::Drawing::Point(434, 305);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 29);
			this->label10->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::PaleGreen;
			this->label9->Location = System::Drawing::Point(322, 305);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 29);
			this->label9->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::PaleGreen;
			this->label8->Location = System::Drawing::Point(194, 305);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 29);
			this->label8->TabIndex = 18;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::PaleGreen;
			this->label15->Location = System::Drawing::Point(24, 392);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 29);
			this->label15->TabIndex = 19;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::PaleGreen;
			this->label16->Location = System::Drawing::Point(93, 392);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 29);
			this->label16->TabIndex = 20;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::PaleGreen;
			this->label17->Location = System::Drawing::Point(164, 392);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 29);
			this->label17->TabIndex = 21;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::PaleGreen;
			this->label18->Location = System::Drawing::Point(227, 392);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 29);
			this->label18->TabIndex = 22;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::PaleGreen;
			this->label19->Location = System::Drawing::Point(288, 392);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 29);
			this->label19->TabIndex = 23;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::PaleGreen;
			this->label20->Location = System::Drawing::Point(353, 392);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 29);
			this->label20->TabIndex = 24;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::PaleGreen;
			this->label21->Location = System::Drawing::Point(412, 392);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 29);
			this->label21->TabIndex = 25;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::PaleGreen;
			this->label22->Location = System::Drawing::Point(464, 392);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(0, 29);
			this->label22->TabIndex = 26;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::PaleGreen;
			this->label24->Location = System::Drawing::Point(589, 392);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(0, 29);
			this->label24->TabIndex = 27;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::PaleGreen;
			this->label23->Location = System::Drawing::Point(531, 392);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 29);
			this->label23->TabIndex = 28;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::PaleGreen;
			this->label26->Location = System::Drawing::Point(703, 392);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 29);
			this->label26->TabIndex = 29;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::PaleGreen;
			this->label25->Location = System::Drawing::Point(645, 392);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 29);
			this->label25->TabIndex = 30;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::PaleGreen;
			this->label28->Location = System::Drawing::Point(814, 392);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(0, 29);
			this->label28->TabIndex = 31;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::PaleGreen;
			this->label27->Location = System::Drawing::Point(757, 392);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(0, 29);
			this->label27->TabIndex = 32;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::PaleGreen;
			this->label30->Location = System::Drawing::Point(923, 392);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(0, 29);
			this->label30->TabIndex = 33;
			this->label30->Click += gcnew System::EventHandler(this, &Insert::label30_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::PaleGreen;
			this->label29->Location = System::Drawing::Point(861, 392);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(0, 29);
			this->label29->TabIndex = 34;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(913, 503);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 62);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Insert::button1_Click);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::Red;
			this->label31->Location = System::Drawing::Point(288, 462);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(0, 29);
			this->label31->TabIndex = 36;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::Gold;
			this->label32->Location = System::Drawing::Point(12, 522);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(339, 25);
			this->label32->TabIndex = 37;
			this->label32->Text = L"Enter the value you want to insert:";
			// 
			// Insert
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1017, 579);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label0);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->MaximumSize = System::Drawing::Size(1035, 626);
			this->MinimumSize = System::Drawing::Size(1035, 626);
			this->Name = L"Insert";
			this->Text = L"Insert";
			this->Load += gcnew System::EventHandler(this, &Insert::Insert_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Insert_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		insert();
	}
	


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Delete^ de_frm = gcnew Delete(h3);
	this->Hide();
	de_frm->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	int static count=0;
	for(int i=0;i<h3->heap_size;i++){
		count = i;
		if (count < h3->heap_size) {
			switch (count)
			{
			case 0:
				label0->Text = System::Convert::ToString(h3->harr[0]);
				count++;
				break;
			case 1:
				label1->Text = System::Convert::ToString(h3->harr[1]);
				count++;
				break;
			case 2:
				label2->Text = System::Convert::ToString(h3->harr[2]);
				count++;
				break;
			case 3:
				label3->Text = System::Convert::ToString(h3->harr[3]);
				count++;
				break;
			case 4:
				label4->Text = System::Convert::ToString(h3->harr[4]);
				count++;
				break;
			case 5:
				label5->Text = System::Convert::ToString(h3->harr[5]);
				count++;
				break;
			case 6:
				label6->Text = System::Convert::ToString(h3->harr[6]);
				count++;
				break;
			case 7:
				label7->Text = System::Convert::ToString(h3->harr[7]);
				count++;
				break;
			case 8:
				label8->Text = System::Convert::ToString(h3->harr[8]);
				count++;
				break;
			case 9:
				label9->Text = System::Convert::ToString(h3->harr[9]);
				count++;
				break;
			case 10:
				label10->Text = System::Convert::ToString(h3->harr[10]);
				count++;
				break;
			case 11:
				label11->Text = System::Convert::ToString(h3->harr[11]);
				count++;
				break;
			case 12:
				label12->Text = System::Convert::ToString(h3->harr[12]);
				count++;
				break;
			case 13:
				label13->Text = System::Convert::ToString(h3->harr[13]);
				count++;
				break;
			case 14:
				label14->Text = System::Convert::ToString(h3->harr[14]);
				count++;
				break;
			case 15:
				label15->Text = System::Convert::ToString(h3->harr[15]);
				count++;
				break;
			case 16:
				label16->Text = System::Convert::ToString(h3->harr[16]);
				count++;
				break;
			case 17:
				label17->Text = System::Convert::ToString(h3->harr[17]);
				count++;
				break;
			case 18:
				label18->Text = System::Convert::ToString(h3->harr[18]);
				count++;
				break;
			case 19:
				label19->Text = System::Convert::ToString(h3->harr[19]);
				count++;
				break;
			case 20:
				label20->Text = System::Convert::ToString(h3->harr[20]);
				count++;
				break;
			case 21:
				label21->Text = System::Convert::ToString(h3->harr[21]);
				count++;
				break;
			case 22:
				label22->Text = System::Convert::ToString(h3->harr[22]);
				count++;
				break;
			case 23:
				label23->Text = System::Convert::ToString(h3->harr[23]);
				count++;
				break;
			case 24:
				label24->Text = System::Convert::ToString(h3->harr[24]);
				count++;
				break;
			case 25:
				label25->Text = System::Convert::ToString(h3->harr[25]);
				count++;
				break;
			case 26:
				label26->Text = System::Convert::ToString(h3->harr[26]);
				count++;
				break;
			case 27:
				label27->Text = System::Convert::ToString(h3->harr[27]);
				count++;
				break;
			case 28:
				label28->Text = System::Convert::ToString(h3->harr[28]);
				count++;
				break;
			case 29:
				label29->Text = System::Convert::ToString(h3->harr[29]);
				count++;
				break;
			case 30:
				label30->Text = System::Convert::ToString(h3->harr[30]);
				count++;
				break;
			}
		}
	
}
}

private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == 13) {
		insert();
	}
}
private: System::Void insert() {
	if (h3->heap_size == h3->capacity)
	{
		label31->Text = "You have reached the heap capacity";
		return;
	}
	static int count = 0;
	if (textBox1->Text != "") {


		switch (count)
		{
		case 0:
			label0->Text = textBox1->Text;
			count++;
			h3->insert(System::Convert::ToInt64(textBox1->Text));
			textBox1->Text = "";
			break;
		case 1:
			label1->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label1->Text));
			break;
		case 2:
			label2->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label2->Text));
			break;
		case 3:
			label3->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label3->Text));
			break;
		case 4:
			label4->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label4->Text));
			break;
		case 5:
			label5->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label5->Text));
			break;
		case 6:
			label6->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label6->Text));
			break;
		case 7:
			label7->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label7->Text));
			break;
		case 8:
			label8->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label8->Text));
			break;

		case 9:
			label9->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label9->Text));
			break;
		case 10:
			label10->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label10->Text));
			break;
		case 11:
			label11->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label11->Text));
			break;
		case 12:
			label12->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label12->Text));
			break;
		case 13:
			label13->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label13->Text));
			break;
		case 14:
			label14->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label14->Text));
			break;
		case 15:
			label15->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label15->Text));
			break;
		case 16:
			label16->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label16->Text));
			break;
		case 17:
			label17->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label17->Text));
			break;
		case 18:
			label18->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label18->Text));
			break;
		case 19:
			label19->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label19->Text));
			break;
		case 20:
			label20->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label20->Text));
			break;
		case 21:
			label21->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label21->Text));
			break;
		case 22:
			label22->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label22->Text));
			break;
		case 23:
			label23->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label23->Text));
			break;
		case 24:
			label24->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label24->Text));
			break;
		case 25:
			label25->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label25->Text));
			break;
		case 26:
			label26->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label26->Text));
			break;
		case 27:
			label27->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label27->Text));
			break;
		case 28:
			label28->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label28->Text));
			break;
		case 29:
			label29->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label29->Text));
			break;
		case 30:
			label30->Text = textBox1->Text;
			count++;
			textBox1->Text = "";
			h3->insert(System::Convert::ToInt64(label30->Text));
			break;
		}
	}
}
private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
