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
	/// Summary for User_Control_Update_User
	/// </summary>
	public ref class User_Control_Update_User : public System::Windows::Forms::UserControl
	{
	public:
		User_Control_Update_User(void)
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
		~User_Control_Update_User()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_username;
	protected: 
	private: System::Windows::Forms::Button^  btn_submit;
	private: System::Windows::Forms::TextBox^  txt_search;
	private: System::Windows::Forms::Button^  btn_club_add;
	private: System::Windows::Forms::TextBox^  txt_full_name;
	private: System::Windows::Forms::Button^  btn_club_delete;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txt_year_of_join;
	private: System::Windows::Forms::Button^  btn_search;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  combo_department;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  combo_add_club;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel_Update;
	private: System::Windows::Forms::ComboBox^  combo_club;
	private: System::Windows::Forms::ComboBox^  combo_hostel;
	private: System::Windows::Forms::ComboBox^  combo_program;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

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
			this->lbl_username = (gcnew System::Windows::Forms::Label());
			this->btn_submit = (gcnew System::Windows::Forms::Button());
			this->txt_search = (gcnew System::Windows::Forms::TextBox());
			this->btn_club_add = (gcnew System::Windows::Forms::Button());
			this->txt_full_name = (gcnew System::Windows::Forms::TextBox());
			this->btn_club_delete = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_year_of_join = (gcnew System::Windows::Forms::TextBox());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->combo_department = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->combo_add_club = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel_Update = (gcnew System::Windows::Forms::Panel());
			this->combo_club = (gcnew System::Windows::Forms::ComboBox());
			this->combo_hostel = (gcnew System::Windows::Forms::ComboBox());
			this->combo_program = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel_Update->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_username
			// 
			this->lbl_username->AutoSize = true;
			this->lbl_username->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_username->Location = System::Drawing::Point(338, 11);
			this->lbl_username->Name = L"lbl_username";
			this->lbl_username->Size = System::Drawing::Size(77, 19);
			this->lbl_username->TabIndex = 9;
			this->lbl_username->Text = L"Username";
			// 
			// btn_submit
			// 
			this->btn_submit->Location = System::Drawing::Point(260, 332);
			this->btn_submit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_submit->Name = L"btn_submit";
			this->btn_submit->Size = System::Drawing::Size(117, 47);
			this->btn_submit->TabIndex = 36;
			this->btn_submit->Text = L"Submit";
			this->btn_submit->UseVisualStyleBackColor = true;
			this->btn_submit->Click += gcnew System::EventHandler(this, &User_Control_Update_User::btn_submit_Click);
			// 
			// txt_search
			// 
			this->txt_search->Location = System::Drawing::Point(227, 71);
			this->txt_search->Name = L"txt_search";
			this->txt_search->Size = System::Drawing::Size(152, 22);
			this->txt_search->TabIndex = 45;
			// 
			// btn_club_add
			// 
			this->btn_club_add->Location = System::Drawing::Point(472, 199);
			this->btn_club_add->Margin = System::Windows::Forms::Padding(4);
			this->btn_club_add->Name = L"btn_club_add";
			this->btn_club_add->Size = System::Drawing::Size(100, 28);
			this->btn_club_add->TabIndex = 42;
			this->btn_club_add->Text = L"Add";
			this->btn_club_add->UseVisualStyleBackColor = true;
			this->btn_club_add->Click += gcnew System::EventHandler(this, &User_Control_Update_User::btn_club_add_Click);
			// 
			// txt_full_name
			// 
			this->txt_full_name->Location = System::Drawing::Point(198, 293);
			this->txt_full_name->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_full_name->Name = L"txt_full_name";
			this->txt_full_name->Size = System::Drawing::Size(267, 22);
			this->txt_full_name->TabIndex = 35;
			// 
			// btn_club_delete
			// 
			this->btn_club_delete->Location = System::Drawing::Point(198, 199);
			this->btn_club_delete->Margin = System::Windows::Forms::Padding(4);
			this->btn_club_delete->Name = L"btn_club_delete";
			this->btn_club_delete->Size = System::Drawing::Size(107, 28);
			this->btn_club_delete->TabIndex = 43;
			this->btn_club_delete->Text = L"Delete";
			this->btn_club_delete->UseVisualStyleBackColor = true;
			this->btn_club_delete->Click += gcnew System::EventHandler(this, &User_Control_Update_User::btn_club_delete_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 293);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 17);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Full Name";
			// 
			// txt_year_of_join
			// 
			this->txt_year_of_join->Location = System::Drawing::Point(198, 245);
			this->txt_year_of_join->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txt_year_of_join->Name = L"txt_year_of_join";
			this->txt_year_of_join->Size = System::Drawing::Size(267, 22);
			this->txt_year_of_join->TabIndex = 34;
			// 
			// btn_search
			// 
			this->btn_search->AllowDrop = true;
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_search->Location = System::Drawing::Point(456, 64);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(106, 36);
			this->btn_search->TabIndex = 46;
			this->btn_search->Text = L"Search ";
			this->btn_search->UseVisualStyleBackColor = true;
			this->btn_search->Click += gcnew System::EventHandler(this, &User_Control_Update_User::btn_search_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 17);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Department";
			// 
			// combo_department
			// 
			this->combo_department->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combo_department->FormattingEnabled = true;
			this->combo_department->Location = System::Drawing::Point(119, 38);
			this->combo_department->Margin = System::Windows::Forms::Padding(4);
			this->combo_department->Name = L"combo_department";
			this->combo_department->Size = System::Drawing::Size(160, 24);
			this->combo_department->TabIndex = 40;
			this->combo_department->SelectedIndexChanged += gcnew System::EventHandler(this, &User_Control_Update_User::combo_department_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(68, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 19);
			this->label1->TabIndex = 47;
			this->label1->Text = L"Username";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 245);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 17);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Year of joining";
			// 
			// combo_add_club
			// 
			this->combo_add_club->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combo_add_club->Location = System::Drawing::Point(472, 162);
			this->combo_add_club->Margin = System::Windows::Forms::Padding(4);
			this->combo_add_club->Name = L"combo_add_club";
			this->combo_add_club->Size = System::Drawing::Size(160, 24);
			this->combo_add_club->TabIndex = 41;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 17);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Hostel Information";
			// 
			// panel_Update
			// 
			this->panel_Update->Controls->Add(this->lbl_username);
			this->panel_Update->Controls->Add(this->btn_submit);
			this->panel_Update->Controls->Add(this->btn_club_add);
			this->panel_Update->Controls->Add(this->txt_full_name);
			this->panel_Update->Controls->Add(this->btn_club_delete);
			this->panel_Update->Controls->Add(this->label2);
			this->panel_Update->Controls->Add(this->txt_year_of_join);
			this->panel_Update->Controls->Add(this->label3);
			this->panel_Update->Controls->Add(this->combo_department);
			this->panel_Update->Controls->Add(this->label7);
			this->panel_Update->Controls->Add(this->combo_add_club);
			this->panel_Update->Controls->Add(this->label4);
			this->panel_Update->Controls->Add(this->combo_club);
			this->panel_Update->Controls->Add(this->combo_hostel);
			this->panel_Update->Controls->Add(this->combo_program);
			this->panel_Update->Controls->Add(this->label5);
			this->panel_Update->Controls->Add(this->label6);
			this->panel_Update->Location = System::Drawing::Point(12, 138);
			this->panel_Update->Name = L"panel_Update";
			this->panel_Update->Size = System::Drawing::Size(743, 402);
			this->panel_Update->TabIndex = 48;
			this->panel_Update->Visible = false;
			// 
			// combo_club
			// 
			this->combo_club->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combo_club->Location = System::Drawing::Point(176, 162);
			this->combo_club->Margin = System::Windows::Forms::Padding(4);
			this->combo_club->Name = L"combo_club";
			this->combo_club->Size = System::Drawing::Size(160, 24);
			this->combo_club->TabIndex = 39;
			// 
			// combo_hostel
			// 
			this->combo_hostel->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combo_hostel->FormattingEnabled = true;
			this->combo_hostel->Location = System::Drawing::Point(153, 82);
			this->combo_hostel->Margin = System::Windows::Forms::Padding(4);
			this->combo_hostel->Name = L"combo_hostel";
			this->combo_hostel->Size = System::Drawing::Size(160, 24);
			this->combo_hostel->TabIndex = 37;
			// 
			// combo_program
			// 
			this->combo_program->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->combo_program->FormattingEnabled = true;
			this->combo_program->Location = System::Drawing::Point(144, 120);
			this->combo_program->Margin = System::Windows::Forms::Padding(4);
			this->combo_program->Name = L"combo_program";
			this->combo_program->Size = System::Drawing::Size(160, 24);
			this->combo_program->TabIndex = 38;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 123);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 17);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Program";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 17);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Club Information";
			// 
			// User_Control_Update_User
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->txt_search);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel_Update);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"User_Control_Update_User";
			this->Size = System::Drawing::Size(767, 604);
			this->Load += gcnew System::EventHandler(this, &User_Control_Update_User::User_Control_Update_User_Load);
			this->panel_Update->ResumeLayout(false);
			this->panel_Update->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void User_Control_Update_User_Load(System::Object^  sender, System::EventArgs^  e) {
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
				 combo_program->Items->Add("Btech");
				 combo_program->Items->Add("Mtech");
				 combo_program->Items->Add("BDes");
				 combo_program->Items->Add("Phd");

			 }
private: System::Void btn_search_Click(System::Object^  sender, System::EventArgs^  e) {
			 combo_club->Items->Clear();
			 String ^ username =  txt_search->Text;
			 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
			 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
			 DB_Connection->Open();
			 String ^ query = " SELECT * FROM Student_Information WHERE Username = '" + username + "' AND Approved = 'YES'";
			 OleDbCommand ^ cmd = gcnew OleDbCommand(query, DB_Connection);
			 OleDbDataReader ^ reader = cmd->ExecuteReader();
			 int flag = 0;
			 String ^ fullname;
			 String ^ yearofjoining;
			 String ^ clubinfo;
			 String ^ program;
			 String ^ hostelinfo;
			 String ^ department;


			 while(reader->Read() == true){
				 username = reader->GetString(0);					 
				 department = reader->GetString(2);
				 hostelinfo = reader->GetString(3);
				 program = reader->GetString(4);
				 clubinfo = reader->GetString(5);
				 yearofjoining = reader->GetString(6);
				 fullname  = reader->GetString(7);
				 flag = 1;
			 }
			 if(flag == 1){
				 panel_Update->Visible = true;
				 lbl_username->Text = username;
				 combo_department->Text = department;
				 combo_hostel->Text = hostelinfo;
				 combo_program->Text = program;
				 //int flag = 0;
				 String ^ word = "";
				 if (String::Compare(clubinfo,",") == 0){
					 combo_club->Items->Clear();

				 }
				 else{
					 for(int i = 1; i < clubinfo->Length; i++){
						 
						 if(clubinfo[i] != ','){
							 word += clubinfo[i];
						 }
						 else{
							 combo_club->Items->Add(word);
							 word = "";
						 }
					 }
				 }
				 
				 txt_year_of_join->Text = Convert::ToString(yearofjoining);
				 txt_full_name->Text = fullname;

			 }
			 else{
				 // There is Nothing to show 
				 panel_Update->Visible = false;
				 MessageBox::Show("Username Doesn't Exist");
			 }
			 DB_Connection->Close();

		 }
private: System::Void btn_club_delete_Click(System::Object^  sender, System::EventArgs^  e) {
			 combo_club->Items->Remove(combo_club->Text);
			 if(combo_club->Items->Count == 0){
				combo_club->Items->Clear();
			 }
		 }
private: System::Void btn_club_add_Click(System::Object^  sender, System::EventArgs^  e) {
			 int index_= combo_club->FindString(combo_add_club->Text);
			 //MessageBox::Show(Convert::ToString(index_));
			 if (index_ <0)
			 {
				 combo_club->Items->Add(combo_add_club->Text);
			 } 
			 else
			 {
				 MessageBox::Show("Already Added!");
			 }
			 
		 }
private: System::Void btn_submit_Click(System::Object^  sender, System::EventArgs^  e) {
			 int flag = 0;
			 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
			 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
			 String ^ username = lbl_username->Text;

			 DB_Connection->Open();
			/* String ^ insertString = "SELECT Password FROM Student_Information WHERE UserName = '" + txt_username->Text + "' ";

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
			 DB_Connection->Close();*/
			 
				 
				 

				 
				 String ^ year_of_join = txt_year_of_join->Text;
				 String ^ full_name = txt_full_name->Text;
				 
				 String ^ department = combo_department->Text;
				 String ^ hostel = combo_hostel->Text;
				 String ^ program = combo_program->Text;
				 String ^ club = ",";

				 for(int i = 0; i < combo_club->Items->Count; i++){
					 club = club  + combo_club->Items[i]->ToString();
					 club = club +  ",";
				 }
				 if(combo_club->Items->Count == 0){
					 club = ",";
				 }
				 //MessageBox::Show(club);{

				 if(department == "" || hostel == "" || program == "" || year_of_join == "" || full_name == "" ){
					 MessageBox::Show("Enter the complete info");
				 }
				 else{
					 String ^ insertString = "UPDATE Student_Information SET Department = '" + department +"' , Hostel_Information = '" + hostel +"' , Program = '" + program + "' , Club_Information = '" + club + "' , Year_Of_Joining = '" + year_of_join + "' , Full_Name = '" + full_name + "' WHERE Username = '" + username + "';";
					 //MessageBox::Show(insertString);
					 OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
					 cmd->ExecuteNonQuery();

					 
					 panel_Update->Visible = false;
				 }
				 
				 DB_Connection->Close();


		 }
private: System::Void combo_department_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
