#pragma once

namespace Election_Management_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Election
	/// </summary>
	public ref class Form_Election : public System::Windows::Forms::Form
	{
	public:
		Form_Election(void)
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
		~Form_Election()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  btn_go_back;
	private: System::Windows::Forms::Button^  btn_manage_election;
	private: System::Windows::Forms::Button^  btn_create_election;
	protected: 

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_create_election = (gcnew System::Windows::Forms::Button());
			this->btn_manage_election = (gcnew System::Windows::Forms::Button());
			this->btn_go_back = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btn_go_back);
			this->panel1->Controls->Add(this->btn_manage_election);
			this->panel1->Controls->Add(this->btn_create_election);
			this->panel1->Location = System::Drawing::Point(2, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(237, 722);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(239, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(767, 722);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form_Election::panel2_Paint);
			// 
			// btn_create_election
			// 
			this->btn_create_election->Location = System::Drawing::Point(11, 153);
			this->btn_create_election->Name = L"btn_create_election";
			this->btn_create_election->Size = System::Drawing::Size(141, 49);
			this->btn_create_election->TabIndex = 0;
			this->btn_create_election->Text = L"Create Election";
			this->btn_create_election->UseVisualStyleBackColor = true;
			// 
			// btn_manage_election
			// 
			this->btn_manage_election->Location = System::Drawing::Point(11, 222);
			this->btn_manage_election->Name = L"btn_manage_election";
			this->btn_manage_election->Size = System::Drawing::Size(141, 49);
			this->btn_manage_election->TabIndex = 1;
			this->btn_manage_election->Text = L"Manage Election";
			this->btn_manage_election->UseVisualStyleBackColor = true;
			// 
			// btn_go_back
			// 
			this->btn_go_back->Location = System::Drawing::Point(10, 386);
			this->btn_go_back->Name = L"btn_go_back";
			this->btn_go_back->Size = System::Drawing::Size(141, 49);
			this->btn_go_back->TabIndex = 2;
			this->btn_go_back->Text = L"Go Back";
			this->btn_go_back->UseVisualStyleBackColor = true;
			// 
			// Form_Election
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1006, 721);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Form_Election";
			this->Text = L"Form_Election";
			this->Load += gcnew System::EventHandler(this, &Form_Election::Form_Election_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form_Election_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}
