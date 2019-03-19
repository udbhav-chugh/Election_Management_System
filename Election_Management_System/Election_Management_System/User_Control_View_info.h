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
	/// Summary for User_Control_View_info
	/// </summary>
	public ref class User_Control_View_info : public System::Windows::Forms::UserControl
	{
	public:
		User_Control_View_info(void)
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
		~User_Control_View_info()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::TextBox^  txt_full_name;
	private: System::Windows::Forms::TextBox^  txt_year_of_join;
	private: System::Windows::Forms::TextBox^  txt_club;
	private: System::Windows::Forms::TextBox^  txt_program;
	private: System::Windows::Forms::TextBox^  txt_hostel;
	private: System::Windows::Forms::TextBox^  txt_department;
	private: System::Windows::Forms::TextBox^  txt_password;
	private: System::Windows::Forms::TextBox^  txt_username;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
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
			this->txt_full_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_year_of_join = (gcnew System::Windows::Forms::TextBox());
			this->txt_club = (gcnew System::Windows::Forms::TextBox());
			this->txt_program = (gcnew System::Windows::Forms::TextBox());
			this->txt_hostel = (gcnew System::Windows::Forms::TextBox());
			this->txt_department = (gcnew System::Windows::Forms::TextBox());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->txt_username = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txt_full_name
			// 
			this->txt_full_name->Location = System::Drawing::Point(293, 372);
			this->txt_full_name->Name = L"txt_full_name";
			this->txt_full_name->ReadOnly = true;
			this->txt_full_name->Size = System::Drawing::Size(267, 22);
			this->txt_full_name->TabIndex = 32;
			// 
			// txt_year_of_join
			// 
			this->txt_year_of_join->Location = System::Drawing::Point(293, 340);
			this->txt_year_of_join->Name = L"txt_year_of_join";
			this->txt_year_of_join->ReadOnly = true;
			this->txt_year_of_join->Size = System::Drawing::Size(267, 22);
			this->txt_year_of_join->TabIndex = 31;
			// 
			// txt_club
			// 
			this->txt_club->Location = System::Drawing::Point(293, 303);
			this->txt_club->Name = L"txt_club";
			this->txt_club->ReadOnly = true;
			this->txt_club->Size = System::Drawing::Size(267, 22);
			this->txt_club->TabIndex = 30;
			// 
			// txt_program
			// 
			this->txt_program->Location = System::Drawing::Point(293, 266);
			this->txt_program->Name = L"txt_program";
			this->txt_program->ReadOnly = true;
			this->txt_program->Size = System::Drawing::Size(267, 22);
			this->txt_program->TabIndex = 29;
			// 
			// txt_hostel
			// 
			this->txt_hostel->Location = System::Drawing::Point(293, 238);
			this->txt_hostel->Name = L"txt_hostel";
			this->txt_hostel->ReadOnly = true;
			this->txt_hostel->Size = System::Drawing::Size(267, 22);
			this->txt_hostel->TabIndex = 28;
			// 
			// txt_department
			// 
			this->txt_department->Location = System::Drawing::Point(293, 197);
			this->txt_department->Name = L"txt_department";
			this->txt_department->ReadOnly = true;
			this->txt_department->Size = System::Drawing::Size(267, 22);
			this->txt_department->TabIndex = 27;
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(293, 154);
			this->txt_password->Name = L"txt_password";
			this->txt_password->ReadOnly = true;
			this->txt_password->Size = System::Drawing::Size(267, 22);
			this->txt_password->TabIndex = 26;
			// 
			// txt_username
			// 
			this->txt_username->Location = System::Drawing::Point(293, 116);
			this->txt_username->Name = L"txt_username";
			this->txt_username->ReadOnly = true;
			this->txt_username->Size = System::Drawing::Size(267, 22);
			this->txt_username->TabIndex = 25;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(206, 377);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 17);
			this->label8->TabIndex = 24;
			this->label8->Text = L"label8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(206, 339);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 17);
			this->label7->TabIndex = 23;
			this->label7->Text = L"label7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(206, 303);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 22;
			this->label6->Text = L"label6";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(206, 266);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 17);
			this->label5->TabIndex = 21;
			this->label5->Text = L"label5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(206, 238);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 20;
			this->label4->Text = L"label4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(206, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 19;
			this->label3->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(206, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 18;
			this->label2->Text = L"label2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(206, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 17;
			this->label1->Text = L"label1";
			// 
			// User_Control_View_info
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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
			this->Name = L"User_Control_View_info";
			this->Size = System::Drawing::Size(767, 604);
			this->Load += gcnew System::EventHandler(this, &User_Control_View_info::User_Control_View_info_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		public: property System::String^ SomeText
			{
				System::String^ get()
				{
					return txt_username->Text;
				}
				void set(System::String^ text)
				{
					txt_username->Text = text;
				}
			}
#pragma endregion
	private: System::Void User_Control_View_info_Load(System::Object^  sender, System::EventArgs^  e) {
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
			String ^ str=txt_username->Text;
			DB_Connection->Open();
			String ^ readstring = "SELECT * FROM Student_Information WHERE Username='"+str+"'";
			
			OleDbCommand ^ cmd = gcnew OleDbCommand(readstring, DB_Connection);
			OleDbDataReader ^ reader = cmd->ExecuteReader();

			while(reader->Read() == true)
			{
					txt_username->Text=Convert::ToString(reader->GetString(0));
					txt_password->Text=Convert::ToString(reader->GetString(1));
					txt_department->Text=Convert::ToString(reader->GetString(2));
					txt_hostel->Text=Convert::ToString(reader->GetString(3));
					txt_program->Text=Convert::ToString(reader->GetString(4));
					txt_club->Text=Convert::ToString(reader->GetString(5));
					txt_year_of_join->Text=Convert::ToString(reader->GetString(6));
					txt_full_name->Text=Convert::ToString(reader->GetString(7));
			}
			reader->Close();
			DB_Connection->Close();
			 }
};
}
