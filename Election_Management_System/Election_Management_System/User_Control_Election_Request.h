#pragma once


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
	/// Summary for User_Control_Election_Request
	/// </summary>
	public ref class User_Control_Election_Request : public System::Windows::Forms::UserControl
	{
	public:
		User_Control_Election_Request(void)
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
		~User_Control_Election_Request()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// User_Control_Election_Request
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Name = L"User_Control_Election_Request";
			this->Size = System::Drawing::Size(863, 755);
			this->Load += gcnew System::EventHandler(this, &User_Control_Election_Request::User_Control_Election_Request_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btn_approv_Click(System::Object ^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::Button ^ temp_btn = gcnew System::Windows::Forms::Button();
				 temp_btn = dynamic_cast<System::Windows::Forms::Button ^>(sender);
				 int electionID = Convert::ToInt32(temp_btn->Name); 
				 // MessageBox::Show(electionID);

				 OleDbConnection ^ DB_Connection2 = gcnew OleDbConnection();
				 DB_Connection2->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
				 DB_Connection2->Open();

				 String ^ query2 = "UPDATE Election_Information SET Approved = 'YES' WHERE ID = "+ electionID ;
				 OleDbCommand ^ cmd = gcnew OleDbCommand(query2, DB_Connection2);
				 cmd->ExecuteNonQuery();
				 DB_Connection2->Close();
				 this->Controls->Clear();
				 this->InitializeComponent();
				 this->User_Control_Election_Request_Load(e, e);
			 }


	private: System::Void btn_disapprov_Click(System::Object ^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::Button ^ temp_btn = gcnew System::Windows::Forms::Button();
				 temp_btn = dynamic_cast<System::Windows::Forms::Button ^>(sender);
				 //String ^ electionID = temp_btn->Name;
				 int electionID = Convert::ToInt32(temp_btn->Name); 
				 // MessageBox::Show(electionID);

				 OleDbConnection ^ DB_Connection3 = gcnew OleDbConnection();
				 DB_Connection3->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
				 DB_Connection3->Open();

				 String ^ query3 = "DELETE FROM Election_Information WHERE ID = "+ electionID ;
				 OleDbCommand ^ cmd = gcnew OleDbCommand(query3, DB_Connection3);
				 cmd->ExecuteNonQuery();
				 DB_Connection3->Close();

				 this->Controls->Clear();
				 this->InitializeComponent();
				 this->User_Control_Election_Request_Load(e, e);

			 }

			 void electionRequestCreator(int i, int electionID, String ^ electionName, String ^ organisingHead, String ^ startDate, String ^ endDate, String ^ startTime, String ^ endTime){
				 System::Windows::Forms::TextBox ^ txtbox1 = gcnew System::Windows::Forms::TextBox();
				 System::Windows::Forms::Button ^ btn_approv = gcnew System::Windows::Forms::Button();
				 System::Windows::Forms::Button ^ btn_disapprov = gcnew System::Windows::Forms::Button();

				 txtbox1->Name = "textbox" +  Convert::ToString(i);
				 txtbox1->Size = System::Drawing::Size(350, 120);
				 txtbox1->Multiline = true;
				 txtbox1->ReadOnly = true;



				 btn_approv->Name = Convert::ToString(electionID);
				 btn_approv->Size = System::Drawing::Size(120, 40);
				 btn_approv->Text = "Approve";

				 btn_approv->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 btn_approv->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 btn_approv->ForeColor = System::Drawing::SystemColors::MenuHighlight;



				 //app.FlatStyle = FlatStyle.Popup
				 //'set button name as username and button tag a user email
				 btn_disapprov->Name = Convert::ToString(electionID);
				 btn_disapprov->Size = System::Drawing::Size(120, 40);
				 btn_disapprov->Text = "Decline";

				 btn_disapprov->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 btn_disapprov->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 btn_disapprov->ForeColor = System::Drawing::SystemColors::MenuHighlight;

				 int x = 10;
				 int y = 10 + 122*(i-1);
				 btn_approv->Location = System::Drawing::Point(370, y + 15);
				 btn_disapprov->Location = System::Drawing::Point(370, y + 70);
				 txtbox1->Location = System::Drawing::Point(x, y);

				 this->Controls->Add(btn_disapprov);
				 this->Controls->Add(btn_approv);
				 this->Controls->Add(txtbox1);

				 txtbox1->Text = " Election Id : " + Convert::ToString(electionID) + "\r\n  Election Name : " + electionName + "\r\n  Organising Head : " + organisingHead + "\r\n  Start Date : " + startDate + "\r\n  End Date :" + endDate;

				 txtbox1->ScrollToCaret();
				 txtbox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
				 txtbox1->Refresh();

				 btn_approv->Click += gcnew System::EventHandler(this, &User_Control_Election_Request::btn_approv_Click);
				 btn_disapprov->Click += gcnew System::EventHandler(this, &User_Control_Election_Request::btn_disapprov_Click);


			 }

			 // User Control Election Request Load ************************************************************************************   

	private: System::Void User_Control_Election_Request_Load(System::Object^  sender, System::EventArgs^  e) {
				 int i;
				 i = 1;
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
				 DB_Connection->Open();
				 String ^ query = " SELECT * FROM Election_Information WHERE Approved = 'NO'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(query, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 // DB_Connection->Close();

				 while(reader->Read() == true){

					 int electionID = reader->GetInt32(0);
					 String ^ electionName = reader->GetString(1);					 
					 String ^ organisingHead = reader->GetString(3);
					 String ^ startDate = reader->GetString(8);
					 String ^ endDate = reader->GetString(10);
					 String ^ startTime = reader->GetString(9);
					 String ^ endTime = reader->GetString(11);

					 electionRequestCreator(i, electionID, electionName, organisingHead, startDate, endDate, startTime, endTime);

					 i = i + 1;

				 }

			 }
	};
}






