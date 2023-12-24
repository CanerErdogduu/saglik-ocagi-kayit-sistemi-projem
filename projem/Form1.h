#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;





	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public: System::Windows::Forms::Timer^ timer1;
	private:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



	private: System::ComponentModel::IContainer^ components;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(46, 368);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 54);
			this->button1->TabIndex = 0;
			this->button1->Text = L"GÝRÝÞ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(254, 365);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 58);
			this->button2->TabIndex = 1;
			this->button2->Text = L"SÝL";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(32, 90);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(328, 32);
			this->textBox1->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(46, 159);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 48);
			this->button3->TabIndex = 3;
			this->button3->Text = L"1";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(149, 159);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 48);
			this->button4->TabIndex = 4;
			this->button4->Text = L"2";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(257, 159);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 53);
			this->button5->TabIndex = 5;
			this->button5->Text = L"3";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(46, 230);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 46);
			this->button6->TabIndex = 6;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(149, 228);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 48);
			this->button7->TabIndex = 7;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(254, 226);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(78, 50);
			this->button8->TabIndex = 8;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(46, 300);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 46);
			this->button9->TabIndex = 9;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(148, 300);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(76, 46);
			this->button10->TabIndex = 10;
			this->button10->Text = L"8";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(254, 300);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(78, 48);
			this->button11->TabIndex = 11;
			this->button11->Text = L"9";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(149, 367);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 55);
			this->button12->TabIndex = 12;
			this->button12->Text = L"0";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Location = System::Drawing::Point(-4, -2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(445, 486);
			this->panel1->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->ForeColor = System::Drawing::Color::Navy;
			this->label2->Location = System::Drawing::Point(100, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 19);
			this->label2->TabIndex = 17;
			this->label2->Text = L"TC KÝMLÝK NO ÝLE GÝRÝÞ YAPINIZ";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(268, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 21);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Saat ve Tarih";
			 
			 //pictureBox1
			
			this->pictureBox1->ImageLocation = L"C:\\Users\\Caner\\Desktop\\saðlýk.jpg";
			this->pictureBox1->Location = System::Drawing::Point(437, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(429, 483);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			
			// timer1
			 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(851, 475);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"Caner Hastane";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double bilgi = Convert::ToDouble(textBox1->Text);
		if (bilgi == 54640528486) {
			MessageBox::Show("Randevunuz Oluþturuldu\n prof dr. Halil Ay 2. kat 4 numarali oda");
			this->textBox1->Text = "";
		
		}
		else if (bilgi == 54709526132) {
			MessageBox::Show("Randevunuz Oluþturuldu\n uzman dr. Ahmet Tas 1. kat 2 numarali oda");
			this->textBox1->Text = "";
		}
		else if (bilgi == 12345678912) {
			MessageBox::Show("Randevunuz Oluþturuldu\n dr Hasan Tek 6. kat 4 numarali oda");
			this->textBox1->Text = "";
		}
		else {
			MessageBox::Show("Yanlýþ Giriþ Yaptýnýz!!!");
			this->textBox1->Text = "";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Clear();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->AppendText("1");
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("2");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("3");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("4");
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("5");
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("6");
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("7");
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("8");
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("9");
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->AppendText("0");
}
	
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime datetime = DateTime::Now;
	this->label1->Text = datetime.ToString();
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	
	DateTime datetime = DateTime();
	this->label1->Text = datetime.ToString();
	timer1->Start();
}
};
}
