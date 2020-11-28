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

	public ref class ToolDev : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::Form^ Tool;
	public:
		ToolDev(System::Windows::Forms::Form^ o)
		{
			Tool = o;
			InitializeComponent();
		}

	protected:
		~ToolDev()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ labelScreenRes;
	private: System::Windows::Forms::Label^ labelXSep;
	private: System::Windows::Forms::Label^ labelRevision;
	private: System::Windows::Forms::Label^ labelPlayerX;
	private: System::Windows::Forms::Label^ labelPlayerY;
	private: System::Windows::Forms::Label^ labelMouseX;
	private: System::Windows::Forms::Label^ labelMouseY;
	private: System::Windows::Forms::Label^ labelTargetX;
	private: System::Windows::Forms::Label^ labelTargetY;

	public: System::Windows::Forms::Label^ labelScreenResX;
	public: System::Windows::Forms::Label^ labelScreenResY;
	public: System::Windows::Forms::Label^ labelPlayerXPos;
	public: System::Windows::Forms::Label^ labelPlayerYPos;
	public: System::Windows::Forms::Label^ labelMouseXPos;
	public: System::Windows::Forms::Label^ labelMouseYPos;
	public: System::Windows::Forms::Label^ labelTargetYPos;
	public: System::Windows::Forms::Label^ labelTargetXPos;
	private: System::Windows::Forms::Label^ labelMapScreenX;
	public: System::Windows::Forms::Label^ labelMapScreenXPos;
	public: System::Windows::Forms::Label^ labelMapScreenYPos;
	private:
	public:

	public:

	private:

	private: System::Windows::Forms::Label^ labelMapScreenY;
	public:

	public:


	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ToolDev::typeid));
			this->labelScreenRes = (gcnew System::Windows::Forms::Label());
			this->labelXSep = (gcnew System::Windows::Forms::Label());
			this->labelScreenResX = (gcnew System::Windows::Forms::Label());
			this->labelScreenResY = (gcnew System::Windows::Forms::Label());
			this->labelRevision = (gcnew System::Windows::Forms::Label());
			this->labelPlayerX = (gcnew System::Windows::Forms::Label());
			this->labelPlayerXPos = (gcnew System::Windows::Forms::Label());
			this->labelPlayerYPos = (gcnew System::Windows::Forms::Label());
			this->labelPlayerY = (gcnew System::Windows::Forms::Label());
			this->labelMouseXPos = (gcnew System::Windows::Forms::Label());
			this->labelMouseYPos = (gcnew System::Windows::Forms::Label());
			this->labelMouseX = (gcnew System::Windows::Forms::Label());
			this->labelMouseY = (gcnew System::Windows::Forms::Label());
			this->labelTargetYPos = (gcnew System::Windows::Forms::Label());
			this->labelTargetXPos = (gcnew System::Windows::Forms::Label());
			this->labelTargetX = (gcnew System::Windows::Forms::Label());
			this->labelTargetY = (gcnew System::Windows::Forms::Label());
			this->labelMapScreenX = (gcnew System::Windows::Forms::Label());
			this->labelMapScreenXPos = (gcnew System::Windows::Forms::Label());
			this->labelMapScreenYPos = (gcnew System::Windows::Forms::Label());
			this->labelMapScreenY = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelScreenRes
			// 
			this->labelScreenRes->BackColor = System::Drawing::Color::White;
			this->labelScreenRes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScreenRes->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelScreenRes->Location = System::Drawing::Point(33, 145);
			this->labelScreenRes->Name = L"labelScreenRes";
			this->labelScreenRes->Size = System::Drawing::Size(114, 17);
			this->labelScreenRes->TabIndex = 177;
			this->labelScreenRes->Text = L"Screen Resolution";
			this->labelScreenRes->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelXSep
			// 
			this->labelXSep->BackColor = System::Drawing::Color::Transparent;
			this->labelXSep->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelXSep->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelXSep->Location = System::Drawing::Point(85, 163);
			this->labelXSep->Name = L"labelXSep";
			this->labelXSep->Size = System::Drawing::Size(13, 20);
			this->labelXSep->TabIndex = 176;
			this->labelXSep->Text = L"x";
			this->labelXSep->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelScreenResX
			// 
			this->labelScreenResX->BackColor = System::Drawing::Color::White;
			this->labelScreenResX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScreenResX->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelScreenResX->Location = System::Drawing::Point(6, 166);
			this->labelScreenResX->Name = L"labelScreenResX";
			this->labelScreenResX->Size = System::Drawing::Size(73, 14);
			this->labelScreenResX->TabIndex = 174;
			this->labelScreenResX->Text = L"ScreenResX";
			this->labelScreenResX->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelScreenResY
			// 
			this->labelScreenResY->BackColor = System::Drawing::Color::White;
			this->labelScreenResY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScreenResY->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelScreenResY->Location = System::Drawing::Point(104, 166);
			this->labelScreenResY->Name = L"labelScreenResY";
			this->labelScreenResY->Size = System::Drawing::Size(73, 14);
			this->labelScreenResY->TabIndex = 175;
			this->labelScreenResY->Text = L"ScreenResY";
			this->labelScreenResY->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelRevision
			// 
			this->labelRevision->AutoSize = true;
			this->labelRevision->BackColor = System::Drawing::Color::White;
			this->labelRevision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRevision->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelRevision->Location = System::Drawing::Point(-3, 194);
			this->labelRevision->Name = L"labelRevision";
			this->labelRevision->Size = System::Drawing::Size(63, 13);
			this->labelRevision->TabIndex = 172;
			this->labelRevision->Text = L"Rev 2.0.1";
			// 
			// labelPlayerX
			// 
			this->labelPlayerX->BackColor = System::Drawing::Color::White;
			this->labelPlayerX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPlayerX->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelPlayerX->Location = System::Drawing::Point(4, 52);
			this->labelPlayerX->Name = L"labelPlayerX";
			this->labelPlayerX->Size = System::Drawing::Size(76, 20);
			this->labelPlayerX->TabIndex = 166;
			this->labelPlayerX->Text = L"Player X: ";
			this->labelPlayerX->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelPlayerXPos
			// 
			this->labelPlayerXPos->BackColor = System::Drawing::Color::White;
			this->labelPlayerXPos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPlayerXPos->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelPlayerXPos->Location = System::Drawing::Point(86, 52);
			this->labelPlayerXPos->Name = L"labelPlayerXPos";
			this->labelPlayerXPos->Size = System::Drawing::Size(75, 20);
			this->labelPlayerXPos->TabIndex = 164;
			this->labelPlayerXPos->Text = L"PlayerXPos";
			this->labelPlayerXPos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelPlayerYPos
			// 
			this->labelPlayerYPos->BackColor = System::Drawing::Color::White;
			this->labelPlayerYPos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPlayerYPos->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelPlayerYPos->Location = System::Drawing::Point(86, 76);
			this->labelPlayerYPos->Name = L"labelPlayerYPos";
			this->labelPlayerYPos->Size = System::Drawing::Size(75, 20);
			this->labelPlayerYPos->TabIndex = 165;
			this->labelPlayerYPos->Text = L"PlayerYPos";
			this->labelPlayerYPos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelPlayerY
			// 
			this->labelPlayerY->BackColor = System::Drawing::Color::White;
			this->labelPlayerY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPlayerY->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelPlayerY->Location = System::Drawing::Point(4, 76);
			this->labelPlayerY->Name = L"labelPlayerY";
			this->labelPlayerY->Size = System::Drawing::Size(73, 20);
			this->labelPlayerY->TabIndex = 167;
			this->labelPlayerY->Text = L"Player Y:";
			this->labelPlayerY->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMouseXPos
			// 
			this->labelMouseXPos->BackColor = System::Drawing::Color::White;
			this->labelMouseXPos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMouseXPos->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelMouseXPos->Location = System::Drawing::Point(86, 4);
			this->labelMouseXPos->Name = L"labelMouseXPos";
			this->labelMouseXPos->Size = System::Drawing::Size(75, 20);
			this->labelMouseXPos->TabIndex = 168;
			this->labelMouseXPos->Text = L"MouseXPos";
			this->labelMouseXPos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMouseYPos
			// 
			this->labelMouseYPos->BackColor = System::Drawing::Color::White;
			this->labelMouseYPos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMouseYPos->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelMouseYPos->Location = System::Drawing::Point(86, 28);
			this->labelMouseYPos->Name = L"labelMouseYPos";
			this->labelMouseYPos->Size = System::Drawing::Size(75, 20);
			this->labelMouseYPos->TabIndex = 169;
			this->labelMouseYPos->Text = L"MouseYPos";
			this->labelMouseYPos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMouseX
			// 
			this->labelMouseX->BackColor = System::Drawing::Color::White;
			this->labelMouseX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMouseX->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelMouseX->Location = System::Drawing::Point(4, 4);
			this->labelMouseX->Name = L"labelMouseX";
			this->labelMouseX->Size = System::Drawing::Size(76, 20);
			this->labelMouseX->TabIndex = 170;
			this->labelMouseX->Text = L"Mouse X:";
			this->labelMouseX->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMouseY
			// 
			this->labelMouseY->BackColor = System::Drawing::Color::White;
			this->labelMouseY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMouseY->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelMouseY->Location = System::Drawing::Point(4, 28);
			this->labelMouseY->Name = L"labelMouseY";
			this->labelMouseY->Size = System::Drawing::Size(76, 20);
			this->labelMouseY->TabIndex = 171;
			this->labelMouseY->Text = L"Mouse Y: ";
			this->labelMouseY->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTargetYPos
			// 
			this->labelTargetYPos->BackColor = System::Drawing::Color::White;
			this->labelTargetYPos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTargetYPos->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelTargetYPos->Location = System::Drawing::Point(86, 121);
			this->labelTargetYPos->Name = L"labelTargetYPos";
			this->labelTargetYPos->Size = System::Drawing::Size(75, 17);
			this->labelTargetYPos->TabIndex = 179;
			this->labelTargetYPos->Text = L"TargetYPos";
			this->labelTargetYPos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTargetXPos
			// 
			this->labelTargetXPos->BackColor = System::Drawing::Color::White;
			this->labelTargetXPos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTargetXPos->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelTargetXPos->Location = System::Drawing::Point(86, 100);
			this->labelTargetXPos->Name = L"labelTargetXPos";
			this->labelTargetXPos->Size = System::Drawing::Size(75, 17);
			this->labelTargetXPos->TabIndex = 178;
			this->labelTargetXPos->Text = L"TargetXPos";
			this->labelTargetXPos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTargetX
			// 
			this->labelTargetX->BackColor = System::Drawing::Color::White;
			this->labelTargetX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTargetX->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelTargetX->Location = System::Drawing::Point(4, 97);
			this->labelTargetX->Name = L"labelTargetX";
			this->labelTargetX->Size = System::Drawing::Size(73, 20);
			this->labelTargetX->TabIndex = 180;
			this->labelTargetX->Text = L"Target X:";
			this->labelTargetX->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelTargetY
			// 
			this->labelTargetY->BackColor = System::Drawing::Color::White;
			this->labelTargetY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTargetY->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelTargetY->Location = System::Drawing::Point(4, 118);
			this->labelTargetY->Name = L"labelTargetY";
			this->labelTargetY->Size = System::Drawing::Size(73, 20);
			this->labelTargetY->TabIndex = 181;
			this->labelTargetY->Text = L"Target Y:";
			this->labelTargetY->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMapScreenX
			// 
			this->labelMapScreenX->BackColor = System::Drawing::Color::White;
			this->labelMapScreenX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMapScreenX->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelMapScreenX->Location = System::Drawing::Point(168, 53);
			this->labelMapScreenX->Name = L"labelMapScreenX";
			this->labelMapScreenX->Size = System::Drawing::Size(97, 20);
			this->labelMapScreenX->TabIndex = 184;
			this->labelMapScreenX->Text = L"Map Screen X:";
			this->labelMapScreenX->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMapScreenXPos
			// 
			this->labelMapScreenXPos->BackColor = System::Drawing::Color::White;
			this->labelMapScreenXPos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMapScreenXPos->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelMapScreenXPos->Location = System::Drawing::Point(271, 52);
			this->labelMapScreenXPos->Name = L"labelMapScreenXPos";
			this->labelMapScreenXPos->Size = System::Drawing::Size(75, 20);
			this->labelMapScreenXPos->TabIndex = 182;
			this->labelMapScreenXPos->Text = L"MapScreenX";
			this->labelMapScreenXPos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMapScreenYPos
			// 
			this->labelMapScreenYPos->BackColor = System::Drawing::Color::White;
			this->labelMapScreenYPos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMapScreenYPos->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelMapScreenYPos->Location = System::Drawing::Point(271, 77);
			this->labelMapScreenYPos->Name = L"labelMapScreenYPos";
			this->labelMapScreenYPos->Size = System::Drawing::Size(75, 20);
			this->labelMapScreenYPos->TabIndex = 183;
			this->labelMapScreenYPos->Text = L"MapScreenY";
			this->labelMapScreenYPos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMapScreenY
			// 
			this->labelMapScreenY->BackColor = System::Drawing::Color::White;
			this->labelMapScreenY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMapScreenY->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelMapScreenY->Location = System::Drawing::Point(168, 77);
			this->labelMapScreenY->Name = L"labelMapScreenY";
			this->labelMapScreenY->Size = System::Drawing::Size(97, 20);
			this->labelMapScreenY->TabIndex = 185;
			this->labelMapScreenY->Text = L"Map Screen Y :";
			this->labelMapScreenY->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ToolDev
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(349, 210);
			this->Controls->Add(this->labelMapScreenX);
			this->Controls->Add(this->labelMapScreenXPos);
			this->Controls->Add(this->labelMapScreenYPos);
			this->Controls->Add(this->labelMapScreenY);
			this->Controls->Add(this->labelTargetY);
			this->Controls->Add(this->labelTargetX);
			this->Controls->Add(this->labelTargetYPos);
			this->Controls->Add(this->labelTargetXPos);
			this->Controls->Add(this->labelScreenRes);
			this->Controls->Add(this->labelXSep);
			this->Controls->Add(this->labelScreenResX);
			this->Controls->Add(this->labelScreenResY);
			this->Controls->Add(this->labelRevision);
			this->Controls->Add(this->labelPlayerX);
			this->Controls->Add(this->labelPlayerXPos);
			this->Controls->Add(this->labelPlayerYPos);
			this->Controls->Add(this->labelPlayerY);
			this->Controls->Add(this->labelMouseXPos);
			this->Controls->Add(this->labelMouseYPos);
			this->Controls->Add(this->labelMouseX);
			this->Controls->Add(this->labelMouseY);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ToolDev";
			this->ShowInTaskbar = false;
			this->Text = L"Development Information";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ToolDev::ToolDev_FormClosing);
			this->Load += gcnew System::EventHandler(this, &ToolDev::ToolDev_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ToolDev::ToolDev_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ToolDev::ToolDev_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ToolDev::ToolDev_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Mouse Click and Drag Function
		private: bool mouseDown;
		private: Point lastLocation;

		private: Void ToolDev_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			mouseDown = true;
			lastLocation = e->Location;
		}

		private: Void ToolDev_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			
			if (mouseDown) {
				this->Location = Point(
					(this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y) + e->Y);

				this->Update();
			}
		}

		private: Void ToolDev_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			mouseDown = false;
		}
		
		//Hide Instead of Close form
		private: System::Void ToolDev_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
			
			if (e->CloseReason == CloseReason::UserClosing) {
				e->Cancel = true;
				Hide();
			}
		}

		// Load Form Defaults
		private: System::Void ToolDev_Load(System::Object^ sender, System::EventArgs^ e) {

		}

};
}
