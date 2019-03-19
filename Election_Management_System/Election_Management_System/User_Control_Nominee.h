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
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Button^  btn_add_nominee;
	private: System::Windows::Forms::TextBox^  txt_nominee;
	private: System::Windows::Forms::Button^  btn_delete_nominee;


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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->btn_add_nominee = (gcnew System::Windows::Forms::Button());
			this->txt_nominee = (gcnew System::Windows::Forms::TextBox());
			this->btn_delete_nominee = (gcnew System::Windows::Forms::Button());
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
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(199, 74);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(302, 24);
			this->comboBox1->TabIndex = 2;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(199, 153);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(302, 89);
			this->checkedListBox1->TabIndex = 3;
			// 
			// btn_add_nominee
			// 
			this->btn_add_nominee->Location = System::Drawing::Point(592, 200);
			this->btn_add_nominee->Name = L"btn_add_nominee";
			this->btn_add_nominee->Size = System::Drawing::Size(145, 23);
			this->btn_add_nominee->TabIndex = 4;
			this->btn_add_nominee->Text = L"Add Nominee";
			this->btn_add_nominee->UseVisualStyleBackColor = true;
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
			// 
			// User_Control_Nominee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btn_delete_nominee);
			this->Controls->Add(this->txt_nominee);
			this->Controls->Add(this->btn_add_nominee);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"User_Control_Nominee";
			this->Size = System::Drawing::Size(818, 722);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
