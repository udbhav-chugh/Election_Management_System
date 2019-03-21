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




	private: System::Windows::Forms::TextBox^  txt_year_of_join;
	private: System::Windows::Forms::TextBox^  txt_full_name;
	private: System::Windows::Forms::Button^  btn_submit;
	private: System::Windows::Forms::ComboBox^  combo_hostel;
	private: System::Windows::Forms::ComboBox^  combo_program;
	private: System::Windows::Forms::ComboBox^  combo_club;
	private: System::Windows::Forms::ComboBox^  combo_department;
	private: System::Windows::Forms::ComboBox^  combo_add_club;
	private: System::Windows::Forms::Button^  btn_club_add;
	private: System::Windows::Forms::Button^  btn_club_delete;

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
			this->txt_year_of_join = (gcnew System::Windows::Forms::TextBox());
			this->txt_full_name = (gcnew System::Windows::Forms::TextBox());
			this->btn_submit = (gcnew System::Windows::Forms::Button());
			this->combo_hostel = (gcnew System::Windows::Forms::ComboBox());
			this->combo_program = (gcnew System::Windows::Forms::ComboBox());
			this->combo_club = (gcnew System::Windows::Forms::ComboBox());
			this->combo_department = (gcnew System::Windows::Forms::ComboBox());
			this->combo_add_club = (gcnew System::Windows::Forms::ComboBox());
			this->btn_club_add = (gcnew System::Windows::Forms::Button());
			this->btn_club_delete = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(90, 41);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"UserName";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(90, 75);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(89, 111);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 21);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Department";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(45, 143);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 21);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Hostel Information";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(104, 170);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 21);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Program";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(45, 208);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 21);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Club Information";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(67, 293);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 21);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Year of joining";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(94, 338);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(86, 21);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Full Name";
			this->label8->Click += gcnew System::EventHandler(this, &User_Control_Register::label8_Click);
			// 
			// txt_username
			// 
			this->txt_username->Location = System::Drawing::Point(206, 44);
			this->txt_username->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(201, 20);
			this->txt_username->TabIndex = 8;
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(206, 75);
			this->txt_password->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(201, 20);
			this->txt_password->TabIndex = 9;
			// 
			// txt_year_of_join
			// 
			this->txt_year_of_join->Location = System::Drawing::Point(206, 296);
			this->txt_year_of_join->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_year_of_join->Name = L"txt_year_of_join";
			this->txt_year_of_join->Size = System::Drawing::Size(201, 20);
			this->txt_year_of_join->TabIndex = 14;
			// 
			// txt_full_name
			// 
			this->txt_full_name->Location = System::Drawing::Point(206, 341);
			this->txt_full_name->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txt_full_name->Name = L"txt_full_name";
			this->txt_full_name->Size = System::Drawing::Size(201, 20);
			this->txt_full_name->TabIndex = 15;
			// 
			// btn_submit
			// 
			this->btn_submit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_submit->Location = System::Drawing::Point(255, 379);
			this->btn_submit->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_submit->Name = L"btn_submit";
			this->btn_submit->Size = System::Drawing::Size(88, 38);
			this->btn_submit->TabIndex = 16;
			this->btn_submit->Text = L"Submit";
			this->btn_submit->UseVisualStyleBackColor = true;
			this->btn_submit->Click += gcnew System::EventHandler(this, &User_Control_Register::btn_submit_Click);
			// 
			// combo_hostel
			// 
			this->combo_hostel->FormattingEnabled = true;
			this->combo_hostel->Location = System::Drawing::Point(206, 146);
			this->combo_hostel->Name = L"combo_hostel";
			this->combo_hostel->Size = System::Drawing::Size(121, 21);
			this->combo_hostel->TabIndex = 17;
			// 
			// combo_program
			// 
			this->combo_program->FormattingEnabled = true;
			this->combo_program->Location = System::Drawing::Point(206, 173);
			this->combo_program->Name = L"combo_program";
			this->combo_program->Size = System::Drawing::Size(121, 21);
			this->combo_program->TabIndex = 18;
			// 
			// combo_club
			// 
			this->combo_club->FormattingEnabled = true;
			this->combo_club->Location = System::Drawing::Point(206, 208);
			this->combo_club->Name = L"combo_club";
			this->combo_club->Size = System::Drawing::Size(121, 21);
			this->combo_club->TabIndex = 19;
			// 
			// combo_department
			// 
			this->combo_department->FormattingEnabled = true;
			this->combo_department->Location = System::Drawing::Point(206, 111);
			this->combo_department->Name = L"combo_department";
			this->combo_department->Size = System::Drawing::Size(121, 21);
			this->combo_department->TabIndex = 20;
			// 
			// combo_add_club
			// 
			this->combo_add_club->FormattingEnabled = true;
			this->combo_add_club->Location = System::Drawing::Point(357, 210);
			this->combo_add_club->Name = L"combo_add_club";
			this->combo_add_club->Size = System::Drawing::Size(121, 21);
			this->combo_add_club->TabIndex = 21;
			// 
			// btn_club_add
			// 
			this->btn_club_add->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_club_add->Location = System::Drawing::Point(378, 237);
			this->btn_club_add->Name = L"btn_club_add";
			this->btn_club_add->Size = System::Drawing::Size(75, 37);
			this->btn_club_add->TabIndex = 22;
			this->btn_club_add->Text = L"Add";
			this->btn_club_add->UseVisualStyleBackColor = true;
			this->btn_club_add->Click += gcnew System::EventHandler(this, &User_Control_Register::btn_club_add_Click);
			// 
			// btn_club_delete
			// 
			this->btn_club_delete->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_club_delete->Location = System::Drawing::Point(225, 237);
			this->btn_club_delete->Name = L"btn_club_delete";
			this->btn_club_delete->Size = System::Drawing::Size(80, 37);
			this->btn_club_delete->TabIndex = 23;
			this->btn_club_delete->Text = L"Delete";
			this->btn_club_delete->UseVisualStyleBackColor = true;
			this->btn_club_delete->Click += gcnew System::EventHandler(this, &User_Control_Register::btn_club_delete_Click);
			// 
			// User_Control_Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btn_club_delete);
			this->Controls->Add(this->btn_club_add);
			this->Controls->Add(this->combo_add_club);
			this->Controls->Add(this->combo_department);
			this->Controls->Add(this->combo_club);
			this->Controls->Add(this->combo_program);
			this->Controls->Add(this->combo_hostel);
			this->Controls->Add(this->btn_submit);
			this->Controls->Add(this->txt_full_name);
			this->Controls->Add(this->txt_year_of_join);
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
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"User_Control_Register";
			this->Size = System::Drawing::Size(575, 491);
			this->Load += gcnew System::EventHandler(this, &User_Control_Register::User_Control_Register_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void User_Control_Register_Load(System::Object^  sender, System::EventArgs^  e) {
				 combo_add_club->Items->Add("Octaves");
				 combo_add_club->Items->Add("Cadence");
				 combo_add_club->Items->Add("Robotics");
				 combo_add_club->Items->Add("Aeromodelling");
				 combo_add_club->Items->Add("Anchrenza & Radio G");
				 combo_add_club->Items->Add("Lumeire");
				 combo_add_club->Items->Add("Equinox");
				 combo_add_club->Items->Add("Coding club");
				 combo_add_club->Items->Add("Rubikson");
				 combo_department->Items->Add("CSE");
				 combo_department->Items->Add("CST");
				 combo_department->Items->Add("MNC");
				 combo_department->Items->Add("Civil");
				 combo_department->Items->Add("Mechanical");
				 combo_department->Items->Add("EP");
				 combo_department->Items->Add("Biotech");
				 combo_department->Items->Add("Design");
				 combo_department->Items->Add("ECE");
				 combo_department->Items->Add("EEE");
				 combo_department->Items->Add("Chemical");
				 combo_hostel->Items->Add("Dihing");
				 combo_hostel->Items->Add("Dibang");
				 combo_hostel->Items->Add("Kapili");
				 combo_hostel->Items->Add("Siang");
				 combo_hostel->Items->Add("Barak");
				 combo_hostel->Items->Add("Kameng");
				 combo_hostel->Items->Add("Umiam");
				 combo_hostel->Items->Add("Manas");
				 combo_hostel->Items->Add("Brahmaputra");
				 combo_hostel->Items->Add("Subansari");
				 combo_hostel->Items->Add("Dhansari");
				 combo_hostel->Items->Add("Married Scholar");
				 combo_hostel->Items->Add("Lohit");
				 combo_program->Items->Add("B.Tech.");
				 combo_program->Items->Add("M.Tech.");
				 combo_program->Items->Add("B.Des.");
				 combo_program->Items->Add("Phd");
			 }
	private: System::Void btn_submit_Click(System::Object^  sender, System::EventArgs^  e) {
				 int flag = 0;
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
				 String ^ username = txt_username->Text;

				 DB_Connection->Open();
				 String ^ insertString = "SELECT Password FROM Student_Information WHERE UserName = '" + txt_username->Text + "' ";

				 OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if (reader->HasRows)
				 {
					 MessageBox::Show("Username already exist");
				 }
				 else
				 {
					 flag++;
				 }

				 reader->Close();
				 DB_Connection->Close();
				 if(flag > 0){
					 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
					 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";

					 String ^ username = txt_username->Text;
					 String ^ password = txt_password->Text;
					 String ^ year_of_join = txt_year_of_join->Text;
					 String ^ full_name = txt_full_name->Text;
					 String ^ Approved = "NO";
					 String ^ department = combo_department->Text;
					 String ^ hostel = combo_hostel->Text;
					 String ^ program = combo_program->Text;
					 String ^ club = ",";

					 for(int i = 0; i < combo_club->Items->Count; i++){
						 club = club  + combo_club->Items[i]->ToString();
						 club = club +  ",";
					 }

					 DB_Connection->Open();
					 String ^ insertString = "INSERT INTO Student_Information ([Username],[Password],[Department],[Hostel_Information],[Program],[Club_Information],[Year_Of_joining],[Full_Name],[Approved]) VALUES('" + username + "', '" + password + "', '" + department + "','" + hostel + "','" + program + "','" + club + "', " + year_of_join + ", '" + full_name + "','" + Approved + "')";

					 OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
					 OleDbDataReader ^ reader = cmd->ExecuteReader();
					 reader->Close();
					 DB_Connection->Close();

				 }
			 }
	private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btn_club_add_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(combo_club->Items->Contains(combo_add_club->Text) == false){
					 combo_club->Items->Add(combo_add_club->Text);
				 }else{
					 MessageBox::Show("Already Added");
				 }
			 }
	private: System::Void btn_club_delete_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(combo_club->Items->Contains(combo_add_club->Text) == true){
					 combo_club->Items->Remove(combo_club->Text);
				 }else{
					 MessageBox::Show("No such entry");
				 }
			 }







	};
}
