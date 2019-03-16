#pragma once

namespace Election_Management_System {

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
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btn_public_election;
	private: System::Windows::Forms::Button^  btn_register;
	private: System::Windows::Forms::Button^  btn_login;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  btn_admin;
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
			this->btn_public_election = (gcnew System::Windows::Forms::Button());
			this->btn_register = (gcnew System::Windows::Forms::Button());
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_admin = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btn_admin);
			this->panel1->Controls->Add(this->btn_public_election);
			this->panel1->Controls->Add(this->btn_register);
			this->panel1->Controls->Add(this->btn_login);
			this->panel1->Location = System::Drawing::Point(2, 117);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(237, 604);
			this->panel1->TabIndex = 0;
			// 
			// btn_public_election
			// 
			this->btn_public_election->Location = System::Drawing::Point(3, 367);
			this->btn_public_election->Name = L"btn_public_election";
			this->btn_public_election->Size = System::Drawing::Size(230, 62);
			this->btn_public_election->TabIndex = 2;
			this->btn_public_election->Text = L"View Public Elections";
			this->btn_public_election->UseVisualStyleBackColor = true;
			// 
			// btn_register
			// 
			this->btn_register->Location = System::Drawing::Point(3, 299);
			this->btn_register->Name = L"btn_register";
			this->btn_register->Size = System::Drawing::Size(230, 62);
			this->btn_register->TabIndex = 1;
			this->btn_register->Text = L"Register";
			this->btn_register->UseVisualStyleBackColor = true;
			// 
			// btn_login
			// 
			this->btn_login->Location = System::Drawing::Point(3, 205);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(230, 75);
			this->btn_login->TabIndex = 0;
			this->btn_login->Text = L"Login";
			this->btn_login->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(239, 117);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(767, 604);
			this->panel2->TabIndex = 1;
			// 
			// btn_admin
			// 
			this->btn_admin->Location = System::Drawing::Point(10, 458);
			this->btn_admin->Name = L"btn_admin";
			this->btn_admin->Size = System::Drawing::Size(206, 64);
			this->btn_admin->TabIndex = 3;
			this->btn_admin->Text = L"Admin";
			this->btn_admin->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1006, 721);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

