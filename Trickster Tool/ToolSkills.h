#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>

namespace TOTool {
#pragma comment(lib, "user32.lib")
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class ToolSkills: public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Form^ Tool;

	public:
		ToolSkills(System::Windows::Forms::Form^ o)
		{
			Tool = o;
			InitializeComponent();
		}

	protected:
		~ToolSkills()
		{
			if (components)
			{
				delete components;
			}
		}
		
	private: System::Windows::Forms::Button^ buttonClearDelays;

	private: System::Windows::Forms::Label^ labelDelaySeconds;
	private: System::Windows::Forms::Label^ labelF3Key;
	private: System::Windows::Forms::Label^ labelF4Key;
	private: System::Windows::Forms::Label^ labelF5Key;
	private: System::Windows::Forms::Label^ labelF6Key;
	private: System::Windows::Forms::Label^ labelF7Key;
	private: System::Windows::Forms::Label^ labelF8Key;
	
	private: System::Windows::Forms::TextBox^ textBoxF3Delay;
	private: System::Windows::Forms::TextBox^ textBoxF4Delay;
	private: System::Windows::Forms::TextBox^ textBoxF5Delay;
	private: System::Windows::Forms::TextBox^ textBoxF6Delay;
	private: System::Windows::Forms::TextBox^ textBoxF7Delay;
	private: System::Windows::Forms::TextBox^ textBoxF8Delay;

	private: System::Windows::Forms::Timer^ timerCheckTextBoxes;

	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ToolSkills::typeid));
			this->labelF8Key = (gcnew System::Windows::Forms::Label());
			this->labelF7Key = (gcnew System::Windows::Forms::Label());
			this->textBoxF7Delay = (gcnew System::Windows::Forms::TextBox());
			this->textBoxF8Delay = (gcnew System::Windows::Forms::TextBox());
			this->labelF6Key = (gcnew System::Windows::Forms::Label());
			this->labelF5Key = (gcnew System::Windows::Forms::Label());
			this->textBoxF5Delay = (gcnew System::Windows::Forms::TextBox());
			this->textBoxF6Delay = (gcnew System::Windows::Forms::TextBox());
			this->labelF4Key = (gcnew System::Windows::Forms::Label());
			this->labelF3Key = (gcnew System::Windows::Forms::Label());
			this->textBoxF3Delay = (gcnew System::Windows::Forms::TextBox());
			this->textBoxF4Delay = (gcnew System::Windows::Forms::TextBox());
			this->labelDelaySeconds = (gcnew System::Windows::Forms::Label());
			this->buttonClearDelays = (gcnew System::Windows::Forms::Button());
			this->timerCheckTextBoxes = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// labelF8Key
			// 
			this->labelF8Key->AutoSize = true;
			this->labelF8Key->BackColor = System::Drawing::Color::Transparent;
			this->labelF8Key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelF8Key->ForeColor = System::Drawing::Color::White;
			this->labelF8Key->Location = System::Drawing::Point(172, 87);
			this->labelF8Key->Name = L"labelF8Key";
			this->labelF8Key->Size = System::Drawing::Size(46, 13);
			this->labelF8Key->TabIndex = 195;
			this->labelF8Key->Text = L"F8 Key";
			// 
			// labelF7Key
			// 
			this->labelF7Key->AutoSize = true;
			this->labelF7Key->BackColor = System::Drawing::Color::Transparent;
			this->labelF7Key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelF7Key->ForeColor = System::Drawing::Color::White;
			this->labelF7Key->Location = System::Drawing::Point(172, 59);
			this->labelF7Key->Name = L"labelF7Key";
			this->labelF7Key->Size = System::Drawing::Size(46, 13);
			this->labelF7Key->TabIndex = 194;
			this->labelF7Key->Text = L"F7 Key";
			// 
			// textBoxF7Delay
			// 
			this->textBoxF7Delay->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8));
			this->textBoxF7Delay->Location = System::Drawing::Point(115, 55);
			this->textBoxF7Delay->MaxLength = 3;
			this->textBoxF7Delay->Name = L"textBoxF7Delay";
			this->textBoxF7Delay->Size = System::Drawing::Size(51, 22);
			this->textBoxF7Delay->TabIndex = 191;
			// 
			// textBoxF8Delay
			// 
			this->textBoxF8Delay->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8));
			this->textBoxF8Delay->Location = System::Drawing::Point(115, 83);
			this->textBoxF8Delay->MaxLength = 3;
			this->textBoxF8Delay->Name = L"textBoxF8Delay";
			this->textBoxF8Delay->Size = System::Drawing::Size(51, 22);
			this->textBoxF8Delay->TabIndex = 193;
			// 
			// labelF6Key
			// 
			this->labelF6Key->AutoSize = true;
			this->labelF6Key->BackColor = System::Drawing::Color::Transparent;
			this->labelF6Key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelF6Key->ForeColor = System::Drawing::Color::White;
			this->labelF6Key->Location = System::Drawing::Point(172, 31);
			this->labelF6Key->Name = L"labelF6Key";
			this->labelF6Key->Size = System::Drawing::Size(46, 13);
			this->labelF6Key->TabIndex = 189;
			this->labelF6Key->Text = L"F6 Key";
			// 
			// labelF5Key
			// 
			this->labelF5Key->AutoSize = true;
			this->labelF5Key->BackColor = System::Drawing::Color::Transparent;
			this->labelF5Key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelF5Key->ForeColor = System::Drawing::Color::White;
			this->labelF5Key->Location = System::Drawing::Point(12, 87);
			this->labelF5Key->Name = L"labelF5Key";
			this->labelF5Key->Size = System::Drawing::Size(46, 13);
			this->labelF5Key->TabIndex = 188;
			this->labelF5Key->Text = L"F5 Key";
			// 
			// textBoxF5Delay
			// 
			this->textBoxF5Delay->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8));
			this->textBoxF5Delay->Location = System::Drawing::Point(64, 83);
			this->textBoxF5Delay->MaxLength = 3;
			this->textBoxF5Delay->Name = L"textBoxF5Delay";
			this->textBoxF5Delay->Size = System::Drawing::Size(51, 22);
			this->textBoxF5Delay->TabIndex = 185;
			// 
			// textBoxF6Delay
			// 
			this->textBoxF6Delay->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8));
			this->textBoxF6Delay->Location = System::Drawing::Point(115, 27);
			this->textBoxF6Delay->MaxLength = 3;
			this->textBoxF6Delay->Name = L"textBoxF6Delay";
			this->textBoxF6Delay->Size = System::Drawing::Size(51, 22);
			this->textBoxF6Delay->TabIndex = 187;
			// 
			// labelF4Key
			// 
			this->labelF4Key->AutoSize = true;
			this->labelF4Key->BackColor = System::Drawing::Color::Transparent;
			this->labelF4Key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelF4Key->ForeColor = System::Drawing::Color::White;
			this->labelF4Key->Location = System::Drawing::Point(12, 59);
			this->labelF4Key->Name = L"labelF4Key";
			this->labelF4Key->Size = System::Drawing::Size(46, 13);
			this->labelF4Key->TabIndex = 183;
			this->labelF4Key->Text = L"F4 Key";
			// 
			// labelF3Key
			// 
			this->labelF3Key->AutoSize = true;
			this->labelF3Key->BackColor = System::Drawing::Color::Transparent;
			this->labelF3Key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelF3Key->ForeColor = System::Drawing::Color::White;
			this->labelF3Key->Location = System::Drawing::Point(12, 31);
			this->labelF3Key->Name = L"labelF3Key";
			this->labelF3Key->Size = System::Drawing::Size(46, 13);
			this->labelF3Key->TabIndex = 182;
			this->labelF3Key->Text = L"F3 Key";
			// 
			// textBoxF3Delay
			// 
			this->textBoxF3Delay->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8));
			this->textBoxF3Delay->Location = System::Drawing::Point(64, 27);
			this->textBoxF3Delay->MaxLength = 3;
			this->textBoxF3Delay->Name = L"textBoxF3Delay";
			this->textBoxF3Delay->Size = System::Drawing::Size(51, 22);
			this->textBoxF3Delay->TabIndex = 179;
			// 
			// textBoxF4Delay
			// 
			this->textBoxF4Delay->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8));
			this->textBoxF4Delay->Location = System::Drawing::Point(64, 55);
			this->textBoxF4Delay->MaxLength = 3;
			this->textBoxF4Delay->Name = L"textBoxF4Delay";
			this->textBoxF4Delay->Size = System::Drawing::Size(51, 22);
			this->textBoxF4Delay->TabIndex = 181;
			// 
			// labelDelaySeconds
			// 
			this->labelDelaySeconds->AutoSize = true;
			this->labelDelaySeconds->BackColor = System::Drawing::Color::Transparent;
			this->labelDelaySeconds->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDelaySeconds->ForeColor = System::Drawing::Color::White;
			this->labelDelaySeconds->Location = System::Drawing::Point(71, 9);
			this->labelDelaySeconds->Name = L"labelDelaySeconds";
			this->labelDelaySeconds->Size = System::Drawing::Size(92, 13);
			this->labelDelaySeconds->TabIndex = 178;
			this->labelDelaySeconds->Text = L"Delay Seconds";
			// 
			// buttonClearDelays
			// 
			this->buttonClearDelays->Location = System::Drawing::Point(78, 111);
			this->buttonClearDelays->Name = L"buttonClearDelays";
			this->buttonClearDelays->Size = System::Drawing::Size(75, 23);
			this->buttonClearDelays->TabIndex = 196;
			this->buttonClearDelays->Text = L"Clear";
			this->buttonClearDelays->UseVisualStyleBackColor = true;
			this->buttonClearDelays->Click += gcnew System::EventHandler(this, &ToolSkills::buttonClearDelays_Click);
			// 
			// timerCheckTextBoxes
			// 
			this->timerCheckTextBoxes->Enabled = true;
			this->timerCheckTextBoxes->Interval = 500;
			this->timerCheckTextBoxes->Tick += gcnew System::EventHandler(this, &ToolSkills::timerCheckTextBoxes_Tick);
			// 
			// ToolSkills
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(230, 140);
			this->Controls->Add(this->buttonClearDelays);
			this->Controls->Add(this->labelF8Key);
			this->Controls->Add(this->labelF7Key);
			this->Controls->Add(this->textBoxF7Delay);
			this->Controls->Add(this->textBoxF8Delay);
			this->Controls->Add(this->labelF6Key);
			this->Controls->Add(this->labelF5Key);
			this->Controls->Add(this->textBoxF5Delay);
			this->Controls->Add(this->textBoxF6Delay);
			this->Controls->Add(this->labelF4Key);
			this->Controls->Add(this->labelF3Key);
			this->Controls->Add(this->textBoxF3Delay);
			this->Controls->Add(this->textBoxF4Delay);
			this->Controls->Add(this->labelDelaySeconds);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ToolSkills";
			this->ShowInTaskbar = false;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ToolSkills::ToolSkills_FormClosing);
			this->Load += gcnew System::EventHandler(this, &ToolSkills::ToolSkills_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ToolSkills::ToolSkills_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ToolSkills::ToolSkills_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ToolSkills::ToolSkills_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: int tab;
		public: int * skillTimesPointer = new int[6];

		// Mouse Click and Drag Function
		private: bool mouseDown;
		private: Point lastLocation;

		private: Void ToolSkills_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			mouseDown = true;
			lastLocation = e->Location;
		}

		private: Void ToolSkills_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			
			if (mouseDown) {
				this->Location = Point(
					(this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y) + e->Y);

				this->Update();
			}
		}

		private: Void ToolSkills_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			mouseDown = false;
		}

		// Hide Instead of Close form on user close
		private: System::Void ToolSkills_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
			
			if (e->CloseReason == CloseReason::UserClosing)
			{
				e->Cancel = true;
				Hide();
			}
		}

		// Start TextBox Records
		// Records the TextBox Records after Validation
		private: System::Void RecordValidateTB(TextBox^ tb, int iter) {

			if (!String::IsNullOrEmpty(tb->Text)) {
				int parsedValue;

				if (Int32::TryParse(tb->Text, OUT parsedValue) && parsedValue <= 999 && parsedValue >= 1) {

					
					skillTimesPointer[iter] = parsedValue;
					

				}
				else {
					tb->Text = "";
					MessageBox::Show("You need to enter a number between 1 and 999");
					return;
				}
			}
			else {
				if (skillTimesPointer[iter] != -1) {
					skillTimesPointer[iter] = -1;
				}
			}

			return;
		}

		// TextBox Timer to update, record, and validate values
		private: System::Void timerCheckTextBoxes_Tick(System::Object^ sender, System::EventArgs^ e) {
			RecordValidateTB(textBoxF3Delay, 0);
			RecordValidateTB(textBoxF4Delay, 1);
			RecordValidateTB(textBoxF5Delay, 2);
			RecordValidateTB(textBoxF6Delay, 3);
			RecordValidateTB(textBoxF7Delay, 4);
			RecordValidateTB(textBoxF8Delay, 5);
		}

		// Clear the textBoxs and passed delay values
		private: System::Void buttonClearDelays_Click(System::Object^ sender, System::EventArgs^ e) {
		
			textBoxF3Delay->Text = "";
			textBoxF4Delay->Text = "";
			textBoxF5Delay->Text = "";
			textBoxF6Delay->Text = "";
			textBoxF7Delay->Text = "";
			textBoxF8Delay->Text = "";

		}

		// Load Defualts
		private: System::Void ToolSkills_Load(System::Object^ sender, System::EventArgs^ e) {
			
			this->Text = "Skill Tab " + tab;

		}
};
}
