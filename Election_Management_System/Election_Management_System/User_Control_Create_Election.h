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
	private: System::Windows::Forms::TextBox^  year_of_join;



	internal: System::Windows::Forms::Label^  label5;
	private: 
	internal: System::Windows::Forms::Label^  label6;
	internal: System::Windows::Forms::ComboBox^  club_info;

	internal: System::Windows::Forms::ComboBox^  Dept;
	internal: System::Windows::Forms::Label^  label7;
	internal: System::Windows::Forms::ComboBox^  program;

	internal: System::Windows::Forms::Label^  label8;
	internal: System::Windows::Forms::ComboBox^  hostel;

	internal: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  cmb_posts;
	private: System::Windows::Forms::TextBox^  txt_post;
	private: System::Windows::Forms::Button^  btn_addpost;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  btn_submit;




	private: System::Windows::Forms::Button^  btn_delete_post;
	private: System::Windows::Forms::DateTimePicker^  start_date;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::DateTimePicker^  end_date;

	private: System::Windows::Forms::CheckedListBox^  lb_voter;
	private: System::Windows::Forms::Button^  btn_single_voter;
	private: System::Windows::Forms::TextBox^  txt_single_voter;
	private: System::Windows::Forms::Button^  btn_delete_voter;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::CheckedListBox^  lb_organiser;
	private: System::Windows::Forms::Button^  btn_delete_organiser;
	private: System::Windows::Forms::Button^  btn_organiser;
	private: System::Windows::Forms::TextBox^  txt_organiser;
	private: System::Windows::Forms::Label^  label13;









	internal: 

	internal: 

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
			this->year_of_join = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->club_info = (gcnew System::Windows::Forms::ComboBox());
			this->Dept = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->program = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->hostel = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cmb_posts = (gcnew System::Windows::Forms::ComboBox());
			this->txt_post = (gcnew System::Windows::Forms::TextBox());
			this->btn_addpost = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btn_submit = (gcnew System::Windows::Forms::Button());
			this->btn_delete_post = (gcnew System::Windows::Forms::Button());
			this->start_date = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->end_date = (gcnew System::Windows::Forms::DateTimePicker());
			this->lb_voter = (gcnew System::Windows::Forms::CheckedListBox());
			this->btn_single_voter = (gcnew System::Windows::Forms::Button());
			this->txt_single_voter = (gcnew System::Windows::Forms::TextBox());
			this->btn_delete_voter = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lb_organiser = (gcnew System::Windows::Forms::CheckedListBox());
			this->btn_delete_organiser = (gcnew System::Windows::Forms::Button());
			this->btn_organiser = (gcnew System::Windows::Forms::Button());
			this->txt_organiser = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Election Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Voter\'s List";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 457);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Posts";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 648);
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
			// year_of_join
			// 
			this->year_of_join->Location = System::Drawing::Point(501, 202);
			this->year_of_join->Name = L"year_of_join";
			this->year_of_join->Size = System::Drawing::Size(209, 22);
			this->year_of_join->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(223, 116);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(163, 22);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Club Information";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(39, 118);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 22);
			this->label6->TabIndex = 21;
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
			this->club_info->Location = System::Drawing::Point(243, 148);
			this->club_info->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->club_info->Name = L"club_info";
			this->club_info->Size = System::Drawing::Size(179, 29);
			this->club_info->TabIndex = 20;
			// 
			// Dept
			// 
			this->Dept->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Dept->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Dept->FormattingEnabled = true;
			this->Dept->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"None", L"Biotechnology", L"Chemical", L"Chemistry", 
				L"Civil", L"CSE", L"Design", L"ECE and EEE", L"HSS", L"Mathematics", L"Mechancial", L"Physics"});
			this->Dept->Location = System::Drawing::Point(43, 148);
			this->Dept->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Dept->Name = L"Dept";
			this->Dept->Size = System::Drawing::Size(179, 29);
			this->Dept->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(466, 116);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 22);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Program";
			// 
			// program
			// 
			this->program->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->program->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->program->FormattingEnabled = true;
			this->program->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"None", L"B.Tech.", L"M.Tech.", L"Phd."});
			this->program->Location = System::Drawing::Point(470, 148);
			this->program->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->program->Name = L"program";
			this->program->Size = System::Drawing::Size(179, 29);
			this->program->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(64, 194);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 22);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Hostel";
			// 
			// hostel
			// 
			this->hostel->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->hostel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->hostel->FormattingEnabled = true;
			this->hostel->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"None", L"Barak", L"Brahmaputra", L"Dibang", L"Dihing", 
				L"Dhansiri", L"Kameng", L"Kapili", L"Lohit", L"Manas", L"Married Scholars", L"Subansiri", L"Siang", L"Umium"});
			this->hostel->Location = System::Drawing::Point(146, 194);
			this->hostel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->hostel->Name = L"hostel";
			this->hostel->Size = System::Drawing::Size(179, 29);
			this->hostel->TabIndex = 26;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(368, 201);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(116, 22);
			this->label9->TabIndex = 27;
			this->label9->Text = L"Year of Join";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(301, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 23);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Add Voters";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &User_Control_Create_Election::button1_Click);
			// 
			// cmb_posts
			// 
			this->cmb_posts->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmb_posts->FormattingEnabled = true;
			this->cmb_posts->Location = System::Drawing::Point(146, 457);
			this->cmb_posts->Name = L"cmb_posts";
			this->cmb_posts->Size = System::Drawing::Size(240, 24);
			this->cmb_posts->TabIndex = 31;
			// 
			// txt_post
			// 
			this->txt_post->Location = System::Drawing::Point(454, 457);
			this->txt_post->Name = L"txt_post";
			this->txt_post->Size = System::Drawing::Size(100, 22);
			this->txt_post->TabIndex = 32;
			// 
			// btn_addpost
			// 
			this->btn_addpost->Location = System::Drawing::Point(560, 458);
			this->btn_addpost->Name = L"btn_addpost";
			this->btn_addpost->Size = System::Drawing::Size(75, 23);
			this->btn_addpost->TabIndex = 33;
			this->btn_addpost->Text = L"Add Post";
			this->btn_addpost->UseVisualStyleBackColor = true;
			this->btn_addpost->Click += gcnew System::EventHandler(this, &User_Control_Create_Election::btn_addpost_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Make Result Public", L"Only To Concerned"});
			this->comboBox1->Location = System::Drawing::Point(204, 645);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(350, 24);
			this->comboBox1->TabIndex = 35;
			// 
			// btn_submit
			// 
			this->btn_submit->Location = System::Drawing::Point(354, 684);
			this->btn_submit->Name = L"btn_submit";
			this->btn_submit->Size = System::Drawing::Size(75, 23);
			this->btn_submit->TabIndex = 36;
			this->btn_submit->Text = L"Submit";
			this->btn_submit->UseVisualStyleBackColor = true;
			this->btn_submit->Click += gcnew System::EventHandler(this, &User_Control_Create_Election::btn_submit_Click);
			// 
			// btn_delete_post
			// 
			this->btn_delete_post->Location = System::Drawing::Point(501, 486);
			this->btn_delete_post->Name = L"btn_delete_post";
			this->btn_delete_post->Size = System::Drawing::Size(134, 23);
			this->btn_delete_post->TabIndex = 41;
			this->btn_delete_post->Text = L"Delete Post";
			this->btn_delete_post->UseVisualStyleBackColor = true;
			this->btn_delete_post->Click += gcnew System::EventHandler(this, &User_Control_Create_Election::btn_delete_post_Click);
			// 
			// start_date
			// 
			this->start_date->CustomFormat = L"yyyy/MM/dd    hh:mm:ss";
			this->start_date->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->start_date->Location = System::Drawing::Point(195, 537);
			this->start_date->Name = L"start_date";
			this->start_date->Size = System::Drawing::Size(200, 22);
			this->start_date->TabIndex = 42;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(43, 537);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 17);
			this->label10->TabIndex = 43;
			this->label10->Text = L"Start Date";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(43, 582);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 17);
			this->label11->TabIndex = 44;
			this->label11->Text = L"End Date";
			// 
			// end_date
			// 
			this->end_date->CustomFormat = L"yyyy/MM/dd    hh:mm:ss";
			this->end_date->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->end_date->Location = System::Drawing::Point(195, 582);
			this->end_date->Name = L"end_date";
			this->end_date->Size = System::Drawing::Size(200, 22);
			this->end_date->TabIndex = 45;
			// 
			// lb_voter
			// 
			this->lb_voter->FormattingEnabled = true;
			this->lb_voter->Location = System::Drawing::Point(162, 267);
			this->lb_voter->Name = L"lb_voter";
			this->lb_voter->Size = System::Drawing::Size(392, 72);
			this->lb_voter->TabIndex = 46;
			// 
			// btn_single_voter
			// 
			this->btn_single_voter->Location = System::Drawing::Point(699, 266);
			this->btn_single_voter->Name = L"btn_single_voter";
			this->btn_single_voter->Size = System::Drawing::Size(75, 23);
			this->btn_single_voter->TabIndex = 48;
			this->btn_single_voter->Text = L"Add Voter";
			this->btn_single_voter->UseVisualStyleBackColor = true;
			this->btn_single_voter->Click += gcnew System::EventHandler(this, &User_Control_Create_Election::btn_single_voter_Click);
			// 
			// txt_single_voter
			// 
			this->txt_single_voter->Location = System::Drawing::Point(560, 267);
			this->txt_single_voter->Name = L"txt_single_voter";
			this->txt_single_voter->Size = System::Drawing::Size(115, 22);
			this->txt_single_voter->TabIndex = 47;
			// 
			// btn_delete_voter
			// 
			this->btn_delete_voter->Location = System::Drawing::Point(560, 295);
			this->btn_delete_voter->Name = L"btn_delete_voter";
			this->btn_delete_voter->Size = System::Drawing::Size(174, 23);
			this->btn_delete_voter->TabIndex = 49;
			this->btn_delete_voter->Text = L"Delete selected voter";
			this->btn_delete_voter->UseVisualStyleBackColor = true;
			this->btn_delete_voter->Click += gcnew System::EventHandler(this, &User_Control_Create_Election::btn_delete_voter_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(17, 372);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(78, 17);
			this->label12->TabIndex = 50;
			this->label12->Text = L"Organisers";
			// 
			// lb_organiser
			// 
			this->lb_organiser->FormattingEnabled = true;
			this->lb_organiser->Location = System::Drawing::Point(162, 372);
			this->lb_organiser->Name = L"lb_organiser";
			this->lb_organiser->Size = System::Drawing::Size(392, 55);
			this->lb_organiser->TabIndex = 51;
			// 
			// btn_delete_organiser
			// 
			this->btn_delete_organiser->Location = System::Drawing::Point(569, 400);
			this->btn_delete_organiser->Name = L"btn_delete_organiser";
			this->btn_delete_organiser->Size = System::Drawing::Size(174, 23);
			this->btn_delete_organiser->TabIndex = 54;
			this->btn_delete_organiser->Text = L"Delete selected voter";
			this->btn_delete_organiser->UseVisualStyleBackColor = true;
			this->btn_delete_organiser->Click += gcnew System::EventHandler(this, &User_Control_Create_Election::btn_delete_organiser_Click);
			// 
			// btn_organiser
			// 
			this->btn_organiser->Location = System::Drawing::Point(708, 371);
			this->btn_organiser->Name = L"btn_organiser";
			this->btn_organiser->Size = System::Drawing::Size(75, 23);
			this->btn_organiser->TabIndex = 53;
			this->btn_organiser->Text = L"Add Voter";
			this->btn_organiser->UseVisualStyleBackColor = true;
			this->btn_organiser->Click += gcnew System::EventHandler(this, &User_Control_Create_Election::btn_organiser_Click);
			// 
			// txt_organiser
			// 
			this->txt_organiser->Location = System::Drawing::Point(584, 372);
			this->txt_organiser->Name = L"txt_organiser";
			this->txt_organiser->Size = System::Drawing::Size(100, 22);
			this->txt_organiser->TabIndex = 55;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(43, 271);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(42, 17);
			this->label13->TabIndex = 56;
			this->label13->Text = L"Voter";
			// 
			// User_Control_Create_Election
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
			this->Controls->Add(this->end_date);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->start_date);
			this->Controls->Add(this->btn_delete_post);
			this->Controls->Add(this->btn_submit);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->btn_addpost);
			this->Controls->Add(this->txt_post);
			this->Controls->Add(this->cmb_posts);
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
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"User_Control_Create_Election";
			this->Size = System::Drawing::Size(818, 722);
			this->Load += gcnew System::EventHandler(this, &User_Control_Create_Election::User_Control_Create_Election_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void User_Control_Create_Election_Load(System::Object^  sender, System::EventArgs^  e) {

			if(Dept->Items->Count > 0)
				Dept->SelectedIndex = 0;
			if(club_info->Items->Count > 0)
				club_info->SelectedIndex = 0;
			if(program->Items->Count > 0)
				program->SelectedIndex = 0;
			if(hostel->Items->Count > 0)
				hostel->SelectedIndex = 0;
			//String^ temp2=Convert::ToString(start_date->Value.Date);
			//temp->Text=temp2;

			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
		DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
        DB_Connection->Open();

		String^ str1 = Dept->Text->Trim();
        String^ str2 = club_info->Text->Trim();
        String^ str3 = program->Text->Trim();
        String^ str4 = hostel->Text->Trim();
		String^ str5 = year_of_join->Text->Trim();
		if(String::Compare(str1,"None")==0)
			str1="%";
		if(String::Compare(str2,"None")==0)
			str2="%";
		if(String::Compare(str3,"None")==0)
			str3="%";
		if(String::Compare(str4,"None")==0)
			str4="%";
		if(String::Compare(str5,"")==0)
			str5="%";
		//String^ selectString = "SELECT * FROM Student_Information WHERE Approved='YES' ORDER BY Full_Name"; 
        String^ selectString = "SELECT * FROM Student_Information WHERE Department LIKE '"+str1+"' AND Club_Information LIKE '"+str2+"' AND Program LIKE '"+str3+"' AND Hostel_Information LIKE '"+str4+"' AND Year_Of_Joining LIKE '"+str5+"' AND Approved='YES' ORDER BY Full_Name";
        OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);
		OleDbDataReader ^ reader = cmd->ExecuteReader();
		lb_voter->Items->Clear();
        while(reader->Read())
        {
			if(lb_voter->Items->Contains(reader->GetString(1)))
			{
				continue;
			}
			lb_voter->Items->Add(reader->GetString(1));
		}
		DB_Connection->Close();
		 }
private: System::Void btn_addpost_Click(System::Object^  sender, System::EventArgs^  e) {
			
		String^ str = txt_post->Text;
		if(String::Compare(str,""))
		{
			cmb_posts->Items->Add(str);
			txt_post->Clear();
		}
		 }
private: System::Void btn_delete_post_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(cmb_posts->Items->Count > 0)
			 {
				 String^ str=cmb_posts->Text;
				cmb_posts->Items->Remove(str);
			 }
		 }
private: System::Void btn_single_voter_Click(System::Object^  sender, System::EventArgs^  e) {
		if(String::Compare(txt_single_voter->Text,"")==0)
		{
			MessageBox::Show("Write Voter's username");
			txt_single_voter->Clear();
			return;
		}
		OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
		DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
        DB_Connection->Open();

		String^ str = txt_single_voter->Text;
		String^ selectString = "SELECT * FROM Student_Information WHERE Username='"+str+"' AND Approved='YES'";
		OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);
		OleDbDataReader ^ reader = cmd->ExecuteReader();
		if(reader->Read())
		{
			if(lb_voter->Items->Contains(reader->GetString(1)))
			{
				MessageBox::Show("Username already added");
				txt_single_voter->Clear();
				return;
			}
			lb_voter->Items->Add(reader->GetString(1));
			txt_single_voter->Clear();
		}
		else
		{
			MessageBox::Show("Invalid Username");
			txt_single_voter->Clear();
			return;
		}
		DB_Connection->Close();
		 }
private: System::Void btn_delete_voter_Click(System::Object^  sender, System::EventArgs^  e) {
			 for(int x=lb_voter->CheckedItems->Count-1; x>=0  ; x--)
			 {
				 lb_voter->Items->Remove(lb_voter->CheckedItems[x]);
			 }

		 }
private: System::Void btn_organiser_Click(System::Object^  sender, System::EventArgs^  e) {
		if(String::Compare(txt_organiser->Text,"")==0)
		{
			MessageBox::Show("Write Organiser's username");
			txt_single_voter->Clear();
			return;
		}
		OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
		DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
        DB_Connection->Open();

		String^ str = txt_organiser->Text;
		String^ selectString = "SELECT * FROM Student_Information WHERE Username='"+str+"' AND Approved='YES'";
		OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);
		OleDbDataReader ^ reader = cmd->ExecuteReader();
		if(reader->Read())
		{
			if(lb_organiser->Items->Contains(reader->GetString(1)))
			{
				MessageBox::Show("Username already added");
				txt_organiser->Clear();
				return;
			}
			lb_organiser->Items->Add(reader->GetString(1));
			txt_organiser->Clear();
		}
		else
		{
			MessageBox::Show("Invalid Username");
			txt_organiser->Clear();
			return;
		}
		DB_Connection->Close();
		 }
private: System::Void btn_delete_organiser_Click(System::Object^  sender, System::EventArgs^  e) {
			 for(int x=lb_organiser->CheckedItems->Count-1; x>=0  ; x--)
			 {
				 lb_organiser->Items->Remove(lb_organiser->CheckedItems[x]);
			 }
		 }
private: System::Void btn_submit_Click(System::Object^  sender, System::EventArgs^  e) {
		OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
		DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
        DB_Connection->Open();
		
		if(String::Compare(txt_election_name->Text,"")==0)
		{
			MessageBox::Show("Add Election Name");
			return;
		}
		if(lb_voter->Items->Count==0)
		{
			MessageBox::Show("Add Voters list");
			return;
		}
		if(lb_organiser->Items->Count==0)
		{
			MessageBox::Show("Add Organisers"); //check
			return;
		}
		if(cmb_posts->Items->Count==0)
		{
			MessageBox::Show("Add Posts for elections");
			return;
		}
		String^ election_name = txt_election_name->Text;
		String^ voter_list="";
		for(int i=0;i<lb_voter->Items->Count;i++)
		{
			voter_list=voter_list + lb_voter->Items[i] + ",";
		}
		String^ organiser_list="";
		for(int i=0;i<lb_organiser->Items->Count;i++)
		{
			organiser_list=organiser_list + lb_organiser->Items[i] + "," ;
		}
		String^ post_list = "";
		for(int i=0;i<cmb_posts->Items->Count; i++)
		{
			post_list = post_list + cmb_posts->Items[i] + ",";
		}
		String^ s_date=Convert::ToString(start_date->Value.Date);
		String^ s_time=Convert::ToString(start_date->Value.ToLongTimeString());
		String^ e_date=Convert::ToString(end_date->Value.Date);
		String^ e_time=Convert::ToString(end_date->Value.ToLongTimeString());
		String^ visibility=Convert::ToString(comboBox1->SelectedIndex);
		String ^ insertString = "INSERT INTO Election_Information ([Election_Name],[Voter_List],[Organiser_Head],[Organiser_List],[Post_List],[Approved],[Visibility],[Start_Date],[Start_Time],[End_Date],[End_Time],[Election_Ongoing],[Agenda_Update]) VALUES('" + election_name + "', '" + voter_list + "', '" + "abc" + "','" + organiser_list + "','" + post_list + "','" + "NO" + "', '" + visibility + "', '" + s_date + "','" + s_time + "', '" + e_date + "', '" + e_time + "', '" + "0" + "', '" + "0" + "')";
			OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
			OleDbDataReader ^ reader = cmd->ExecuteReader();
			reader->Close();
		DB_Connection->Close();
		MessageBox::Show("Election Added. Approval Pending by admin");
		txt_election_name->Clear();
		lb_voter->Items->Clear();
		lb_organiser->Items->Clear();
		cmb_posts->Items->Clear();
		 }

};
}
