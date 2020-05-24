#pragma once

#include "User_Control_Register.h"
#include "Form_Election.h"
#include "User_Control_Login.h"
#include "View_Public_Elections.h"
#include "Form_Admin.h"

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
	private: System::Windows::Forms::Button^  button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->btn_admin);
			this->panel1->Controls->Add(this->btn_public_election);
			this->panel1->Controls->Add(this->btn_register);
			this->panel1->Controls->Add(this->btn_login);
			this->panel1->Location = System::Drawing::Point(2, 117);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(237, 604);
			this->panel1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(71, 99);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// btn_admin
			// 
			this->btn_admin->Location = System::Drawing::Point(10, 458);
			this->btn_admin->Name = L"btn_admin";
			this->btn_admin->Size = System::Drawing::Size(206, 64);
			this->btn_admin->TabIndex = 3;
			this->btn_admin->Text = L"Admin";
			this->btn_admin->UseVisualStyleBackColor = true;
			this->btn_admin->Click += gcnew System::EventHandler(this, &Form1::btn_admin_Click);
			// 
			// btn_public_election
			// 
			this->btn_public_election->Location = System::Drawing::Point(3, 367);
			this->btn_public_election->Name = L"btn_public_election";
			this->btn_public_election->Size = System::Drawing::Size(230, 62);
			this->btn_public_election->TabIndex = 2;
			this->btn_public_election->Text = L"View Public Elections";
			this->btn_public_election->UseVisualStyleBackColor = true;
			this->btn_public_election->Click += gcnew System::EventHandler(this, &Form1::btn_public_election_Click_1);
			// 
			// btn_register
			// 
			this->btn_register->Location = System::Drawing::Point(3, 299);
			this->btn_register->Name = L"btn_register";
			this->btn_register->Size = System::Drawing::Size(230, 62);
			this->btn_register->TabIndex = 1;
			this->btn_register->Text = L"Register";
			this->btn_register->UseVisualStyleBackColor = true;
			this->btn_register->Click += gcnew System::EventHandler(this, &Form1::btn_register_Click);
			// 
			// btn_login
			// 
			this->btn_login->Location = System::Drawing::Point(3, 205);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(230, 75);
			this->btn_login->TabIndex = 0;
			this->btn_login->Text = L"Login";
			this->btn_login->UseVisualStyleBackColor = true;
			this->btn_login->Click += gcnew System::EventHandler(this, &Form1::btn_login_Click);
			// 
			// pnl_output
			// 
			this->pnl_output->Location = System::Drawing::Point(239, 117);
			this->pnl_output->Name = L"pnl_output";
			this->pnl_output->Size = System::Drawing::Size(767, 604);
			this->pnl_output->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1006, 721);
			this->Controls->Add(this->pnl_output);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
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
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btn_public_election_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form_Election^ frm = gcnew Form_Election();
			 frm->Show();
		 }

private: System::Void btn_public_election_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 pnl_output->Controls->Clear();
			 pnl_output->Controls->Add(gcnew View_Public_Elections);
		 }
private: System::Void btn_admin_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form_Admin ^ adminForm = gcnew Form_Admin();
			 adminForm->Show();
		 }
};
}

