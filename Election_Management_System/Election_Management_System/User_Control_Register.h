#pragma once

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
	/// Summary for User_Control_Register
	/// </summary>
	public ref class User_Control_Register : public System::Windows::Forms::UserControl
	{
	public:
		User_Control_Register(void)
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
		~User_Control_Register()
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
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  txt_username;
	private: System::Windows::Forms::TextBox^  txt_password;
	private: System::Windows::Forms::TextBox^  txt_department;
	private: System::Windows::Forms::TextBox^  txt_hostel;
	private: System::Windows::Forms::TextBox^  txt_program;
	private: System::Windows::Forms::TextBox^  txt_club;
	private: System::Windows::Forms::TextBox^  txt_year_of_join;
	private: System::Windows::Forms::TextBox^  txt_full_name;
	private: System::Windows::Forms::Button^  btn_submit;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_username = (gcnew System::Windows::Forms::TextBox());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->txt_department = (gcnew System::Windows::Forms::TextBox());
			this->txt_hostel = (gcnew System::Windows::Forms::TextBox());
			this->txt_program = (gcnew System::Windows::Forms::TextBox());
			this->txt_club = (gcnew System::Windows::Forms::TextBox());
			this->txt_year_of_join = (gcnew System::Windows::Forms::TextBox());
			this->txt_full_name = (gcnew System::Windows::Forms::TextBox());
			this->btn_submit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(118, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(118, 156);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(118, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(118, 261);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(118, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(118, 342);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(118, 388);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(118, 435);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"label8";
			// 
			// txt_username
			// 
			this->txt_username->Location = System::Drawing::Point(216, 109);
			this->txt_username->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(300, 26);
			this->txt_username->TabIndex = 8;
			this->txt_username->Text = L"My name";
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(216, 156);
			this->txt_password->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(300, 26);
			this->txt_password->TabIndex = 9;
			// 
			// txt_department
			// 
			this->txt_department->Location = System::Drawing::Point(216, 210);
			this->txt_department->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txt_department->Name = L"txt_department";
			this->txt_department->Size = System::Drawing::Size(300, 26);
			this->txt_department->TabIndex = 10;
			// 
			// txt_hostel
			// 
			this->txt_hostel->Location = System::Drawing::Point(216, 261);
			this->txt_hostel->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txt_hostel->Name = L"txt_hostel";
			this->txt_hostel->Size = System::Drawing::Size(300, 26);
			this->txt_hostel->TabIndex = 11;
			// 
			// txt_program
			// 
			this->txt_program->Location = System::Drawing::Point(216, 296);
			this->txt_program->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txt_program->Name = L"txt_program";
			this->txt_program->Size = System::Drawing::Size(300, 26);
			this->txt_program->TabIndex = 12;
			// 
			// txt_club
			// 
			this->txt_club->Location = System::Drawing::Point(216, 342);
			this->txt_club->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txt_club->Name = L"txt_club";
			this->txt_club->Size = System::Drawing::Size(300, 26);
			this->txt_club->TabIndex = 13;
			// 
			// txt_year_of_join
			// 
			this->txt_year_of_join->Location = System::Drawing::Point(216, 389);
			this->txt_year_of_join->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txt_year_of_join->Name = L"txt_year_of_join";
			this->txt_year_of_join->Size = System::Drawing::Size(300, 26);
			this->txt_year_of_join->TabIndex = 14;
			// 
			// txt_full_name
			// 
			this->txt_full_name->Location = System::Drawing::Point(216, 429);
			this->txt_full_name->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txt_full_name->Name = L"txt_full_name";
			this->txt_full_name->Size = System::Drawing::Size(300, 26);
			this->txt_full_name->TabIndex = 15;
			// 
			// btn_submit
			// 
			this->btn_submit->Location = System::Drawing::Point(332, 516);
			this->btn_submit->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_submit->Name = L"btn_submit";
			this->btn_submit->Size = System::Drawing::Size(132, 59);
			this->btn_submit->TabIndex = 16;
			this->btn_submit->Text = L"Submit";
			this->btn_submit->UseVisualStyleBackColor = true;
			this->btn_submit->Click += gcnew System::EventHandler(this, &User_Control_Register::btn_submit_Click);
			// 
			// User_Control_Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btn_submit);
			this->Controls->Add(this->txt_full_name);
			this->Controls->Add(this->txt_year_of_join);
			this->Controls->Add(this->txt_club);
			this->Controls->Add(this->txt_program);
			this->Controls->Add(this->txt_hostel);
			this->Controls->Add(this->txt_department);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->txt_username);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"User_Control_Register";
			this->Size = System::Drawing::Size(863, 755);
			this->Load += gcnew System::EventHandler(this, &User_Control_Register::User_Control_Register_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void User_Control_Register_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void btn_submit_Click(System::Object^  sender, System::EventArgs^  e) {
			OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";

			String ^ username = txt_username->Text;
			String ^ password = txt_password->Text;
			String ^ department = txt_department->Text;
			String ^ hostel = txt_hostel->Text;
			String ^ program = txt_program->Text;
			String ^ club = txt_club->Text;
			String ^ year_of_join = txt_year_of_join->Text;
			String ^ full_name = txt_full_name->Text;
		
			DB_Connection->Open();
			String ^ insertString = "INSERT INTO Student_Information ([Username],[Password],[Department],[Hostel_Information],[Program],[Club_Information],[Year_Of_joining],[Full_Name]) VALUES('" + username + "', '" + password + "', '" + department + "','" + hostel + "','" + program + "','" + club + "', " + year_of_join + ", '" + full_name + "' )";
			
			OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
			OleDbDataReader ^ reader = cmd->ExecuteReader();
		 }
};
}
