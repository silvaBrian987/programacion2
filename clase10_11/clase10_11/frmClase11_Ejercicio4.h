#pragma once

namespace clase10_11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmClase11_Ejercicio4
	/// </summary>
	public ref class frmClase11_Ejercicio4 : public System::Windows::Forms::Form
	{
	public:
		frmClase11_Ejercicio4(void)
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
		~frmClase11_Ejercicio4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->panel1);
			this->groupBox1->Location = System::Drawing::Point(16, 16);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(344, 120);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->progressBar1);
			this->panel1->Location = System::Drawing::Point(16, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(312, 80);
			this->panel1->TabIndex = 0;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(200, 16);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 23);
			this->progressBar1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(104, 16);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(80, 43);
			this->listBox1->TabIndex = 2;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(16, 16);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(55, 13);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"linkLabel1";
			// 
			// frmClase11_Ejercicio4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(367, 147);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmClase11_Ejercicio4";
			this->Text = L"frmClase11_Ejercicio4";
			this->groupBox1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
