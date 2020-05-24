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
	/// Summary for User_Control_Manage_Election
	/// </summary>
	public ref class User_Control_Manage_Election : public System::Windows::Forms::UserControl
	{
	public:
		User_Control_Manage_Election(void)
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
		~User_Control_Manage_Election()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label13;
	protected: 
	private: System::Windows::Forms::TextBox^  txt_organiser;
	private: System::Windows::Forms::Button^  btn_delete_organiser;
	private: System::Windows::Forms::Button^  btn_organiser;
	private: System::Windows::Forms::CheckedListBox^  lb_organiser;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  btn_delete_voter;
	private: System::Windows::Forms::Button^  btn_single_voter;
	private: System::Windows::Forms::TextBox^  txt_single_voter;
	private: System::Windows::Forms::CheckedListBox^  lb_voter;
	private: System::Windows::Forms::Button^  button1;
	internal: System::Windows::Forms::Label^  label9;
	private: 
	internal: System::Windows::Forms::ComboBox^  hostel;
	internal: System::Windows::Forms::Label^  label8;
	internal: System::Windows::Forms::ComboBox^  program;
	internal: System::Windows::Forms::Label^  label7;
	internal: System::Windows::Forms::Label^  label5;
	internal: System::Windows::Forms::Label^  label6;
	internal: System::Windows::Forms::ComboBox^  club_info;
	internal: System::Windows::Forms::ComboBox^  Dept;
	private: System::Windows::Forms::TextBox^  year_of_join;
	internal: 
	private: System::Windows::Forms::TextBox^  txt_election_name;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

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
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txt_organiser = (gcnew System::Windows::Forms::TextBox());
			this->btn_delete_organiser = (gcnew System::Windows::Forms::Button());
			this->btn_organiser = (gcnew System::Windows::Forms::Button());
			this->lb_organiser = (gcnew System::Windows::Forms::CheckedListBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->btn_delete_voter = (gcnew System::Windows::Forms::Button());
			this->btn_single_voter = (gcnew System::Windows::Forms::Button());
			this->txt_single_voter = (gcnew System::Windows::Forms::TextBox());
			this->lb_voter = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->hostel = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->program = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->club_info = (gcnew System::Windows::Forms::ComboBox());
			this->Dept = (gcnew System::Windows::Forms::ComboBox());
			this->year_of_join = (gcnew System::Windows::Forms::TextBox());
			this->txt_election_name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(54, 282);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(42, 17);
			this->label13->TabIndex = 80;
			this->label13->Text = L"Voter";
			// 
			// txt_organiser
			// 
			this->txt_organiser->Location = System::Drawing::Point(595, 383);
			this->txt_organiser->Name = L"txt_organiser";
			this->txt_organiser->Size = System::Drawing::Size(100, 22);
			this->txt_organiser->TabIndex = 79;
			// 
			// btn_delete_organiser
			// 
			this->btn_delete_organiser->Location = System::Drawing::Point(580, 411);
			this->btn_delete_organiser->Name = L"btn_delete_organiser";
			this->btn_delete_organiser->Size = System::Drawing::Size(174, 23);
			this->btn_delete_organiser->TabIndex = 78;
			this->btn_delete_organiser->Text = L"Delete selected voter";
			this->btn_delete_organiser->UseVisualStyleBackColor = true;
			// 
			// btn_organiser
			// 
			this->btn_organiser->Location = System::Drawing::Point(719, 382);
			this->btn_organiser->Name = L"btn_organiser";
			this->btn_organiser->Size = System::Drawing::Size(75, 23);
			this->btn_organiser->TabIndex = 77;
			this->btn_organiser->Text = L"Add Voter";
			this->btn_organiser->UseVisualStyleBackColor = true;
			// 
			// lb_organiser
			// 
			this->lb_organiser->FormattingEnabled = true;
			this->lb_organiser->Location = System::Drawing::Point(173, 383);
			this->lb_organiser->Name = L"lb_organiser";
			this->lb_organiser->Size = System::Drawing::Size(392, 55);
			this->lb_organiser->TabIndex = 76;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(28, 383);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(78, 17);
			this->label12->TabIndex = 75;
			this->label12->Text = L"Organisers";
			// 
			// btn_delete_voter
			// 
			this->btn_delete_voter->Location = System::Drawing::Point(571, 306);
			this->btn_delete_voter->Name = L"btn_delete_voter";
			this->btn_delete_voter->Size = System::Drawing::Size(174, 23);
			this->btn_delete_voter->TabIndex = 74;
			this->btn_delete_voter->Text = L"Delete selected voter";
			this->btn_delete_voter->UseVisualStyleBackColor = true;
			// 
			// btn_single_voter
			// 
			this->btn_single_voter->Location = System::Drawing::Point(710, 277);
			this->btn_single_voter->Name = L"btn_single_voter";
			this->btn_single_voter->Size = System::Drawing::Size(75, 23);
			this->btn_single_voter->TabIndex = 73;
			this->btn_single_voter->Text = L"Add Voter";
			this->btn_single_voter->UseVisualStyleBackColor = true;
			// 
			// txt_single_voter
			// 
			this->txt_single_voter->Location = System::Drawing::Point(571, 278);
			this->txt_single_voter->Name = L"txt_single_voter";
			this->txt_single_voter->Size = System::Drawing::Size(115, 22);
			this->txt_single_voter->TabIndex = 72;
			// 
			// lb_voter
			// 
			this->lb_voter->FormattingEnabled = true;
			this->lb_voter->Location = System::Drawing::Point(173, 278);
			this->lb_voter->Name = L"lb_voter";
			this->lb_voter->Size = System::Drawing::Size(392, 72);
			this->lb_voter->TabIndex = 71;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(312, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 23);
			this->button1->TabIndex = 70;
			this->button1->Text = L"Add Voters";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(379, 212);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(116, 22);
			this->label9->TabIndex = 69;
			this->label9->Text = L"Year of Join";
			// 
			// hostel
			// 
			this->hostel->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->hostel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->hostel->FormattingEnabled = true;
			this->hostel->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"None", L"Barak", L"Brahmaputra", L"Dibang", L"Dihing", 
				L"Dhansiri", L"Kameng", L"Kapili", L"Lohit", L"Manas", L"Married Scholars", L"Subansiri", L"Siang", L"Umium"});
			this->hostel->Location = System::Drawing::Point(157, 205);
			this->hostel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->hostel->Name = L"hostel";
			this->hostel->Size = System::Drawing::Size(179, 29);
			this->hostel->TabIndex = 68;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(75, 205);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 22);
			this->label8->TabIndex = 67;
			this->label8->Text = L"Hostel";
			// 
			// program
			// 
			this->program->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->program->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->program->FormattingEnabled = true;
			this->program->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"None", L"B.Tech.", L"M.Tech.", L"Phd."});
			this->program->Location = System::Drawing::Point(481, 159);
			this->program->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->program->Name = L"program";
			this->program->Size = System::Drawing::Size(179, 29);
			this->program->TabIndex = 66;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(477, 127);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 22);
			this->label7->TabIndex = 65;
			this->label7->Text = L"Program";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(234, 127);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(163, 22);
			this->label5->TabIndex = 64;
			this->label5->Text = L"Club Information";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(50, 129);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 22);
			this->label6->TabIndex = 63;
			this->label6->Text = L"Department";
			// 
			// club_info
			// 
			this->club_info->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->club_info->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->club_info->FormattingEnabled = true;
			this->club_info->Items->AddRange(gcnew cli::array< System::Object^  >(16) {L"None", L"Aeromodelling", L"Anchorenza and RadioG", 
				L"Astronomy", L"Caedence", L"Coding", L"Consulting and Analytics", L"Debsoc", L"Electronics", L"Expressions", L"Fine Arts", L"Litsoc", 
				L"Octaves", L"Prakriti", L"Robotics", L"Other(s)"});
			this->club_info->Location = System::Drawing::Point(254, 159);
			this->club_info->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->club_info->Name = L"club_info";
			this->club_info->Size = System::Drawing::Size(179, 29);
			this->club_info->TabIndex = 62;
			// 
			// Dept
			// 
			this->Dept->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Dept->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Dept->FormattingEnabled = true;
			this->Dept->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"None", L"Biotechnology", L"Chemical", L"Chemistry", 
				L"Civil", L"CSE", L"Design", L"ECE and EEE", L"HSS", L"Mathematics", L"Mechancial", L"Physics"});
			this->Dept->Location = System::Drawing::Point(54, 159);
			this->Dept->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Dept->Name = L"Dept";
			this->Dept->Size = System::Drawing::Size(179, 29);
			this->Dept->TabIndex = 61;
			// 
			// year_of_join
			// 
			this->year_of_join->Location = System::Drawing::Point(512, 213);
			this->year_of_join->Name = L"year_of_join";
			this->year_of_join->Size = System::Drawing::Size(209, 22);
			this->year_of_join->TabIndex = 60;
			// 
			// txt_election_name
			// 
			this->txt_election_name->Location = System::Drawing::Point(255, 53);
			this->txt_election_name->Name = L"txt_election_name";
			this->txt_election_name->ReadOnly = true;
			this->txt_election_name->Size = System::Drawing::Size(209, 22);
			this->txt_election_name->TabIndex = 59;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 17);
			this->label2->TabIndex = 58;
			this->label2->Text = L"Voter\'s List";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 17);
			this->label1->TabIndex = 57;
			this->label1->Text = L"Election Name";
			// 
			// User_Control_Manage_Election
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txt_organiser);
			this->Controls->Add(this->btn_delete_organiser);
			this->Controls->Add(this->btn_organiser);
			this->Controls->Add(this->lb_organiser);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->btn_delete_voter);
			this->Controls->Add(this->btn_single_voter);
			this->Controls->Add(this->txt_single_voter);
			this->Controls->Add(this->lb_voter);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->hostel);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->program);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->club_info);
			this->Controls->Add(this->Dept);
			this->Controls->Add(this->year_of_join);
			this->Controls->Add(this->txt_election_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"User_Control_Manage_Election";
			this->Size = System::Drawing::Size(818, 722);
			this->Load += gcnew System::EventHandler(this, &User_Control_Manage_Election::User_Control_Manage_Election_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void User_Control_Manage_Election_Load(System::Object^  sender, System::EventArgs^  e) {
				 int election_id=4;
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
				 DB_Connection->Open();
				 String^ selectString = "SELECT * FROM Election_Information WHERE ID="+election_id;
				 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read())
				 {
					 txt_election_name->Text=reader->GetString(1);
				 }
				 else
					 return;
			 }
	};
}
