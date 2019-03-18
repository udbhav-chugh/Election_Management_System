#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


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
	private: System::Windows::Forms::ListBox^  lb_nominee;
	private: System::Windows::Forms::Button^  btn_nominee;
	private: System::Windows::Forms::TextBox^  txt_nominee;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lb_nominee = (gcnew System::Windows::Forms::ListBox());
			this->btn_nominee = (gcnew System::Windows::Forms::Button());
			this->txt_nominee = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 109);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nominees";
			// 
			// lb_nominee
			// 
			this->lb_nominee->FormattingEnabled = true;
			this->lb_nominee->ItemHeight = 16;
			this->lb_nominee->Location = System::Drawing::Point(172, 126);
			this->lb_nominee->Name = L"lb_nominee";
			this->lb_nominee->Size = System::Drawing::Size(333, 84);
			this->lb_nominee->TabIndex = 1;
			// 
			// btn_nominee
			// 
			this->btn_nominee->Location = System::Drawing::Point(659, 142);
			this->btn_nominee->Name = L"btn_nominee";
			this->btn_nominee->Size = System::Drawing::Size(137, 23);
			this->btn_nominee->TabIndex = 2;
			this->btn_nominee->Text = L"Add Nominee";
			this->btn_nominee->UseVisualStyleBackColor = true;
			this->btn_nominee->Click += gcnew System::EventHandler(this, &User_Control_Nominee::btn_nominee_Click);
			// 
			// txt_nominee
			// 
			this->txt_nominee->Location = System::Drawing::Point(528, 142);
			this->txt_nominee->Name = L"txt_nominee";
			this->txt_nominee->Size = System::Drawing::Size(100, 22);
			this->txt_nominee->TabIndex = 3;
			// 
			// User_Control_Nominee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->txt_nominee);
			this->Controls->Add(this->btn_nominee);
			this->Controls->Add(this->lb_nominee);
			this->Controls->Add(this->label1);
			this->Name = L"User_Control_Nominee";
			this->Size = System::Drawing::Size(818, 722);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_nominee_Click(System::Object^  sender, System::EventArgs^  e) {
		/*if(String::Compare(cmb_posts->Text,"")==0)
		{
			MessageBox::Show("No Post selected");
			txt_nominee->Clear();
			return;
		}
		if(String::Compare(txt_nominee->Text,"")==0)
		{
			MessageBox::Show("Add Nominee first");
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
			String^ selectString2 = "SELECT * FROM Nominees_Information WHERE Username='"+str+"' AND Approved='YES'";
		}
		else
		{
			MessageBox::Show("Invalid Username");
		}*/
			 }
	};
}
