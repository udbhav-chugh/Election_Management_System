#pragma once

#include "Form_Homepage.h"


#using <System.dll>
#using <System.data.dll>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;


namespace Election_Management_System {

	/// <summary>
	/// Summary for User_Control_Login
	/// </summary>
	public ref class User_Control_Login : public System::Windows::Forms::UserControl
	{
	public:
		User_Control_Login(void)
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
		~User_Control_Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_login;
	private: System::Windows::Forms::TextBox^  txt_username;

	private: System::Windows::Forms::TextBox^  txt_password;
	private: System::Windows::Forms::Label^  lbl_password;


	private: System::Windows::Forms::Label^  lbl_username;
	private: System::Windows::Forms::Button^  Forgot_Password;


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
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->txt_username = (gcnew System::Windows::Forms::TextBox());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->lbl_password = (gcnew System::Windows::Forms::Label());
			this->lbl_username = (gcnew System::Windows::Forms::Label());
			this->Forgot_Password = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_login
			// 
			this->btn_login->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_login->Location = System::Drawing::Point(222, 283);
			this->btn_login->Margin = System::Windows::Forms::Padding(2);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(162, 38);
			this->btn_login->TabIndex = 0;
			this->btn_login->Text = L"Login";
			this->btn_login->UseVisualStyleBackColor = true;
			this->btn_login->Click += gcnew System::EventHandler(this, &User_Control_Login::btn_login_Click);
			// 
			// txt_username
			// 
			this->txt_username->Location = System::Drawing::Point(255, 106);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(100, 20);
			this->txt_username->TabIndex = 1;
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(255, 170);
			this->txt_password->Name = L"txt_password";
			this->txt_password->PasswordChar = '*';
			this->txt_password->Size = System::Drawing::Size(100, 20);
			this->txt_password->TabIndex = 4;
			// 
			// lbl_password
			// 
			this->lbl_password->AutoSize = true;
			this->lbl_password->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_password->Location = System::Drawing::Point(135, 167);
			this->lbl_password->Name = L"lbl_password";
			this->lbl_password->Size = System::Drawing::Size(82, 21);
			this->lbl_password->TabIndex = 5;
			this->lbl_password->Text = L"Password";
			// 
			// lbl_username
			// 
			this->lbl_username->AutoSize = true;
			this->lbl_username->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_username->Location = System::Drawing::Point(133, 103);
			this->lbl_username->Name = L"lbl_username";
			this->lbl_username->Size = System::Drawing::Size(88, 21);
			this->lbl_username->TabIndex = 7;
			this->lbl_username->Text = L"Username";
			// 
			// Forgot_Password
			// 
			this->Forgot_Password->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Forgot_Password->Location = System::Drawing::Point(246, 234);
			this->Forgot_Password->Name = L"Forgot_Password";
			this->Forgot_Password->Size = System::Drawing::Size(124, 26);
			this->Forgot_Password->TabIndex = 8;
			this->Forgot_Password->Text = L"Forgot Password";
			this->Forgot_Password->UseVisualStyleBackColor = true;
			// 
			// User_Control_Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->Forgot_Password);
			this->Controls->Add(this->lbl_username);
			this->Controls->Add(this->lbl_password);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->txt_username);
			this->Controls->Add(this->btn_login);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"User_Control_Login";
			this->Size = System::Drawing::Size(575, 491);
			this->Load += gcnew System::EventHandler(this, &User_Control_Login::User_Control_Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void User_Control_Login_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btn_login_Click(System::Object^  sender, System::EventArgs^  e) {
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
				 String ^ username = txt_username->Text;
				 String ^ password = txt_password->Text;

				 DB_Connection->Open();
				 String ^ insertString = "SELECT Password FROM Student_Information WHERE UserName = '" + txt_username->Text + "' ";

				 OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if (reader->HasRows)
				 {
					 while (reader->Read() == true)
					 {
						 if (reader->GetString(0) != txt_password->Text)
						 {
							 MessageBox::Show("Invalid PW");
						 }
						 else
						 {
							 //Form1 ^ f3 = gcnew Form1(id);
							 //SomeGlobalVariables.curr_username = txt_password->Text;
							 // LOG IN SUCCESFULL
							 //MessageBox::Show(f3->id);
							 Form_Homepage ^ frm = gcnew Form_Homepage;
							 frm->Show();
						 }
					 }
				 }
				 else
				 {
					 MessageBox::Show("entry NOT found  in student DB");
				 }

				 reader->Close();
				 DB_Connection->Close();
			 }

	};
}
