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
	/// Summary for View_Public_Elections
	/// </summary>
	public ref class View_Public_Elections : public System::Windows::Forms::UserControl
	{
	public:
		View_Public_Elections(void)
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
		~View_Public_Elections()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// View_Public_Elections
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Name = L"View_Public_Elections";
			this->Size = System::Drawing::Size(575, 491);
			this->Load += gcnew System::EventHandler(this, &View_Public_Elections::View_Public_Elections_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void View_Public_Elections_Load(System::Object^  sender, System::EventArgs^  e){
			int i = 1;

			OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
			

			DB_Connection->Open();
			String ^ insertString = "SELECT * FROM Election_Information WHERE Visibility=0";
			
			OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
			OleDbDataReader ^ reader = cmd->ExecuteReader();

				
			if (reader->HasRows)
			{
				while (reader->Read() == true)
				{
					int elec_id = reader->GetInt32(0);
					String ^ elec_name = reader->GetString(1);
					String ^ ongoing = reader->GetString(12);
					String ^ start_date = reader->GetString(8);
					String ^ start_time = reader->GetString(9);
					String ^ end_date = reader->GetString(10);
					String ^ end_time = reader->GetString(11);

					creator(i, elec_id, elec_name, ongoing, start_date, start_time, end_date, end_time);

					i += 1;
				}
			}
			else
			{
				MessageBox::Show("entry not found in Election DB!!!!!2!");
			}
			reader->Close();
			DB_Connection->Close();
		}

			 void creator(int i, int elec_id, String ^ elec_name, String ^ ongoing, String ^ start_date, String ^ start_time, String ^ end_date, String ^ end_time){
				 System::Windows::Forms::TextBox ^ txtbox1 = gcnew System::Windows::Forms::TextBox();
				 System::Windows::Forms::Button ^ btn_result = gcnew System::Windows::Forms::Button();

				 txtbox1->Name = "textbox" +  Convert::ToString(i);
				 txtbox1->Size = System::Drawing::Size(350, 120);
				 txtbox1->Multiline = true;
				 txtbox1->ReadOnly = true;
				 txtbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));

				 btn_result->Size = System::Drawing::Size(120, 40);
				 btn_result->Text = "View Result";
				 btn_result->Name = Convert::ToString(elec_id);
				 btn_result->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 btn_result->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
					 static_cast<System::Int32>(static_cast<System::Byte>(0)));
				 btn_result->ForeColor = System::Drawing::SystemColors::MenuHighlight;
				 

				 if (ongoing == "0")
				 {
					 txtbox1->Text = "Election Name: " + elec_name + "\n" + "Election Schedule: " + start_time + ", " + start_date + " to " + end_time + ", " + end_date + ".\n";
				 } 
				 else if (ongoing == "1")
				 {
					 txtbox1->Text = "Election Name: " + elec_name + "\n" + "Election Ongoing!\n Please Login to vote";
				 }
				 else if (ongoing == "2")
				 {
					 txtbox1->Text = "Election Name: " + elec_name + "\n" + "Election Results have been announced!\n";

				 }

				 int x = 10;
				 int y = 10 + 122*(i-1);
				 btn_result->Location = System::Drawing::Point(370, y + 15);
				 txtbox1->Location = System::Drawing::Point(x, y);

				 if (ongoing == "2")
				 {
					 this->Controls->Add(btn_result);
				 }
				 
				 this->Controls->Add(txtbox1);

				 txtbox1->ScrollToCaret();
				 txtbox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
				 txtbox1->Refresh();
				 btn_result->Click += gcnew System::EventHandler(this, &View_Public_Elections::btn_result_Click);
			 }

			 
			 private: System::Void btn_result_Click(System::Object ^  sender, System::EventArgs^  e) {
						  this->Controls->Clear();
						  System::Windows::Forms::Button ^ temp_btn = gcnew System::Windows::Forms::Button();
						  temp_btn = dynamic_cast<System::Windows::Forms::Button ^>(sender);
						  
						  //MessageBox::Show("chal raha hai sab !!");

						  // TODO - Calculate and show result
						  int val =  Convert::ToInt32(temp_btn->Name);

						  OleDbConnection ^ DB_Connection1 = gcnew OleDbConnection();
						  DB_Connection1->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";


						  DB_Connection1->Open();
						 // MessageBox::Show(temp);
						  String ^ InsertString = "SELECT * FROM Election_Information WHERE ID=" + val;

						  OleDbCommand ^ cmd = gcnew OleDbCommand(InsertString, DB_Connection1);
						  OleDbDataReader ^ reader1 = cmd->ExecuteReader();


						  if (reader1->HasRows)
						  {
							  while (reader1->Read() == true)
							  {
								  System::Windows::Forms::TextBox ^ txtbox2 = gcnew System::Windows::Forms::TextBox();
								  //System::Windows::Forms::Button ^ btn_result = gcnew System::Windows::Forms::Button();

								  txtbox2->Name = "TextBox";
								  txtbox2->Size = System::Drawing::Size(400, 400);
								  txtbox2->Multiline = true;
								  txtbox2->ReadOnly = true;
								  txtbox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
									  static_cast<System::Byte>(0)));
								  txtbox2->Text = reader1->GetString(1);
								  int x = 10;
								  int y = 2;
								  txtbox2->Location = System::Drawing::Point(x, y);
								  this->Controls->Add(txtbox2);

								  txtbox2->ScrollToCaret();
								  txtbox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
								  //txtbox2->Refresh();
							  }
						  }
						  else
						  {
							  MessageBox::Show("There has been no election of this kind");
						  }
						  reader1->Close();
						  DB_Connection1->Close();
						  /*OleDbConnection ^ DB_Connection2 = gcnew OleDbConnection();
						  DB_Connection2->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
						  DB_Connection2->Open();

						  String ^ query2 = "UPDATE Student_Information SET Approved = 'YES' WHERE Username = '" + name + "';" ;
						  OleDbCommand ^ cmd = gcnew OleDbCommand(query2, DB_Connection2);
						  cmd->ExecuteNonQuery();
						  DB_Connection2->Close();*/
						  //Form_Admin::btn_userrequest_Click();
						  //this->Controls->Clear();
						  //this->InitializeComponent();
						  //this->User_Control_User_Request_Load(e, e);
			}
				  
	};
}