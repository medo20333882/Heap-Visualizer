#pragma once
#include "Insert.h"
#include "Delete.h"
#include "Heap.h"
namespace DSProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Operations
	/// </summary>
	public ref class Operations : public System::Windows::Forms::Form
	{
	public:
		MinHeap * h2;
		Operations(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Operations(MinHeap *h)
		{
			InitializeComponent();
			h2 = h;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Operations()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Operations::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(192, 230);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 91);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Insert";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Operations::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gold;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(584, 230);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 91);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Operations::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Location = System::Drawing::Point(306, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(334, 46);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Select Operation";
			// 
			// Operations
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1017, 579);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->MaximumSize = System::Drawing::Size(1035, 626);
			this->MinimumSize = System::Drawing::Size(1035, 626);
			this->Name = L"Operations";
			this->Text = L"Operations";
			this->Load += gcnew System::EventHandler(this, &Operations::Operations_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Operations_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Insert^ in_frm = gcnew Insert(h2);
		this->Hide();
		in_frm->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Delete^ de_frm = gcnew Delete(h2);
		this->Hide();
		de_frm->Show();

	}
	};
}
