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
	/// Summary for User_Control_Nominee
	/// </summary>
	public ref class User_Control_Nominee : public System::Windows::Forms::UserControl
	{
	public:
		User_Control_Nominee(void)
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
		~User_Control_Nominee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  cmb_post;

	private: System::Windows::Forms::CheckedListBox^  lb_post;

	private: System::Windows::Forms::Button^  btn_add_nominee;
	private: System::Windows::Forms::TextBox^  txt_nominee;
	private: System::Windows::Forms::Button^  btn_delete_nominee;
	private: System::Windows::Forms::Button^  not_approved;




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
			this->cmb_post = (gcnew System::Windows::Forms::ComboBox());
			this->lb_post = (gcnew System::Windows::Forms::CheckedListBox());
			this->btn_add_nominee = (gcnew System::Windows::Forms::Button());
			this->txt_nominee = (gcnew System::Windows::Forms::TextBox());
			this->btn_delete_nominee = (gcnew System::Windows::Forms::Button());
			this->not_approved = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(90, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Posts";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(93, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nominees";
			// 
			// cmb_post
			// 
			this->cmb_post->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmb_post->FormattingEnabled = true;
			this->cmb_post->Location = System::Drawing::Point(199, 74);
			this->cmb_post->Name = L"cmb_post";
			this->cmb_post->Size = System::Drawing::Size(302, 24);
			this->cmb_post->TabIndex = 2;
			this->cmb_post->SelectedIndexChanged += gcnew System::EventHandler(this, &User_Control_Nominee::cmb_post_SelectedIndexChanged);
			// 
			// lb_post
			// 
			this->lb_post->FormattingEnabled = true;
			this->lb_post->Location = System::Drawing::Point(199, 153);
			this->lb_post->Name = L"lb_post";
			this->lb_post->Size = System::Drawing::Size(302, 89);
			this->lb_post->TabIndex = 3;
			// 
			// btn_add_nominee
			// 
			this->btn_add_nominee->Location = System::Drawing::Point(592, 200);
			this->btn_add_nominee->Name = L"btn_add_nominee";
			this->btn_add_nominee->Size = System::Drawing::Size(145, 23);
			this->btn_add_nominee->TabIndex = 4;
			this->btn_add_nominee->Text = L"Add Nominee";
			this->btn_add_nominee->UseVisualStyleBackColor = true;
			this->btn_add_nominee->Click += gcnew System::EventHandler(this, &User_Control_Nominee::btn_add_nominee_Click);
			// 
			// txt_nominee
			// 
			this->txt_nominee->Location = System::Drawing::Point(592, 153);
			this->txt_nominee->Name = L"txt_nominee";
			this->txt_nominee->Size = System::Drawing::Size(122, 22);
			this->txt_nominee->TabIndex = 5;
			// 
			// btn_delete_nominee
			// 
			this->btn_delete_nominee->Location = System::Drawing::Point(592, 230);
			this->btn_delete_nominee->Name = L"btn_delete_nominee";
			this->btn_delete_nominee->Size = System::Drawing::Size(174, 23);
			this->btn_delete_nominee->TabIndex = 6;
			this->btn_delete_nominee->Text = L"Delete Nominees";
			this->btn_delete_nominee->UseVisualStyleBackColor = true;
			this->btn_delete_nominee->Click += gcnew System::EventHandler(this, &User_Control_Nominee::btn_delete_nominee_Click);
			// 
			// not_approved
			// 
			this->not_approved->Location = System::Drawing::Point(16, 340);
			this->not_approved->Name = L"not_approved";
			this->not_approved->Size = System::Drawing::Size(781, 71);
			this->not_approved->TabIndex = 7;
			this->not_approved->Text = L"Election is not approved yet";
			this->not_approved->UseVisualStyleBackColor = true;
			// 
			// User_Control_Nominee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->not_approved);
			this->Controls->Add(this->btn_delete_nominee);
			this->Controls->Add(this->txt_nominee);
			this->Controls->Add(this->btn_add_nominee);
			this->Controls->Add(this->lb_post);
			this->Controls->Add(this->cmb_post);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"User_Control_Nominee";
			this->Size = System::Drawing::Size(818, 722);
			this->Load += gcnew System::EventHandler(this, &User_Control_Nominee::User_Control_Nominee_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void User_Control_Nominee_Load(System::Object^  sender, System::EventArgs^  e) {
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";

				 DB_Connection->Open();
				 int election_id=4;
				 String^ selectString ="Select * FROM Election_Information WHERE ID="+election_id;
				 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 String^ approved="";
				 String^ posts="";
				 if(reader->Read())
				 {
					 approved=reader->GetString(6);
					 posts=reader->GetString(5);

				 }
				 if(String::Compare(approved,"YES"))
				 {
					not_approved->Visible=true;
					btn_add_nominee->Visible=false;
					btn_delete_nominee->Visible=false;
					lb_post->Visible=false;
					label1->Visible=false;
					label2->Visible=false;
					txt_nominee->Visible=false;
					cmb_post->Visible=false;
					return;
				 }
					 not_approved->Visible=false;
					 String^ post="";
					 for(int i=1;i<posts->Length;i++)
					 {
						 if(posts[i]==',')
						 {
							 cmb_post->Items->Add(post);
							 post="";
							 continue;
						 }
						 post+=posts[i];
					 }
				
			 }
private: System::Void btn_add_nominee_Click(System::Object^  sender, System::EventArgs^  e) {
			 int election_id=4;
			 if(String::Compare(txt_nominee->Text,"")==0)
			 {
				 MessageBox::Show("Write Nominee's username");
				 txt_nominee->Clear();
				 return;
			 }
			 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
			 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
			 DB_Connection->Open();

			 String^ str = txt_nominee->Text;
			 String^ selectString = "SELECT * FROM Student_Information WHERE Username='"+str+"' AND Approved='YES'";
			 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);
			 OleDbDataReader ^ reader = cmd->ExecuteReader();
			 if(reader->Read())
			 {
				 if(lb_post->Items->Contains(reader->GetString(1)))
				 {
					 MessageBox::Show("Username already added");
					 txt_nominee->Clear();
					 return;
				 }
				 String^ selectString = "SELECT * FROM Nominees_Information WHERE Election_ID="+election_id;
				 OleDbCommand ^ cmd3 = gcnew OleDbCommand(selectString, DB_Connection);
				 OleDbDataReader ^ reader3 = cmd3->ExecuteReader();
				 while(reader3->Read())
				 {
					if(String::Compare(reader3->GetString(2),txt_nominee->Text)==0)
					{
						MessageBox::Show("This user is already contesting for another post in this election");
						return;
					}
				 }
				 int votes=0;
				 String^ insertString = "INSERT INTO Nominees_Information ([Election_ID],[Election_Post],[Nominee_Username],[Agenda],[Votes],[Update_Allowed]) VALUES(" + election_id + ", '" + cmb_post->Text + "', '" + txt_nominee->Text + "','" + "*" + "'," + votes + ",'YES')";
				 OleDbCommand ^ cmd2 = gcnew OleDbCommand(insertString, DB_Connection);
				 OleDbDataReader ^ reader2 = cmd2->ExecuteReader();
				 reader2->Close();
				 lb_post->Items->Add(txt_nominee->Text);
				 txt_nominee->Clear();
			 }
			 else
			 {
				 MessageBox::Show("Invalid Username");
				 txt_nominee->Clear();
				 return;
			 }
			 reader->Close();
			 DB_Connection->Close();
		 }
private: System::Void btn_delete_nominee_Click(System::Object^  sender, System::EventArgs^  e) {
			 int election_id=4;
			 for(int x=lb_post->CheckedItems->Count-1; x>=0  ; x--)
			 {
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
				 DB_Connection->Open();
				 String^ deleteString="DELETE FROM Nominees_Information WHERE Election_ID="+election_id+" AND Election_Post='"+cmb_post->Text+"' AND Nominee_Username='"+lb_post->CheckedItems[x]+"'";
				  OleDbCommand ^ cmd = gcnew OleDbCommand(deleteString, DB_Connection);
				  cmd->ExecuteNonQuery();
				  DB_Connection->Close();
				 lb_post->Items->Remove(lb_post->CheckedItems[x]);
			 }
		 }
private: System::Void cmb_post_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 lb_post->Items->Clear();
			 int election_id=4;
			 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
			 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
			 DB_Connection->Open();
			 String^ selectString = "SELECT * FROM Nominees_Information WHERE Election_ID="+election_id+" AND Election_Post='" + cmb_post->Text + "'" ;
			 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);
			 OleDbDataReader ^ reader = cmd->ExecuteReader();
			 while(reader->Read())
			 {
				 lb_post->Items->Add(reader->GetString(2));
			 }
			 DB_Connection->Close();
		 }
};
}
