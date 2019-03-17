#pragma once

namespace Election_Management_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form_Homepage
	/// </summary>
	public ref class Form_Homepage : public System::Windows::Forms::Form
	{
	public:
		Form_Homepage(void)
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
		~Form_Homepage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btn_logout;

	private: System::Windows::Forms::Button^  btn_update_agenda;
	private: System::Windows::Forms::Button^  btn_view_election;
	private: System::Windows::Forms::Button^  btn_create_election;
	private: System::Windows::Forms::Button^  btn_edit_info;
	private: System::Windows::Forms::Button^  btn_view_info;
	private: System::Windows::Forms::Panel^  panel2;
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
			this->btn_logout = (gcnew System::Windows::Forms::Button());
			this->btn_update_agenda = (gcnew System::Windows::Forms::Button());
			this->btn_view_election = (gcnew System::Windows::Forms::Button());
			this->btn_create_election = (gcnew System::Windows::Forms::Button());
			this->btn_edit_info = (gcnew System::Windows::Forms::Button());
			this->btn_view_info = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btn_logout);
			this->panel1->Controls->Add(this->btn_update_agenda);
			this->panel1->Controls->Add(this->btn_view_election);
			this->panel1->Controls->Add(this->btn_create_election);
			this->panel1->Controls->Add(this->btn_edit_info);
			this->panel1->Controls->Add(this->btn_view_info);
			this->panel1->Location = System::Drawing::Point(2, 118);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(237, 604);
			this->panel1->TabIndex = 0;
			// 
			// btn_logout
			// 
			this->btn_logout->Location = System::Drawing::Point(11, 472);
			this->btn_logout->Name = L"btn_logout";
			this->btn_logout->Size = System::Drawing::Size(194, 60);
			this->btn_logout->TabIndex = 6;
			this->btn_logout->Text = L"Logout";
			this->btn_logout->UseVisualStyleBackColor = true;
			// 
			// btn_update_agenda
			// 
			this->btn_update_agenda->Location = System::Drawing::Point(11, 398);
			this->btn_update_agenda->Name = L"btn_update_agenda";
			this->btn_update_agenda->Size = System::Drawing::Size(194, 68);
			this->btn_update_agenda->TabIndex = 4;
			this->btn_update_agenda->Text = L"Update Agenda";
			this->btn_update_agenda->UseVisualStyleBackColor = true;
			// 
			// btn_view_election
			// 
			this->btn_view_election->Location = System::Drawing::Point(11, 309);
			this->btn_view_election->Name = L"btn_view_election";
			this->btn_view_election->Size = System::Drawing::Size(194, 68);
			this->btn_view_election->TabIndex = 3;
			this->btn_view_election->Text = L"View Election";
			this->btn_view_election->UseVisualStyleBackColor = true;
			// 
			// btn_create_election
			// 
			this->btn_create_election->Location = System::Drawing::Point(11, 208);
			this->btn_create_election->Name = L"btn_create_election";
			this->btn_create_election->Size = System::Drawing::Size(194, 68);
			this->btn_create_election->TabIndex = 2;
			this->btn_create_election->Text = L"Create/Manage Election";
			this->btn_create_election->UseVisualStyleBackColor = true;
			// 
			// btn_edit_info
			// 
			this->btn_edit_info->Location = System::Drawing::Point(11, 129);
			this->btn_edit_info->Name = L"btn_edit_info";
			this->btn_edit_info->Size = System::Drawing::Size(194, 54);
			this->btn_edit_info->TabIndex = 1;
			this->btn_edit_info->Text = L"Edit Info";
			this->btn_edit_info->UseVisualStyleBackColor = true;
			// 
			// btn_view_info
			// 
			this->btn_view_info->Location = System::Drawing::Point(11, 48);
			this->btn_view_info->Name = L"btn_view_info";
			this->btn_view_info->Size = System::Drawing::Size(194, 64);
			this->btn_view_info->TabIndex = 0;
			this->btn_view_info->Text = L"View Info";
			this->btn_view_info->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(239, 117);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(767, 604);
			this->panel2->TabIndex = 1;
			// 
			// Form_Homepage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1006, 721);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Form_Homepage";
			this->Text = L"Form_Homepage";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
