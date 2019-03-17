#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Election_Management_System {

	/// <summary>
	/// Summary for User_Control_Create_Election
	/// </summary>
	public ref class User_Control_Create_Election : public System::Windows::Forms::UserControl
	{
	public:
		User_Control_Create_Election(void)
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
		~User_Control_Create_Election()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txt_election_name;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;

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
			this->txt_election_name = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(85, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Election Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(85, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Voter\'s List";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(85, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Posts";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(85, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Election Status";
			// 
			// txt_election_name
			// 
			this->txt_election_name->Location = System::Drawing::Point(244, 42);
			this->txt_election_name->Name = L"txt_election_name";
			this->txt_election_name->Size = System::Drawing::Size(209, 22);
			this->txt_election_name->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(244, 89);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(209, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(244, 153);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(209, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(244, 228);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(209, 22);
			this->textBox4->TabIndex = 7;
			// 
			// User_Control_Create_Election
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->txt_election_name);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"User_Control_Create_Election";
			this->Size = System::Drawing::Size(767, 722);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
