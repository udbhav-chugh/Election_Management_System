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
	/// Summary for User_Control_Delete_Election
	/// </summary>
	public ref class User_Control_Delete_Election : public System::Windows::Forms::UserControl
	{
	public:
		User_Control_Delete_Election(void)
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
		~User_Control_Delete_Election()
		{
			if (components)
			{
				delete components;
			}
		}

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
			// User_Control_Delete_Election
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Name = L"User_Control_Delete_Election";
			this->Size = System::Drawing::Size(863, 755);
			this->Load += gcnew System::EventHandler(this, &User_Control_Delete_Election::User_Control_Delete_Election_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void User_Control_Delete_Election_Load(System::Object^  sender, System::EventArgs^  e) {
				 DateTime dat = DateTime::Now;
				 //String ^ curDate =dat->ToString("yyyy-MM-dd H:m:s") ;
				 MessageBox::Show(Convert::ToString(dat));
			 }
	};
}
