#pragma once

namespace Election_Management_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for Update_Agenda_form
	/// </summary>
	public ref class Update_Agenda_form : public System::Windows::Forms::Form
	{
	public:
		Update_Agenda_form(void)
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
		~Update_Agenda_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txt_username;
	protected: 
	private: System::Windows::Forms::RichTextBox^  richtxt_update_agenda;
	private: System::Windows::Forms::Button^  btn_Update;
	private: System::Windows::Forms::TextBox^  txt_Election_ID;


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
			this->richtxt_update_agenda = (gcnew System::Windows::Forms::RichTextBox());
			this->btn_Update = (gcnew System::Windows::Forms::Button());
			this->txt_Election_ID = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// txt_username
			// 
			this->txt_username->Location = System::Drawing::Point(88, 41);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(100, 22);
			this->txt_username->TabIndex = 4;
			// 
			// richtxt_update_agenda
			// 
			this->richtxt_update_agenda->Location = System::Drawing::Point(88, 69);
			this->richtxt_update_agenda->Name = L"richtxt_update_agenda";
			this->richtxt_update_agenda->Size = System::Drawing::Size(579, 474);
			this->richtxt_update_agenda->TabIndex = 3;
			this->richtxt_update_agenda->Text = L"";
			// 
			// btn_Update
			// 
			this->btn_Update->Location = System::Drawing::Point(570, 562);
			this->btn_Update->Name = L"btn_Update";
			this->btn_Update->Size = System::Drawing::Size(97, 37);
			this->btn_Update->TabIndex = 6;
			this->btn_Update->Text = L"Update";
			this->btn_Update->UseVisualStyleBackColor = true;
			this->btn_Update->Click += gcnew System::EventHandler(this, &Update_Agenda_form::btn_Update_Click);
			// 
			// txt_Election_ID
			// 
			this->txt_Election_ID->Location = System::Drawing::Point(215, 41);
			this->txt_Election_ID->Name = L"txt_Election_ID";
			this->txt_Election_ID->Size = System::Drawing::Size(88, 22);
			this->txt_Election_ID->TabIndex = 7;
			// 
			// Update_Agenda_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 637);
			this->Controls->Add(this->txt_Election_ID);
			this->Controls->Add(this->btn_Update);
			this->Controls->Add(this->txt_username);
			this->Controls->Add(this->richtxt_update_agenda);
			this->Name = L"Update_Agenda_form";
			this->Text = L"Update_Agenda_form";
			this->Load += gcnew System::EventHandler(this, &Update_Agenda_form::Update_Agenda_form_Load);
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

			public: property System::String^ Election_ID
					{
						System::String^ get()
						{
							return txt_Election_ID->Text;
						}
						void set(System::String^ text)
						{
							txt_Election_ID->Text = text;
						}
					}

#pragma endregion
	private: System::Void Update_Agenda_form_Load(System::Object^  sender, System::EventArgs^  e) {
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
				 DB_Connection->Open();
				 int str=Convert::ToInt16(txt_Election_ID->Text);
				 String ^ readstring = "SELECT * FROM Nominees_Information WHERE Nominee_Username='"+txt_username->Text+"' AND Election_ID="+str+"";

				 OleDbCommand ^ cmd = gcnew OleDbCommand(readstring, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();

				 while(reader->Read() == true)
				 {
					 richtxt_update_agenda->Text=Convert::ToString(reader->GetString(3));
				 }
				 reader->Close();
				 DB_Connection->Close();
			 }
	private: System::Void btn_Update_Click(System::Object^  sender, System::EventArgs^  e) {
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
				 String ^ str = txt_username->Text;
				 String ^ Agenda = richtxt_update_agenda->Text;

				 DB_Connection->Open();
				 String ^ updateString = "UPDATE Nominees_Information SET Agenda='" + Agenda + "' WHERE Nominee_Username='"+str+"' AND Election_ID='"+Election_ID+"'";

				 OleDbCommand ^ cmd1 = gcnew OleDbCommand(updateString, DB_Connection);
				 OleDbDataReader ^ reader1 = cmd1->ExecuteReader();
				 reader1->Close();
				 DB_Connection->Close();
			 }
};
}
