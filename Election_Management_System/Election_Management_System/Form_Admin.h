#pragma once

namespace Election_Management_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Admin
	/// </summary>
	public ref class Form_Admin : public System::Windows::Forms::Form
	{
	public:
		Form_Admin(void)
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
		~Form_Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_deleteuser;

	private: System::Windows::Forms::Button^  btn_updateuser;

	private: System::Windows::Forms::Button^  btn_userrequest;
	private: System::Windows::Forms::Button^  btn_deleteelection;
	private: System::Windows::Forms::Button^  btn_electionrequest;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_userrequest = (gcnew System::Windows::Forms::Button());
			this->btn_updateuser = (gcnew System::Windows::Forms::Button());
			this->btn_deleteuser = (gcnew System::Windows::Forms::Button());
			this->btn_electionrequest = (gcnew System::Windows::Forms::Button());
			this->btn_deleteelection = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btn_deleteelection);
			this->panel1->Controls->Add(this->btn_electionrequest);
			this->panel1->Controls->Add(this->btn_deleteuser);
			this->panel1->Controls->Add(this->btn_updateuser);
			this->panel1->Controls->Add(this->btn_userrequest);
			this->panel1->Location = System::Drawing::Point(2, 146);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(267, 755);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(269, 146);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(863, 755);
			this->panel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(486, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Admin Portal";
			this->label1->Click += gcnew System::EventHandler(this, &Form_Admin::label1_Click);
			// 
			// btn_userrequest
			// 
			this->btn_userrequest->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_userrequest->Location = System::Drawing::Point(49, 38);
			this->btn_userrequest->Name = L"btn_userrequest";
			this->btn_userrequest->Size = System::Drawing::Size(163, 86);
			this->btn_userrequest->TabIndex = 0;
			this->btn_userrequest->Text = L"User Requests";
			this->btn_userrequest->UseVisualStyleBackColor = true;
			this->btn_userrequest->Click += gcnew System::EventHandler(this, &Form_Admin::btn_userrequest_Click);
			// 
			// btn_updateuser
			// 
			this->btn_updateuser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_updateuser->Location = System::Drawing::Point(54, 149);
			this->btn_updateuser->Name = L"btn_updateuser";
			this->btn_updateuser->Size = System::Drawing::Size(157, 86);
			this->btn_updateuser->TabIndex = 1;
			this->btn_updateuser->Text = L"Update User Info";
			this->btn_updateuser->UseVisualStyleBackColor = true;
			// 
			// btn_deleteuser
			// 
			this->btn_deleteuser->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_deleteuser->Location = System::Drawing::Point(55, 259);
			this->btn_deleteuser->Name = L"btn_deleteuser";
			this->btn_deleteuser->Size = System::Drawing::Size(157, 86);
			this->btn_deleteuser->TabIndex = 2;
			this->btn_deleteuser->Text = L"Delete User";
			this->btn_deleteuser->UseVisualStyleBackColor = true;
			// 
			// btn_electionrequest
			// 
			this->btn_electionrequest->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_electionrequest->Location = System::Drawing::Point(55, 372);
			this->btn_electionrequest->Name = L"btn_electionrequest";
			this->btn_electionrequest->Size = System::Drawing::Size(157, 86);
			this->btn_electionrequest->TabIndex = 3;
			this->btn_electionrequest->Text = L"Election Requests";
			this->btn_electionrequest->UseVisualStyleBackColor = true;
			// 
			// btn_deleteelection
			// 
			this->btn_deleteelection->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_deleteelection->Location = System::Drawing::Point(55, 507);
			this->btn_deleteelection->Name = L"btn_deleteelection";
			this->btn_deleteelection->Size = System::Drawing::Size(157, 86);
			this->btn_deleteelection->TabIndex = 4;
			this->btn_deleteelection->Text = L"Delete Election";
			this->btn_deleteelection->UseVisualStyleBackColor = true;
			// 
			// Form_Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1132, 901);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Form_Admin";
			this->Text = L"Form_Admin";
			this->Load += gcnew System::EventHandler(this, &Form_Admin::Form_Admin_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form_Admin_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btn_userrequest_Click(System::Object^  sender, System::EventArgs^  e) {

				 
			 }
};
}
