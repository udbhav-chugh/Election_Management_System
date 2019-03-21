#pragma once
#include "Update_Agenda_form.h"
#using <System.dll>
#using <System.data.dll>
#include <string.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;


namespace Election_Management_System {

	/// <summary>
	/// Summary for User_Control_Dynamic_Nominee_election
	/// </summary>
	public ref class User_Control_Dynamic_Nominee_election : public System::Windows::Forms::UserControl
	{
	public:
		User_Control_Dynamic_Nominee_election(void)
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
		~User_Control_Dynamic_Nominee_election()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txt_username;
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
			this->txt_username = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txt_username
			// 
			this->txt_username->Location = System::Drawing::Point(16, 17);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(100, 22);
			this->txt_username->TabIndex = 0;
			this->txt_username->Visible = false;
			// 
			// User_Control_Dynamic_Nominee_election
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->txt_username);
			this->Name = L"User_Control_Dynamic_Nominee_election";
			this->Size = System::Drawing::Size(756, 550);
			this->Load += gcnew System::EventHandler(this, &User_Control_Dynamic_Nominee_election::User_Control_Dynamic_Nominee_election_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_approv_Click(System::Object ^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::Button ^ temp_btn = gcnew System::Windows::Forms::Button();
				 temp_btn = dynamic_cast<System::Windows::Forms::Button ^>(sender);
				 String ^ name = temp_btn->Name;
				 Update_Agenda_form ^ dumb_agenda = gcnew Update_Agenda_form;
				 dumb_agenda->SomeText=this->txt_username->Text;
				 dumb_agenda->Election_ID=temp_btn->Name;
				 dumb_agenda->Show();
				 //Form_Admin::btn_userrequest_Click();
				 //this->Controls->Clear();
				 //this->InitializeComponent();
				 //this->User_Control_Dynamic_Nominee_election_Load(e, e);
			 }

		 void creator(int i, int ^ election_id, String ^ election_post){
				 System::Windows::Forms::TextBox ^ txtbox1 = gcnew System::Windows::Forms::TextBox();
				 System::Windows::Forms::Button ^ btn_approv = gcnew System::Windows::Forms::Button();
				 System::Windows::Forms::Button ^ btn_disapprov = gcnew System::Windows::Forms::Button();

				 txtbox1->Name = "textbox" +  Convert::ToString(election_id);
				 txtbox1->Size = System::Drawing::Size(350, 120);
				 txtbox1->Multiline = true;
				 txtbox1->ReadOnly = true;



				 btn_approv->Name = Convert::ToString(election_id);
				 btn_approv->Size = System::Drawing::Size(120, 40);
				 btn_approv->Text = "Approve";

				 btn_approv->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 btn_approv->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 btn_approv->ForeColor = System::Drawing::SystemColors::MenuHighlight;



				 int x = 10;
				 int y = 10 + 122*(i-1);
				 btn_approv->Location = System::Drawing::Point(370, y + 15);
				 txtbox1->Location = System::Drawing::Point(x, y);

				 this->Controls->Add(btn_approv);
				 this->Controls->Add(txtbox1);

				 txtbox1->Text = " Election ID : " + Convert::ToString(election_id) + "\r\n Election Post : " + election_post + "\r\n";
				 txtbox1->ScrollToCaret();
				 txtbox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
				 txtbox1->Refresh();

				 btn_approv->Click += gcnew System::EventHandler(this, &User_Control_Dynamic_Nominee_election::btn_approv_Click);

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
	private: System::Void User_Control_Dynamic_Nominee_election_Load(System::Object^  sender, System::EventArgs^  e) {
				 int i;
				 i = 1;
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
				 DB_Connection->Open();
				 String ^ query = " SELECT * FROM Nominees_Information WHERE Nominee_Username = '"+txt_username->Text+"' AND Update_Allowed = 'YES'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(query, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 //DB_Connection->Close();

				 while(reader->Read() == true){

					 int ^ election_id = reader->GetInt32(0);					 
					 String ^ election_post = reader->GetString(1);

					 creator(i, election_id, election_post);

					 i = i + 1;

				 }
				 reader->Close();
				 DB_Connection->Close();
			 }
};
}
