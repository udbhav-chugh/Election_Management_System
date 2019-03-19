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
	/// Summary for User_Control_Delete_User
	/// </summary>
	public ref class User_Control_Delete_User : public System::Windows::Forms::UserControl
	{
	public:
		User_Control_Delete_User(void)
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
		~User_Control_Delete_User()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_delete;
	protected: 
	private: System::Windows::Forms::TextBox^  txt_delete;
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
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->txt_delete = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_delete
			// 
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_delete->Location = System::Drawing::Point(566, 212);
			this->btn_delete->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(154, 38);
			this->btn_delete->TabIndex = 5;
			this->btn_delete->Text = L"Delete";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &User_Control_Delete_User::btn_delete_Click);
			// 
			// txt_delete
			// 
			this->txt_delete->Location = System::Drawing::Point(259, 222);
			this->txt_delete->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txt_delete->Name = L"txt_delete";
			this->txt_delete->Size = System::Drawing::Size(219, 26);
			this->txt_delete->TabIndex = 4;
			this->txt_delete->TextChanged += gcnew System::EventHandler(this, &User_Control_Delete_User::txt_delete_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(113, 224);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 21);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Username ";
			this->label1->Click += gcnew System::EventHandler(this, &User_Control_Delete_User::label1_Click);
			// 
			// User_Control_Delete_User
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->txt_delete);
			this->Controls->Add(this->label1);
			this->Name = L"User_Control_Delete_User";
			this->Size = System::Drawing::Size(863, 755);
			this->Load += gcnew System::EventHandler(this, &User_Control_Delete_User::User_Control_Delete_User_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_delete_Click(System::Object^  sender, System::EventArgs^  e) {

				 String ^ username =  txt_delete->Text;
				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Election_Management_System.accdb";
				 DB_Connection->Open();
				 String ^ query = " SELECT * FROM Student_Information WHERE Username = '" + username + "' AND Approved ='YES';";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(query, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();

				 int flag1 = 0;
				 while(reader->Read() == true){

					 flag1 = 1;
				 }
				 DB_Connection->Close();

				 if(flag1 == 1){
					 DB_Connection->Open();
					 String ^ query2 = "DELETE FROM Student_Information WHERE Username = '" + username + "' AND Approved = 'YES'";
					 OleDbCommand ^ cmd = gcnew OleDbCommand(query2, DB_Connection);
					 cmd->ExecuteNonQuery();
					 MessageBox::Show("The Student is Deleted");
					 DB_Connection->Close();

				 }
				 else{
					 MessageBox::Show("The Student doesn't exist");
				 }


			 }
	private: System::Void txt_delete_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void User_Control_Delete_User_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
