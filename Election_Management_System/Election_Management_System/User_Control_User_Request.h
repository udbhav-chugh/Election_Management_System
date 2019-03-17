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
	/// Summary for User_Control_User_Request
	/// </summary>
	public ref class User_Control_User_Request : public System::Windows::Forms::UserControl
	{
	public:
		User_Control_User_Request(void)
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
		~User_Control_User_Request()
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
			// User_Control_User_Request
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Name = L"User_Control_User_Request";
			this->Size = System::Drawing::Size(863, 755);
			this->Load += gcnew System::EventHandler(this, &User_Control_User_Request::User_Control_User_Request_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

		void creator(int i, string ^ username, string ^ department, string ^ hostelinfo, string ^ program, string ^ clubinfo, int yearofjoining, string ^ fullname){
			TextBox ^ txtbox1 = gcnew System::Windows::Forms::TextBox();
			Button ^ btn_approv = gcnew System::Windows::Forms::Button();
			Button ^ btn_disapprov = gcnew System::Windows::Forms::Button();
			
			txtbox1->Name = "textbox" + to_string(i);
			txtbox1->Size = System::Drawing::Size(350, 120);
			txtbox1->Multiline = true;
			txtbox1->ReadOnly = true;



			btn_approv->Name = username;
			btn_approv->Size = System::Drawing::Size(120, 40);
			btn_approv->Text = "Approve";
			
			btn_approv->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			btn_approv->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			btn_approv->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			
			
			
			//app.FlatStyle = FlatStyle.Popup
			//'set button name as username and button tag a user email
			btn_disapprov->Name = username;
			btn_disapprov->Size = System::Drawing::Size(120, 40);
			btn_disapprov->Text = "Approve";
			
			btn_disapprov->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			btn_disapprov->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			btn_disapprov->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			

					
		
		}


		


	private: System::Void User_Control_User_Request_Load(System::Object^  sender, System::EventArgs^  e) {
				 int i;
				 i = 1;
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
				 DB_Connection->Open();
				 string ^ query = " SELECT * FROM Student_Information WHERE Approved = 'NO'"
				 OleDbCommand ^ cmd = gcnew OleDbCommand(query, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();

				 while(reader->Read() == true){

					 string ^ username = reader->GetString(0);					 
					 string ^ department = reader->GetString(2);
					 string ^ hostelinfo = reader->GetString(3);
					 string ^ program = reader->GetString(4);
					 string ^ clubinfo = reader->GetString(5);
					 int yearofjoining = reader->GetInt32(6);
					 string ^ fullname  = reader->GetString(7);
					 
					 creator(i, username, department, hostelinfo, program, clubinfo, yearofjoining, fullname);
						
					 i = i + 1;

				 }


			 }
	};
}
