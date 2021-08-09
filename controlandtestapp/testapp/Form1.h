#pragma once


namespace testapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: clickcount::clickcountControl^  clickcountControl1;
	private: clickcount::clickcountControl^  clickcountControl2;
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
			this->clickcountControl1 = (gcnew clickcount::clickcountControl());
			this->clickcountControl2 = (gcnew clickcount::clickcountControl());
			this->SuspendLayout();
			// 
			// clickcountControl1
			// 
			this->clickcountControl1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->clickcountControl1->ClickAnywhere = true;
			this->clickcountControl1->Location = System::Drawing::Point(12, 27);
			this->clickcountControl1->Name = L"clickcountControl1";
			this->clickcountControl1->Size = System::Drawing::Size(97, 73);
			this->clickcountControl1->TabIndex = 0;
			// 
			// clickcountControl2
			// 
			this->clickcountControl2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->clickcountControl2->ClickAnywhere = false;
			this->clickcountControl2->Location = System::Drawing::Point(12, 145);
			this->clickcountControl2->Name = L"clickcountControl2";
			this->clickcountControl2->Size = System::Drawing::Size(103, 81);
			this->clickcountControl2->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->clickcountControl2);
			this->Controls->Add(this->clickcountControl1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

