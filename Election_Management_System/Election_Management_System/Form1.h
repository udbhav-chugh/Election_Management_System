#pragma once

#include "User_Control_Register.h"
#include "User_Control_Login.h"



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
	private: System::Windows::Forms::Panel^  pnl_output;

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
			this->btn_admin = (gcnew System::Windows::Forms::Button());
			this->btn_public_election = (gcnew System::Windows::Forms::Button());
			this->btn_register = (gcnew System::Windows::Forms::Button());
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->pnl_output = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btn_admin);
			this->panel1->Controls->Add(this->btn_public_election);
			this->panel1->Controls->Add(this->btn_register);
			this->panel1->Controls->Add(this->btn_login);
			this->panel1->Location = System::Drawing::Point(2, 95);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(178, 491);
			this->panel1->TabIndex = 0;
			// 
			// btn_admin
			// 
			this->btn_admin->Location = System::Drawing::Point(8, 372);
			this->btn_admin->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_admin->Name = L"btn_admin";
			this->btn_admin->Size = System::Drawing::Size(154, 52);
			this->btn_admin->TabIndex = 3;
			this->btn_admin->Text = L"Admin";
			this->btn_admin->UseVisualStyleBackColor = true;
			// 
			// btn_public_election
			// 
			this->btn_public_election->Location = System::Drawing::Point(2, 298);
			this->btn_public_election->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_public_election->Name = L"btn_public_election";
			this->btn_public_election->Size = System::Drawing::Size(172, 50);
			this->btn_public_election->TabIndex = 2;
			this->btn_public_election->Text = L"View Public Elections";
			this->btn_public_election->UseVisualStyleBackColor = true;
			// 
			// btn_register
			// 
			this->btn_register->Location = System::Drawing::Point(2, 243);
			this->btn_register->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_register->Name = L"btn_register";
			this->btn_register->Size = System::Drawing::Size(172, 50);
			this->btn_register->TabIndex = 1;
			this->btn_register->Text = L"Register";
			this->btn_register->UseVisualStyleBackColor = true;
			this->btn_register->Click += gcnew System::EventHandler(this, &Form1::btn_register_Click);
			// 
			// btn_login
			// 
			this->btn_login->Location = System::Drawing::Point(2, 167);
			this->btn_login->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(172, 61);
			this->btn_login->TabIndex = 0;
			this->btn_login->Text = L"Login";
			this->btn_login->UseVisualStyleBackColor = true;
			this->btn_login->Click += gcnew System::EventHandler(this, &Form1::btn_login_Click);
			// 
			// pnl_output
			// 
			this->pnl_output->Location = System::Drawing::Point(179, 95);
			this->pnl_output->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pnl_output->Name = L"pnl_output";
			this->pnl_output->Size = System::Drawing::Size(575, 491);
			this->pnl_output->TabIndex = 1;
			this->pnl_output->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pnl_output_Paint);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(754, 586);
			this->Controls->Add(this->pnl_output);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_register_Click(System::Object^  sender, System::EventArgs^  e) {
				pnl_output->Controls->Clear();
				pnl_output->Controls->Add(gcnew User_Control_Register);
			 }
private: System::Void pnl_output_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void btn_login_Click(System::Object^  sender, System::EventArgs^  e) {
			  pnl_output->Controls->Clear();
			  pnl_output->Controls->Add(gcnew User_Control_Login);
		 }
};
}

