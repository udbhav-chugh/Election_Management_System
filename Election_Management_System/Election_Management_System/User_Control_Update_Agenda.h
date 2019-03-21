#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;


namespace Election_Management_System {

	/// <summary>
	/// Summary for User_Control_Update_Agenda
	/// </summary>
	public ref class User_Control_Update_Agenda : public System::Windows::Forms::UserControl
	{
	public:
		User_Control_Update_Agenda(void)
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
		~User_Control_Update_Agenda()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richtxt_update_agenda;
	private: System::Windows::Forms::Button^  btn_Update;
	private: System::Windows::Forms::TextBox^  txt_username;

	protected: 

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
			this->richtxt_update_agenda = (gcnew System::Windows::Forms::RichTextBox());
			this->btn_Update = (gcnew System::Windows::Forms::Button());
			this->txt_username = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// richtxt_update_agenda
			// 
			this->richtxt_update_agenda->Location = System::Drawing::Point(103, 48);
			this->richtxt_update_agenda->Name = L"richtxt_update_agenda";
			this->richtxt_update_agenda->Size = System::Drawing::Size(579, 474);
			this->richtxt_update_agenda->TabIndex = 0;
			this->richtxt_update_agenda->Text = L"";
			// 
			// btn_Update
			// 
			this->btn_Update->Location = System::Drawing::Point(585, 528);
			this->btn_Update->Name = L"btn_Update";
			this->btn_Update->Size = System::Drawing::Size(97, 37);
			this->btn_Update->TabIndex = 1;
			this->btn_Update->Text = L"Update";
			this->btn_Update->UseVisualStyleBackColor = true;
			this->btn_Update->Click += gcnew System::EventHandler(this, &User_Control_Update_Agenda::button1_Click);
			// 
			// txt_username
			// 
			this->txt_username->Location = System::Drawing::Point(103, 20);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(100, 22);
			this->txt_username->TabIndex = 2;
			// 
			// User_Control_Update_Agenda
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->txt_username);
			this->Controls->Add(this->btn_Update);
			this->Controls->Add(this->richtxt_update_agenda);
			this->Name = L"User_Control_Update_Agenda";
			this->Size = System::Drawing::Size(767, 604);
			this->Load += gcnew System::EventHandler(this, &User_Control_Update_Agenda::User_Control_Update_Agenda_Load);
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
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
				 String ^ str = txt_username->Text;
				 String ^ Agenda = richtxt_update_agenda->Text;

				 DB_Connection->Open();
				 String ^ updateString = "UPDATE Nominees_Information SET Agenda='" + Agenda + "' WHERE Nominee_Username='"+str+"'";

				 OleDbCommand ^ cmd1 = gcnew OleDbCommand(updateString, DB_Connection);
				 OleDbDataReader ^ reader1 = cmd1->ExecuteReader();
				 reader1->Close();
				 DB_Connection->Close();
			 }
	private: System::Void User_Control_Update_Agenda_Load(System::Object^  sender, System::EventArgs^  e) {
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
				 DB_Connection->Open();
				 String ^ str=txt_username->Text;
				 String ^ readstring = "SELECT * FROM Nominees_Information WHERE Nominee_Username='"+txt_username->Text+"'";

				 OleDbCommand ^ cmd = gcnew OleDbCommand(readstring, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();

				 while(reader->Read() == true)
				 {
					 richtxt_update_agenda->Text=Convert::ToString(reader->GetString(3));
				 }
				 reader->Close();
				 DB_Connection->Close();
			 }
	};
}
