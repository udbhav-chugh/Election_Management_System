#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Election_Management_System {

	/// <summary>
	/// Summary for User_Control_Login
	/// </summary>
	public ref class User_Control_Login : public System::Windows::Forms::UserControl
	{
	public:
		User_Control_Login(void)
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
		~User_Control_Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_login;
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
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_login
			// 
			this->btn_login->Location = System::Drawing::Point(232, 413);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(216, 47);
			this->btn_login->TabIndex = 0;
			this->btn_login->Text = L"Login";
			this->btn_login->UseVisualStyleBackColor = true;
			// 
			// User_Control_Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btn_login);
			this->Name = L"User_Control_Login";
			this->Size = System::Drawing::Size(767, 604);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
