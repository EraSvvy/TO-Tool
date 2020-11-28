#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <iostream>
#include "ToolSkills.h"
#include "ToolDev.h"
#include "ScanValue.h"
#include "AddyHandler.h"

#pragma region InformationObjects

GameStructure Game;

#pragma endregion Objects Containing Tool Information

namespace TOTool {
#pragma comment(lib, "user32.lib")
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;

	public ref class Tool : public System::Windows::Forms::Form {

	public:
		Tool(void) {
			InitializeComponent();
		}

	protected:
		~Tool() {
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ labelPlayerInfo;
	private: System::Windows::Forms::Label^ labelPlayerLevel;
	private: System::Windows::Forms::Label^ labelPlayerName;
	private: System::Windows::Forms::Label^ labelLevel;
	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::Label^ labelPlayerCurrentMP;
	private: System::Windows::Forms::Label^ labelPlayerCurrentHP;
	private: System::Windows::Forms::Label^ labelBetweenHPSign;
	private: System::Windows::Forms::Label^ labelPlayerMaxMP;
	private: System::Windows::Forms::Label^ labelBetweenMPSign;
	private: System::Windows::Forms::Label^ labelPlayerMaxHP;
	private: System::Windows::Forms::Label^ labelMP;
	private: System::Windows::Forms::Label^ labelHP;
	private: System::Windows::Forms::Label^ labelItemDetect;
	private: System::Windows::Forms::Label^ labelNoReload;
	private: System::Windows::Forms::Label^ labelGunCrit;
	private: System::Windows::Forms::Label^ labelF2Key;
	private: System::Windows::Forms::Label^ labelF1Key;
	private: System::Windows::Forms::Label^ labelAutoHP;
	private: System::Windows::Forms::Label^ labelAutoMPPercentSign;
	private: System::Windows::Forms::Label^ labelAutoHPPercentSign;
	private: System::Windows::Forms::Label^ labelAutoMP;
	private: System::Windows::Forms::Label^ labelTargetInfo;
	private: System::Windows::Forms::Label^ labelTargetName;
	private: System::Windows::Forms::Label^ labelTargetHealth;
	private: System::Windows::Forms::Label^ labelAutoLoot;
	private: System::Windows::Forms::Label^ labelAutoAttack;
	private: System::Windows::Forms::Label^ labelClickDelay;
	private: System::Windows::Forms::Label^ labelAutoCast;
	private: System::Windows::Forms::Label^ labelAutoMan;
	private: System::Windows::Forms::Label^ labelHacks;
	private: System::Windows::Forms::Label^ labelDev;
	private: System::Windows::Forms::Label^ labelBar5;
	private: System::Windows::Forms::Label^ labelBar4;
	private: System::Windows::Forms::Label^ labelBar3;
	private: System::Windows::Forms::Label^ labelBar2;
	private: System::Windows::Forms::Label^ labelBar1;
	
	private: System::Windows::Forms::TextBox^ textBoxAutoHPPercent;
	private: System::Windows::Forms::TextBox^ textBoxAutoMPPercent;
	private: System::Windows::Forms::TextBox^ textBoxClickDelay;

	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ attachToGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutDevToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ donateToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip;

	private: System::Windows::Forms::Panel^ panelHacks;
	private: System::Windows::Forms::Panel^ panelAutoMan;
	
	private: System::Windows::Forms::CheckBox^ checkBoxAutoLoot;
	private: System::Windows::Forms::CheckBox^ checkBoxAutoAttack;
	private: System::Windows::Forms::CheckBox^ checkBoxAutoMP;
	private: System::Windows::Forms::CheckBox^ checkBoxAutoHP;
	private: System::Windows::Forms::CheckBox^ checkBoxGunCrit;
	private: System::Windows::Forms::CheckBox^ checkBoxNoReload;
	private: System::Windows::Forms::CheckBox^ checkBoxItemDetect;
	private: System::Windows::Forms::CheckBox^ checkBoxAutoCast;

	private: System::Windows::Forms::Timer^ timerAutoClick;
	private: System::Windows::Forms::Timer^ timerAutoAttack;
	private: System::Windows::Forms::Timer^ timerAutoAttackNav;
	private: System::Windows::Forms::Timer^ timerListen;
	private: System::Windows::Forms::Timer^ timerToolInfoUpdate;
	private: System::Windows::Forms::Timer^ timerAutoHeal;
	private: System::Windows::Forms::Timer^ timerOneSecond;
	private: System::Windows::Forms::CheckBox^ checkBoxRandCrit;
	private: System::Windows::Forms::Label^ labelRandomize;

	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Tool::typeid));
			this->labelPlayerInfo = (gcnew System::Windows::Forms::Label());
			this->labelPlayerLevel = (gcnew System::Windows::Forms::Label());
			this->labelPlayerName = (gcnew System::Windows::Forms::Label());
			this->labelLevel = (gcnew System::Windows::Forms::Label());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelPlayerCurrentMP = (gcnew System::Windows::Forms::Label());
			this->labelPlayerCurrentHP = (gcnew System::Windows::Forms::Label());
			this->labelBetweenHPSign = (gcnew System::Windows::Forms::Label());
			this->labelPlayerMaxMP = (gcnew System::Windows::Forms::Label());
			this->labelBetweenMPSign = (gcnew System::Windows::Forms::Label());
			this->labelPlayerMaxHP = (gcnew System::Windows::Forms::Label());
			this->labelMP = (gcnew System::Windows::Forms::Label());
			this->labelHP = (gcnew System::Windows::Forms::Label());
			this->labelItemDetect = (gcnew System::Windows::Forms::Label());
			this->labelNoReload = (gcnew System::Windows::Forms::Label());
			this->labelGunCrit = (gcnew System::Windows::Forms::Label());
			this->labelF2Key = (gcnew System::Windows::Forms::Label());
			this->labelF1Key = (gcnew System::Windows::Forms::Label());
			this->labelAutoHP = (gcnew System::Windows::Forms::Label());
			this->labelAutoMPPercentSign = (gcnew System::Windows::Forms::Label());
			this->textBoxAutoHPPercent = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAutoMPPercent = (gcnew System::Windows::Forms::TextBox());
			this->labelAutoHPPercentSign = (gcnew System::Windows::Forms::Label());
			this->labelAutoMP = (gcnew System::Windows::Forms::Label());
			this->labelTargetInfo = (gcnew System::Windows::Forms::Label());
			this->labelTargetName = (gcnew System::Windows::Forms::Label());
			this->labelTargetHealth = (gcnew System::Windows::Forms::Label());
			this->labelAutoLoot = (gcnew System::Windows::Forms::Label());
			this->labelAutoAttack = (gcnew System::Windows::Forms::Label());
			this->labelClickDelay = (gcnew System::Windows::Forms::Label());
			this->textBoxClickDelay = (gcnew System::Windows::Forms::TextBox());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->attachToGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutDevToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->donateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->panelHacks = (gcnew System::Windows::Forms::Panel());
			this->labelRandomize = (gcnew System::Windows::Forms::Label());
			this->checkBoxRandCrit = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxGunCrit = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxNoReload = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxItemDetect = (gcnew System::Windows::Forms::CheckBox());
			this->labelHacks = (gcnew System::Windows::Forms::Label());
			this->panelAutoMan = (gcnew System::Windows::Forms::Panel());
			this->labelDev = (gcnew System::Windows::Forms::Label());
			this->labelBar4 = (gcnew System::Windows::Forms::Label());
			this->labelBar3 = (gcnew System::Windows::Forms::Label());
			this->labelBar2 = (gcnew System::Windows::Forms::Label());
			this->labelBar1 = (gcnew System::Windows::Forms::Label());
			this->labelBar5 = (gcnew System::Windows::Forms::Label());
			this->checkBoxAutoCast = (gcnew System::Windows::Forms::CheckBox());
			this->labelAutoCast = (gcnew System::Windows::Forms::Label());
			this->checkBoxAutoLoot = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxAutoAttack = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxAutoMP = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxAutoHP = (gcnew System::Windows::Forms::CheckBox());
			this->labelAutoMan = (gcnew System::Windows::Forms::Label());
			this->timerToolInfoUpdate = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerAutoClick = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerAutoAttack = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerAutoAttackNav = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerListen = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerAutoHeal = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerOneSecond = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip->SuspendLayout();
			this->panelHacks->SuspendLayout();
			this->panelAutoMan->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelPlayerInfo
			// 
			this->labelPlayerInfo->AutoSize = true;
			this->labelPlayerInfo->BackColor = System::Drawing::Color::White;
			this->labelPlayerInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPlayerInfo->Location = System::Drawing::Point(4, 203);
			this->labelPlayerInfo->Name = L"labelPlayerInfo";
			this->labelPlayerInfo->Size = System::Drawing::Size(68, 13);
			this->labelPlayerInfo->TabIndex = 164;
			this->labelPlayerInfo->Text = L"Player Info";
			// 
			// labelPlayerLevel
			// 
			this->labelPlayerLevel->BackColor = System::Drawing::Color::White;
			this->labelPlayerLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPlayerLevel->Location = System::Drawing::Point(52, 233);
			this->labelPlayerLevel->Name = L"labelPlayerLevel";
			this->labelPlayerLevel->Size = System::Drawing::Size(46, 15);
			this->labelPlayerLevel->TabIndex = 163;
			this->labelPlayerLevel->Text = L"Level";
			// 
			// labelPlayerName
			// 
			this->labelPlayerName->BackColor = System::Drawing::Color::White;
			this->labelPlayerName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPlayerName->Location = System::Drawing::Point(52, 218);
			this->labelPlayerName->Name = L"labelPlayerName";
			this->labelPlayerName->Size = System::Drawing::Size(118, 15);
			this->labelPlayerName->TabIndex = 162;
			this->labelPlayerName->Text = L"Name";
			// 
			// labelLevel
			// 
			this->labelLevel->BackColor = System::Drawing::Color::White;
			this->labelLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelLevel->Location = System::Drawing::Point(4, 233);
			this->labelLevel->Name = L"labelLevel";
			this->labelLevel->Size = System::Drawing::Size(42, 14);
			this->labelLevel->TabIndex = 161;
			this->labelLevel->Text = L"Level: ";
			this->labelLevel->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// labelName
			// 
			this->labelName->BackColor = System::Drawing::Color::White;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelName->Location = System::Drawing::Point(5, 218);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(42, 15);
			this->labelName->TabIndex = 160;
			this->labelName->Text = L"Name: ";
			this->labelName->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelPlayerCurrentMP
			// 
			this->labelPlayerCurrentMP->BackColor = System::Drawing::Color::White;
			this->labelPlayerCurrentMP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPlayerCurrentMP->Location = System::Drawing::Point(52, 262);
			this->labelPlayerCurrentMP->Name = L"labelPlayerCurrentMP";
			this->labelPlayerCurrentMP->Size = System::Drawing::Size(53, 15);
			this->labelPlayerCurrentMP->TabIndex = 159;
			this->labelPlayerCurrentMP->Text = L"Curr MP";
			this->labelPlayerCurrentMP->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelPlayerCurrentHP
			// 
			this->labelPlayerCurrentHP->BackColor = System::Drawing::Color::White;
			this->labelPlayerCurrentHP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelPlayerCurrentHP->Location = System::Drawing::Point(52, 247);
			this->labelPlayerCurrentHP->Name = L"labelPlayerCurrentHP";
			this->labelPlayerCurrentHP->Size = System::Drawing::Size(53, 15);
			this->labelPlayerCurrentHP->TabIndex = 158;
			this->labelPlayerCurrentHP->Text = L"Curr HP";
			this->labelPlayerCurrentHP->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelBetweenHPSign
			// 
			this->labelBetweenHPSign->BackColor = System::Drawing::Color::Transparent;
			this->labelBetweenHPSign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBetweenHPSign->Location = System::Drawing::Point(111, 247);
			this->labelBetweenHPSign->Name = L"labelBetweenHPSign";
			this->labelBetweenHPSign->Size = System::Drawing::Size(13, 15);
			this->labelBetweenHPSign->TabIndex = 157;
			this->labelBetweenHPSign->Text = L"/";
			this->labelBetweenHPSign->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelPlayerMaxMP
			// 
			this->labelPlayerMaxMP->BackColor = System::Drawing::Color::White;
			this->labelPlayerMaxMP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPlayerMaxMP->Location = System::Drawing::Point(130, 262);
			this->labelPlayerMaxMP->Name = L"labelPlayerMaxMP";
			this->labelPlayerMaxMP->Size = System::Drawing::Size(53, 15);
			this->labelPlayerMaxMP->TabIndex = 156;
			this->labelPlayerMaxMP->Text = L"Max MP";
			this->labelPlayerMaxMP->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelBetweenMPSign
			// 
			this->labelBetweenMPSign->BackColor = System::Drawing::Color::Transparent;
			this->labelBetweenMPSign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBetweenMPSign->Location = System::Drawing::Point(111, 262);
			this->labelBetweenMPSign->Name = L"labelBetweenMPSign";
			this->labelBetweenMPSign->Size = System::Drawing::Size(13, 15);
			this->labelBetweenMPSign->TabIndex = 155;
			this->labelBetweenMPSign->Text = L"/";
			this->labelBetweenMPSign->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelPlayerMaxHP
			// 
			this->labelPlayerMaxHP->BackColor = System::Drawing::Color::White;
			this->labelPlayerMaxHP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPlayerMaxHP->Location = System::Drawing::Point(130, 247);
			this->labelPlayerMaxHP->Name = L"labelPlayerMaxHP";
			this->labelPlayerMaxHP->Size = System::Drawing::Size(52, 15);
			this->labelPlayerMaxHP->TabIndex = 154;
			this->labelPlayerMaxHP->Text = L"Max HP";
			this->labelPlayerMaxHP->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelMP
			// 
			this->labelMP->BackColor = System::Drawing::Color::White;
			this->labelMP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMP->Location = System::Drawing::Point(5, 262);
			this->labelMP->Name = L"labelMP";
			this->labelMP->Size = System::Drawing::Size(26, 15);
			this->labelMP->TabIndex = 153;
			this->labelMP->Text = L"MP:";
			this->labelMP->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelHP
			// 
			this->labelHP->BackColor = System::Drawing::Color::White;
			this->labelHP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelHP->Location = System::Drawing::Point(5, 247);
			this->labelHP->Name = L"labelHP";
			this->labelHP->Size = System::Drawing::Size(26, 15);
			this->labelHP->TabIndex = 152;
			this->labelHP->Text = L"HP:";
			this->labelHP->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelItemDetect
			// 
			this->labelItemDetect->AutoSize = true;
			this->labelItemDetect->BackColor = System::Drawing::Color::White;
			this->labelItemDetect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelItemDetect->Location = System::Drawing::Point(26, 27);
			this->labelItemDetect->Name = L"labelItemDetect";
			this->labelItemDetect->Size = System::Drawing::Size(73, 13);
			this->labelItemDetect->TabIndex = 141;
			this->labelItemDetect->Text = L"Item Detect";
			// 
			// labelNoReload
			// 
			this->labelNoReload->AutoSize = true;
			this->labelNoReload->BackColor = System::Drawing::Color::White;
			this->labelNoReload->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNoReload->Location = System::Drawing::Point(26, 47);
			this->labelNoReload->Name = L"labelNoReload";
			this->labelNoReload->Size = System::Drawing::Size(67, 13);
			this->labelNoReload->TabIndex = 135;
			this->labelNoReload->Text = L"No Reload";
			// 
			// labelGunCrit
			// 
			this->labelGunCrit->AutoSize = true;
			this->labelGunCrit->BackColor = System::Drawing::Color::White;
			this->labelGunCrit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGunCrit->Location = System::Drawing::Point(26, 67);
			this->labelGunCrit->Name = L"labelGunCrit";
			this->labelGunCrit->Size = System::Drawing::Size(80, 13);
			this->labelGunCrit->TabIndex = 139;
			this->labelGunCrit->Text = L"Reg Gun Crit";
			// 
			// labelF2Key
			// 
			this->labelF2Key->AutoSize = true;
			this->labelF2Key->BackColor = System::Drawing::Color::White;
			this->labelF2Key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelF2Key->Location = System::Drawing::Point(136, 176);
			this->labelF2Key->Name = L"labelF2Key";
			this->labelF2Key->Size = System::Drawing::Size(46, 13);
			this->labelF2Key->TabIndex = 133;
			this->labelF2Key->Text = L"F2 Key";
			// 
			// labelF1Key
			// 
			this->labelF1Key->AutoSize = true;
			this->labelF1Key->BackColor = System::Drawing::Color::White;
			this->labelF1Key->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelF1Key->Location = System::Drawing::Point(136, 150);
			this->labelF1Key->Name = L"labelF1Key";
			this->labelF1Key->Size = System::Drawing::Size(46, 13);
			this->labelF1Key->TabIndex = 132;
			this->labelF1Key->Text = L"F1 Key";
			// 
			// labelAutoHP
			// 
			this->labelAutoHP->AutoSize = true;
			this->labelAutoHP->BackColor = System::Drawing::Color::White;
			this->labelAutoHP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAutoHP->Location = System::Drawing::Point(27, 150);
			this->labelAutoHP->Name = L"labelAutoHP";
			this->labelAutoHP->Size = System::Drawing::Size(54, 13);
			this->labelAutoHP->TabIndex = 117;
			this->labelAutoHP->Text = L"Auto HP";
			// 
			// labelAutoMPPercentSign
			// 
			this->labelAutoMPPercentSign->AutoSize = true;
			this->labelAutoMPPercentSign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAutoMPPercentSign->Location = System::Drawing::Point(120, 176);
			this->labelAutoMPPercentSign->Name = L"labelAutoMPPercentSign";
			this->labelAutoMPPercentSign->Size = System::Drawing::Size(16, 13);
			this->labelAutoMPPercentSign->TabIndex = 130;
			this->labelAutoMPPercentSign->Text = L"%";
			// 
			// textBoxAutoHPPercent
			// 
			this->textBoxAutoHPPercent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxAutoHPPercent->Location = System::Drawing::Point(88, 146);
			this->textBoxAutoHPPercent->MaxLength = 2;
			this->textBoxAutoHPPercent->Name = L"textBoxAutoHPPercent";
			this->textBoxAutoHPPercent->Size = System::Drawing::Size(27, 20);
			this->textBoxAutoHPPercent->TabIndex = 118;
			this->textBoxAutoHPPercent->Text = L"65";
			this->textBoxAutoHPPercent->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxAutoMPPercent
			// 
			this->textBoxAutoMPPercent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxAutoMPPercent->Location = System::Drawing::Point(88, 173);
			this->textBoxAutoMPPercent->MaxLength = 2;
			this->textBoxAutoMPPercent->Name = L"textBoxAutoMPPercent";
			this->textBoxAutoMPPercent->Size = System::Drawing::Size(27, 20);
			this->textBoxAutoMPPercent->TabIndex = 129;
			this->textBoxAutoMPPercent->Text = L"25";
			this->textBoxAutoMPPercent->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// labelAutoHPPercentSign
			// 
			this->labelAutoHPPercentSign->AutoSize = true;
			this->labelAutoHPPercentSign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAutoHPPercentSign->Location = System::Drawing::Point(120, 150);
			this->labelAutoHPPercentSign->Name = L"labelAutoHPPercentSign";
			this->labelAutoHPPercentSign->Size = System::Drawing::Size(16, 13);
			this->labelAutoHPPercentSign->TabIndex = 119;
			this->labelAutoHPPercentSign->Text = L"%";
			// 
			// labelAutoMP
			// 
			this->labelAutoMP->AutoSize = true;
			this->labelAutoMP->BackColor = System::Drawing::Color::White;
			this->labelAutoMP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAutoMP->Location = System::Drawing::Point(27, 176);
			this->labelAutoMP->Name = L"labelAutoMP";
			this->labelAutoMP->Size = System::Drawing::Size(55, 13);
			this->labelAutoMP->TabIndex = 128;
			this->labelAutoMP->Text = L"Auto MP";
			// 
			// labelTargetInfo
			// 
			this->labelTargetInfo->BackColor = System::Drawing::Color::White;
			this->labelTargetInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTargetInfo->Location = System::Drawing::Point(34, 90);
			this->labelTargetInfo->Name = L"labelTargetInfo";
			this->labelTargetInfo->Size = System::Drawing::Size(124, 18);
			this->labelTargetInfo->TabIndex = 178;
			this->labelTargetInfo->Text = L"Target Info";
			this->labelTargetInfo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTargetName
			// 
			this->labelTargetName->BackColor = System::Drawing::Color::White;
			this->labelTargetName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTargetName->Location = System::Drawing::Point(34, 108);
			this->labelTargetName->Name = L"labelTargetName";
			this->labelTargetName->Size = System::Drawing::Size(124, 16);
			this->labelTargetName->TabIndex = 177;
			this->labelTargetName->Text = L"TargetName";
			this->labelTargetName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelTargetHealth
			// 
			this->labelTargetHealth->BackColor = System::Drawing::Color::White;
			this->labelTargetHealth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTargetHealth->Location = System::Drawing::Point(34, 124);
			this->labelTargetHealth->Name = L"labelTargetHealth";
			this->labelTargetHealth->Size = System::Drawing::Size(124, 17);
			this->labelTargetHealth->TabIndex = 174;
			this->labelTargetHealth->Text = L"TargetHP";
			this->labelTargetHealth->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelAutoLoot
			// 
			this->labelAutoLoot->AutoSize = true;
			this->labelAutoLoot->BackColor = System::Drawing::Color::White;
			this->labelAutoLoot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAutoLoot->Location = System::Drawing::Point(27, 47);
			this->labelAutoLoot->Name = L"labelAutoLoot";
			this->labelAutoLoot->Size = System::Drawing::Size(135, 13);
			this->labelAutoLoot->TabIndex = 172;
			this->labelAutoLoot->Text = L"Auto Loot   DISABLED";
			// 
			// labelAutoAttack
			// 
			this->labelAutoAttack->AutoSize = true;
			this->labelAutoAttack->BackColor = System::Drawing::Color::White;
			this->labelAutoAttack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAutoAttack->Location = System::Drawing::Point(27, 27);
			this->labelAutoAttack->Name = L"labelAutoAttack";
			this->labelAutoAttack->Size = System::Drawing::Size(74, 13);
			this->labelAutoAttack->TabIndex = 167;
			this->labelAutoAttack->Text = L"Auto Attack";
			// 
			// labelClickDelay
			// 
			this->labelClickDelay->AutoSize = true;
			this->labelClickDelay->BackColor = System::Drawing::Color::White;
			this->labelClickDelay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelClickDelay->Location = System::Drawing::Point(4, 66);
			this->labelClickDelay->Name = L"labelClickDelay";
			this->labelClickDelay->Size = System::Drawing::Size(128, 13);
			this->labelClickDelay->TabIndex = 168;
			this->labelClickDelay->Text = L"Auto Click Delay (ms)";
			// 
			// textBoxClickDelay
			// 
			this->textBoxClickDelay->Location = System::Drawing::Point(138, 63);
			this->textBoxClickDelay->MaxLength = 5;
			this->textBoxClickDelay->Name = L"textBoxClickDelay";
			this->textBoxClickDelay->Size = System::Drawing::Size(37, 20);
			this->textBoxClickDelay->TabIndex = 169;
			this->textBoxClickDelay->Text = L"1000";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->attachToGameToolStripMenuItem,
					this->closeToolToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// attachToGameToolStripMenuItem
			// 
			this->attachToGameToolStripMenuItem->Name = L"attachToGameToolStripMenuItem";
			this->attachToGameToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->attachToGameToolStripMenuItem->Text = L"Attach to Game";
			this->attachToGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &Tool::attachToGameToolStripMenuItem_Click);
			// 
			// closeToolToolStripMenuItem
			// 
			this->closeToolToolStripMenuItem->Name = L"closeToolToolStripMenuItem";
			this->closeToolToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->closeToolToolStripMenuItem->Text = L"Close Tool";
			this->closeToolToolStripMenuItem->Click += gcnew System::EventHandler(this, &Tool::closeToolToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &Tool::helpToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutDevToolStripMenuItem,
					this->donateToolStripMenuItem
			});
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->exitToolStripMenuItem->Text = L"About";
			// 
			// aboutDevToolStripMenuItem
			// 
			this->aboutDevToolStripMenuItem->Name = L"aboutDevToolStripMenuItem";
			this->aboutDevToolStripMenuItem->Size = System::Drawing::Size(130, 22);
			this->aboutDevToolStripMenuItem->Text = L"About Dev";
			this->aboutDevToolStripMenuItem->Click += gcnew System::EventHandler(this, &Tool::aboutDevToolStripMenuItem_Click);
			// 
			// menuStrip
			// 
			this->menuStrip->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(342, 24);
			this->menuStrip->TabIndex = 179;
			this->menuStrip->Text = L"Menu Strip";
			// 
			// panelHacks
			// 
			this->panelHacks->BackColor = System::Drawing::Color::Transparent;
			this->panelHacks->Controls->Add(this->labelRandomize);
			this->panelHacks->Controls->Add(this->checkBoxRandCrit);
			this->panelHacks->Controls->Add(this->checkBoxGunCrit);
			this->panelHacks->Controls->Add(this->checkBoxNoReload);
			this->panelHacks->Controls->Add(this->checkBoxItemDetect);
			this->panelHacks->Controls->Add(this->labelHacks);
			this->panelHacks->Controls->Add(this->labelGunCrit);
			this->panelHacks->Controls->Add(this->labelNoReload);
			this->panelHacks->Controls->Add(this->labelItemDetect);
			this->panelHacks->Location = System::Drawing::Point(218, 160);
			this->panelHacks->Name = L"panelHacks";
			this->panelHacks->Size = System::Drawing::Size(113, 100);
			this->panelHacks->TabIndex = 180;
			// 
			// labelRandomize
			// 
			this->labelRandomize->AutoSize = true;
			this->labelRandomize->BackColor = System::Drawing::Color::White;
			this->labelRandomize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRandomize->Location = System::Drawing::Point(44, 85);
			this->labelRandomize->Name = L"labelRandomize";
			this->labelRandomize->Size = System::Drawing::Size(69, 13);
			this->labelRandomize->TabIndex = 188;
			this->labelRandomize->Text = L"Randomize";
			// 
			// checkBoxRandCrit
			// 
			this->checkBoxRandCrit->AutoSize = true;
			this->checkBoxRandCrit->Location = System::Drawing::Point(29, 85);
			this->checkBoxRandCrit->Name = L"checkBoxRandCrit";
			this->checkBoxRandCrit->Size = System::Drawing::Size(15, 14);
			this->checkBoxRandCrit->TabIndex = 187;
			this->checkBoxRandCrit->UseVisualStyleBackColor = true;
			// 
			// checkBoxGunCrit
			// 
			this->checkBoxGunCrit->AutoSize = true;
			this->checkBoxGunCrit->Location = System::Drawing::Point(5, 67);
			this->checkBoxGunCrit->Name = L"checkBoxGunCrit";
			this->checkBoxGunCrit->Size = System::Drawing::Size(15, 14);
			this->checkBoxGunCrit->TabIndex = 186;
			this->checkBoxGunCrit->UseVisualStyleBackColor = true;
			this->checkBoxGunCrit->CheckStateChanged += gcnew System::EventHandler(this, &Tool::checkBoxGunCrit_CheckStateChanged);
			// 
			// checkBoxNoReload
			// 
			this->checkBoxNoReload->AutoSize = true;
			this->checkBoxNoReload->Location = System::Drawing::Point(5, 47);
			this->checkBoxNoReload->Name = L"checkBoxNoReload";
			this->checkBoxNoReload->Size = System::Drawing::Size(15, 14);
			this->checkBoxNoReload->TabIndex = 185;
			this->checkBoxNoReload->UseVisualStyleBackColor = true;
			this->checkBoxNoReload->CheckStateChanged += gcnew System::EventHandler(this, &Tool::checkBoxNoReload_CheckStateChanged);
			// 
			// checkBoxItemDetect
			// 
			this->checkBoxItemDetect->AutoSize = true;
			this->checkBoxItemDetect->Location = System::Drawing::Point(5, 27);
			this->checkBoxItemDetect->Name = L"checkBoxItemDetect";
			this->checkBoxItemDetect->Size = System::Drawing::Size(15, 14);
			this->checkBoxItemDetect->TabIndex = 184;
			this->checkBoxItemDetect->UseVisualStyleBackColor = true;
			this->checkBoxItemDetect->CheckStateChanged += gcnew System::EventHandler(this, &Tool::checkBoxItemDetect_CheckStateChanged);
			// 
			// labelHacks
			// 
			this->labelHacks->AutoSize = true;
			this->labelHacks->BackColor = System::Drawing::Color::White;
			this->labelHacks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelHacks->Location = System::Drawing::Point(35, 9);
			this->labelHacks->Name = L"labelHacks";
			this->labelHacks->Size = System::Drawing::Size(43, 13);
			this->labelHacks->TabIndex = 142;
			this->labelHacks->Text = L"Hacks";
			// 
			// panelAutoMan
			// 
			this->panelAutoMan->BackColor = System::Drawing::Color::Transparent;
			this->panelAutoMan->Controls->Add(this->labelDev);
			this->panelAutoMan->Controls->Add(this->labelBar4);
			this->panelAutoMan->Controls->Add(this->labelBar3);
			this->panelAutoMan->Controls->Add(this->labelBar2);
			this->panelAutoMan->Controls->Add(this->labelBar1);
			this->panelAutoMan->Controls->Add(this->labelBar5);
			this->panelAutoMan->Controls->Add(this->checkBoxAutoCast);
			this->panelAutoMan->Controls->Add(this->labelAutoCast);
			this->panelAutoMan->Controls->Add(this->checkBoxAutoLoot);
			this->panelAutoMan->Controls->Add(this->checkBoxAutoAttack);
			this->panelAutoMan->Controls->Add(this->checkBoxAutoMP);
			this->panelAutoMan->Controls->Add(this->checkBoxAutoHP);
			this->panelAutoMan->Controls->Add(this->labelAutoMan);
			this->panelAutoMan->Controls->Add(this->labelAutoMP);
			this->panelAutoMan->Controls->Add(this->labelPlayerInfo);
			this->panelAutoMan->Controls->Add(this->labelAutoHPPercentSign);
			this->panelAutoMan->Controls->Add(this->labelPlayerLevel);
			this->panelAutoMan->Controls->Add(this->labelTargetInfo);
			this->panelAutoMan->Controls->Add(this->labelPlayerName);
			this->panelAutoMan->Controls->Add(this->labelTargetName);
			this->panelAutoMan->Controls->Add(this->labelLevel);
			this->panelAutoMan->Controls->Add(this->textBoxAutoMPPercent);
			this->panelAutoMan->Controls->Add(this->labelName);
			this->panelAutoMan->Controls->Add(this->labelHP);
			this->panelAutoMan->Controls->Add(this->textBoxAutoHPPercent);
			this->panelAutoMan->Controls->Add(this->labelPlayerCurrentMP);
			this->panelAutoMan->Controls->Add(this->labelMP);
			this->panelAutoMan->Controls->Add(this->labelAutoMPPercentSign);
			this->panelAutoMan->Controls->Add(this->labelPlayerCurrentHP);
			this->panelAutoMan->Controls->Add(this->labelTargetHealth);
			this->panelAutoMan->Controls->Add(this->labelPlayerMaxHP);
			this->panelAutoMan->Controls->Add(this->labelAutoHP);
			this->panelAutoMan->Controls->Add(this->labelBetweenHPSign);
			this->panelAutoMan->Controls->Add(this->labelF1Key);
			this->panelAutoMan->Controls->Add(this->labelBetweenMPSign);
			this->panelAutoMan->Controls->Add(this->labelF2Key);
			this->panelAutoMan->Controls->Add(this->labelPlayerMaxMP);
			this->panelAutoMan->Controls->Add(this->labelAutoLoot);
			this->panelAutoMan->Controls->Add(this->textBoxClickDelay);
			this->panelAutoMan->Controls->Add(this->labelClickDelay);
			this->panelAutoMan->Controls->Add(this->labelAutoAttack);
			this->panelAutoMan->Location = System::Drawing::Point(12, 27);
			this->panelAutoMan->Name = L"panelAutoMan";
			this->panelAutoMan->Size = System::Drawing::Size(200, 371);
			this->panelAutoMan->TabIndex = 181;
			// 
			// labelDev
			// 
			this->labelDev->AutoSize = true;
			this->labelDev->BackColor = System::Drawing::Color::White;
			this->labelDev->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDev->Location = System::Drawing::Point(3, 346);
			this->labelDev->Name = L"labelDev";
			this->labelDev->Size = System::Drawing::Size(30, 13);
			this->labelDev->TabIndex = 191;
			this->labelDev->Text = L"Dev";
			this->labelDev->Click += gcnew System::EventHandler(this, &Tool::labelDev_Click);
			// 
			// labelBar4
			// 
			this->labelBar4->AutoSize = true;
			this->labelBar4->BackColor = System::Drawing::Color::White;
			this->labelBar4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBar4->Location = System::Drawing::Point(54, 324);
			this->labelBar4->Name = L"labelBar4";
			this->labelBar4->Size = System::Drawing::Size(37, 13);
			this->labelBar4->TabIndex = 188;
			this->labelBar4->Text = L"Bar 4";
			this->labelBar4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Tool::labelBar4_MouseClick);
			// 
			// labelBar3
			// 
			this->labelBar3->AutoSize = true;
			this->labelBar3->BackColor = System::Drawing::Color::White;
			this->labelBar3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBar3->Location = System::Drawing::Point(113, 311);
			this->labelBar3->Name = L"labelBar3";
			this->labelBar3->Size = System::Drawing::Size(37, 13);
			this->labelBar3->TabIndex = 187;
			this->labelBar3->Text = L"Bar 3";
			this->labelBar3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Tool::labelBar3_MouseClick);
			// 
			// labelBar2
			// 
			this->labelBar2->AutoSize = true;
			this->labelBar2->BackColor = System::Drawing::Color::White;
			this->labelBar2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBar2->Location = System::Drawing::Point(75, 311);
			this->labelBar2->Name = L"labelBar2";
			this->labelBar2->Size = System::Drawing::Size(37, 13);
			this->labelBar2->TabIndex = 186;
			this->labelBar2->Text = L"Bar 2";
			this->labelBar2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Tool::labelBar2_MouseClick);
			// 
			// labelBar1
			// 
			this->labelBar1->AutoSize = true;
			this->labelBar1->BackColor = System::Drawing::Color::White;
			this->labelBar1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBar1->Location = System::Drawing::Point(37, 311);
			this->labelBar1->Name = L"labelBar1";
			this->labelBar1->Size = System::Drawing::Size(37, 13);
			this->labelBar1->TabIndex = 185;
			this->labelBar1->Text = L"Bar 1";
			this->labelBar1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Tool::labelBar1_MouseClick);
			// 
			// labelBar5
			// 
			this->labelBar5->AutoSize = true;
			this->labelBar5->BackColor = System::Drawing::Color::White;
			this->labelBar5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelBar5->Location = System::Drawing::Point(92, 324);
			this->labelBar5->Name = L"labelBar5";
			this->labelBar5->Size = System::Drawing::Size(37, 13);
			this->labelBar5->TabIndex = 189;
			this->labelBar5->Text = L"Bar 5";
			this->labelBar5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Tool::labelBar5_MouseClick);
			// 
			// checkBoxAutoCast
			// 
			this->checkBoxAutoCast->AutoSize = true;
			this->checkBoxAutoCast->Location = System::Drawing::Point(8, 289);
			this->checkBoxAutoCast->Name = L"checkBoxAutoCast";
			this->checkBoxAutoCast->Size = System::Drawing::Size(15, 14);
			this->checkBoxAutoCast->TabIndex = 184;
			this->checkBoxAutoCast->UseVisualStyleBackColor = true;
			this->checkBoxAutoCast->CheckStateChanged += gcnew System::EventHandler(this, &Tool::checkBoxAutoCast_CheckStateChanged);
			// 
			// labelAutoCast
			// 
			this->labelAutoCast->AutoSize = true;
			this->labelAutoCast->BackColor = System::Drawing::Color::White;
			this->labelAutoCast->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAutoCast->Location = System::Drawing::Point(29, 289);
			this->labelAutoCast->Name = L"labelAutoCast";
			this->labelAutoCast->Size = System::Drawing::Size(62, 13);
			this->labelAutoCast->TabIndex = 0;
			this->labelAutoCast->Text = L"Auto Cast";
			// 
			// checkBoxAutoLoot
			// 
			this->checkBoxAutoLoot->AutoSize = true;
			this->checkBoxAutoLoot->Location = System::Drawing::Point(6, 46);
			this->checkBoxAutoLoot->Name = L"checkBoxAutoLoot";
			this->checkBoxAutoLoot->Size = System::Drawing::Size(15, 14);
			this->checkBoxAutoLoot->TabIndex = 183;
			this->checkBoxAutoLoot->UseVisualStyleBackColor = true;
			this->checkBoxAutoLoot->CheckStateChanged += gcnew System::EventHandler(this, &Tool::checkBoxAutoLoot_CheckStateChanged);
			// 
			// checkBoxAutoAttack
			// 
			this->checkBoxAutoAttack->AutoSize = true;
			this->checkBoxAutoAttack->Location = System::Drawing::Point(6, 27);
			this->checkBoxAutoAttack->Name = L"checkBoxAutoAttack";
			this->checkBoxAutoAttack->Size = System::Drawing::Size(15, 14);
			this->checkBoxAutoAttack->TabIndex = 182;
			this->checkBoxAutoAttack->UseVisualStyleBackColor = true;
			this->checkBoxAutoAttack->CheckStateChanged += gcnew System::EventHandler(this, &Tool::checkBoxAutoAttack_CheckStateChanged);
			// 
			// checkBoxAutoMP
			// 
			this->checkBoxAutoMP->AutoSize = true;
			this->checkBoxAutoMP->Location = System::Drawing::Point(6, 176);
			this->checkBoxAutoMP->Name = L"checkBoxAutoMP";
			this->checkBoxAutoMP->Size = System::Drawing::Size(15, 14);
			this->checkBoxAutoMP->TabIndex = 181;
			this->checkBoxAutoMP->UseVisualStyleBackColor = true;
			this->checkBoxAutoMP->CheckStateChanged += gcnew System::EventHandler(this, &Tool::checkBoxAutoMP_CheckStateChanged);
			// 
			// checkBoxAutoHP
			// 
			this->checkBoxAutoHP->AutoSize = true;
			this->checkBoxAutoHP->Location = System::Drawing::Point(6, 150);
			this->checkBoxAutoHP->Name = L"checkBoxAutoHP";
			this->checkBoxAutoHP->Size = System::Drawing::Size(15, 14);
			this->checkBoxAutoHP->TabIndex = 180;
			this->checkBoxAutoHP->UseVisualStyleBackColor = true;
			this->checkBoxAutoHP->CheckStateChanged += gcnew System::EventHandler(this, &Tool::checkBoxAutoHP_CheckStateChanged);
			// 
			// labelAutoMan
			// 
			this->labelAutoMan->AutoSize = true;
			this->labelAutoMan->BackColor = System::Drawing::Color::White;
			this->labelAutoMan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAutoMan->Location = System::Drawing::Point(65, 9);
			this->labelAutoMan->Name = L"labelAutoMan";
			this->labelAutoMan->Size = System::Drawing::Size(57, 13);
			this->labelAutoMan->TabIndex = 179;
			this->labelAutoMan->Text = L"AutoMan";
			// 
			// timerToolInfoUpdate
			// 
			this->timerToolInfoUpdate->Enabled = true;
			this->timerToolInfoUpdate->Interval = 10;
			this->timerToolInfoUpdate->Tick += gcnew System::EventHandler(this, &Tool::timerToolInfoUpdate_Tick);
			// 
			// timerAutoClick
			// 
			this->timerAutoClick->Enabled = true;
			this->timerAutoClick->Interval = 1000;
			this->timerAutoClick->Tick += gcnew System::EventHandler(this, &Tool::timerAutoClick_Tick);
			// 
			// timerAutoAttack
			// 
			this->timerAutoAttack->Interval = 10;
			this->timerAutoAttack->Tick += gcnew System::EventHandler(this, &Tool::timerAutoAttack_Tick);
			// 
			// timerAutoAttackNav
			// 
			this->timerAutoAttackNav->Interval = 10;
			this->timerAutoAttackNav->Tick += gcnew System::EventHandler(this, &Tool::timerAutoAttackNav_Tick);
			// 
			// timerListen
			// 
			this->timerListen->Enabled = true;
			this->timerListen->Interval = 150;
			this->timerListen->Tick += gcnew System::EventHandler(this, &Tool::timerListen_Tick);
			// 
			// timerAutoHeal
			// 
			this->timerAutoHeal->Interval = 400;
			this->timerAutoHeal->Tick += gcnew System::EventHandler(this, &Tool::timerAutoHeal_Tick);
			// 
			// timerOneSecond
			// 
			this->timerOneSecond->Enabled = true;
			this->timerOneSecond->Interval = 1000;
			this->timerOneSecond->Tick += gcnew System::EventHandler(this, &Tool::timerOneSecond_Tick);
			// 
			// Tool
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(342, 410);
			this->ControlBox = false;
			this->Controls->Add(this->panelAutoMan);
			this->Controls->Add(this->panelHacks);
			this->Controls->Add(this->menuStrip);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Tool";
			this->Load += gcnew System::EventHandler(this, &Tool::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Tool::Tool_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Tool::Tool_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Tool::Tool_MouseUp);
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->panelHacks->ResumeLayout(false);
			this->panelHacks->PerformLayout();
			this->panelAutoMan->ResumeLayout(false);
			this->panelAutoMan->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//Establish Connection Success and OTD bools
	private: bool clientSuccess;
	private: bool oneTimeData;

	//Var made to store parasedValues for AutoHeal
	private: int autoHP;
	private: int autoMP;

	//Generate SkillGUI Instances
	public: ToolSkills^ SkillGUI1 = gcnew ToolSkills(this);
	public: ToolSkills^ SkillGUI2 = gcnew ToolSkills(this);
	public: ToolSkills^ SkillGUI3 = gcnew ToolSkills(this);
	public: ToolSkills^ SkillGUI4 = gcnew ToolSkills(this);
	public: ToolSkills^ SkillGUI5 = gcnew ToolSkills(this);
	public: ToolSkills^ SkillGUI6 = gcnew ToolSkills(this);

	//Generate DevGUI Instance
	public: ToolDev^ DevGUI = gcnew ToolDev(this);

	// Mouse Click and Drag Function
	private: bool mouseDown;
	private: Point lastLocation;

	private: Void Tool_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		mouseDown = true;
		lastLocation = e->Location;
	}

	private: Void Tool_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
		if (mouseDown) {
			this->Location = Point(
				(this->Location.X - lastLocation.X) + e->X, (this->Location.Y - lastLocation.Y) + e->Y);

			this->Update();
		}
	}

	private: Void Tool_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		mouseDown = false;
	}

	//Load Form Defaults
	private: Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		// Hide GUIs
		SkillGUI1->Hide();
		SkillGUI2->Hide();
		SkillGUI3->Hide();
		SkillGUI4->Hide();
		SkillGUI5->Hide();

		DevGUI->Hide();
		//Set Identifiers to GUIS
		SkillGUI1->tab = 1;
		SkillGUI2->tab = 2;
		SkillGUI3->tab = 3;
		SkillGUI4->tab = 4;
		SkillGUI5->tab = 5;
		//DefaultForm();

	}

	private: System::Void attachToGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		attachToGame();

	}

	private: System::Void closeToolToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		
		exit(0);

	}

	private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Please Attach to PlayTrickster when the game is open. \n\n You can do this by either pressing the DOWN arrow key or click 'Attach to Game' in the File menu. \n\n You can also press the UP arrow key to qucik toggle Auto Attack while it's active. \n\n Click on the Label Bar 1-5 to access the Auto Cast time delay inputs. Leave the Textbox empty to not use that key. \n\n Only use on One Open Client at a time! May develop a way to do multi-client in the future. You can do VM's and bypass that however. \n\n Have Fun, Be Smart, Don't get banned <3");
	}

	private: System::Void aboutDevToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Dev is a very bored person. Likes to code in his off-time. May update this (Definitely updating for Paula!). I am just trying to sharpen my coding skills and play games. \n\nOriginal Credits to Jackno for Developing the shell Auto Attack and program code/inspiration!\nThank you for teaching me Jackno <3 ");
	}
		  
	private: System::Void checkBoxAutoAttack_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {

		if (clientSuccess) {

			if (checkBoxAutoAttack->Checked) {
				toggleAutoAttack(true, false);
				return;
			}
			else {
				toggleAutoAttack(false, false);
				return;
			}
		}
		
		return;
	}

	private: System::Void checkBoxAutoLoot_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		
		if (clientSuccess) {
			
			if (checkBoxAutoLoot->Checked) {
				MessageBox::Show("Checked");
			}
			else {
				MessageBox::Show("Not Checked");
			}	
		}

		return;
	}

	private: System::Void checkBoxAutoHP_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		
		if (clientSuccess) {

			if (checkBoxAutoHP->Checked) {
				toggleAutoHeal(true);
			}
			else {
				if (!checkBoxAutoMP->Checked) {
					toggleAutoHeal(false);
				}
			}
		}

		return;
	}

	private: System::Void checkBoxAutoMP_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
	
		if (clientSuccess) {

			if (checkBoxAutoMP->Checked) {
				toggleAutoHeal(true);
			}
			else {
				if (!checkBoxAutoHP->Checked) {
					toggleAutoHeal(false);
				}
			}
		}

		return;
	}

	private: System::Void checkBoxAutoCast_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		
		if (clientSuccess) {
			
			if (checkBoxAutoCast->Checked) {
				toggleAutoCast(true);
			}
			else {
				toggleAutoCast(false);
			}
		}

		return;
	}

	private: System::Void checkBoxItemDetect_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		
		if (clientSuccess) {

			if (checkBoxItemDetect->Checked) {
				toggleHvcks(true, checkBoxItemDetect);
			}
			else {
				toggleHvcks(false, checkBoxItemDetect);
			}
		}
	}

	private: System::Void checkBoxNoReload_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		
		if (clientSuccess) {
			
			if (checkBoxNoReload->Checked) {
				toggleHvcks(true, checkBoxNoReload);
			}
			else {
				toggleHvcks(false, checkBoxNoReload);
			}
		}
	}

	private: System::Void checkBoxGunCrit_CheckStateChanged(System::Object^ sender, System::EventArgs^ e) {
		
		if (clientSuccess) {
		
			if (checkBoxGunCrit->Checked) {
				toggleHvcks(true, checkBoxGunCrit);
			}
			else {
				toggleHvcks(false, checkBoxGunCrit);
			}
		}
	}

	private: System::Void labelBar1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		switchVisibleForm(SkillGUI1);
	}
	private: System::Void labelBar2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		switchVisibleForm(SkillGUI2);
	}
	private: System::Void labelBar3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		switchVisibleForm(SkillGUI3);
	}
	private: System::Void labelBar4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		switchVisibleForm(SkillGUI4);
	}
	private: System::Void labelBar5_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		switchVisibleForm(SkillGUI5);
	}

	private: System::Void labelDev_Click(System::Object^ sender, System::EventArgs^ e) {
		switchVisibleForm(DevGUI);
	}

	private: System::Void switchVisibleForm(Form^ frm) {

		if (SkillGUI1 != frm) {
			SkillGUI1->Hide();
		}
		if (SkillGUI2 != frm) {
			SkillGUI2->Hide();
		}
		if (SkillGUI3 != frm) {
			SkillGUI3->Hide();
		}
		if (SkillGUI4 != frm) {
			SkillGUI4->Hide();
		}
		if (SkillGUI5 != frm) {
			SkillGUI5->Hide();
		}
		if (SkillGUI6 != frm) {
			SkillGUI6->Hide();
		}
		if (DevGUI != frm) {
			DevGUI->Hide();
		}

		frm->Show();
		frm->Location = this->Location;
		frm->BringToFront();
		this->Update();

	}

	//Auto Aquire Target Tick
	private: System::Void timerAutoAttack_Tick(System::Object^ sender, System::EventArgs^ e) {

		//Check if Auto Attack Off
		if (timerAutoAttackNav->Enabled == false) {

			double min = -1;
			double temp = -1;
			for (int k = 0; k < 512; k++) {
				//Read Monster ID from HEX ID
				ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.MonsterID[k], &Game.mon.MonsterIDHEX[k][0], sizeof(DWORD), NULL);
				//Read Monster Pos
				ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.MonsterYPosArray[k], &Game.mon.MonsterYPos[k], sizeof(Game.mon.MonsterYPos[k]), NULL);
				//Read Monster Pos
				ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.MonsterXPosArray[k], &Game.mon.MonsterXPos[k], sizeof(Game.mon.MonsterXPos[k]), NULL);
				//Read Monster Name
				ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.MonsterNameaddress[k], &Game.mon.MonsterNameArray[k][0], 64, 0);
				//Read the isReal Check
				ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.MonsterCheckIsReal[k], &Game.mon.CheckIsReal[k][0], sizeof(WORD), NULL);
				//Read the isAlive Check
				ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.MonsterHPBase[k], &Game.mon.MonsterHP[k], sizeof(DWORD), NULL);
				//Copy Memory for Name of Monster Array 
				memcpy(Game.mon.MonsterNamestempTne, &Game.mon.MonsterNameArray[k][0], 64);
				//If monster is a spirit 
				Game.mon.MonLoc = strstr(Game.mon.MonsterNamestempTne, "Shadow");
				//If not a spirit
				if (Game.mon.MonLoc == NULL) {
					//Must have a Lock 
					if (min == -1) {
						if (Game.mon.CheckIsReal[k][0] == 65535 && (Game.mon.MonsterYPos[k] < Game.plr.PlayerYPos + (Game.cp.ScreenResY * 0.95) || Game.plr.PlayerYPos - (Game.cp.ScreenResY * 0.95) < Game.mon.MonsterYPos[k]) && (Game.mon.MonsterXPos[k] < Game.plr.PlayerXPos + (Game.cp.ScreenResX * 0.95) || Game.plr.PlayerXPos - (Game.cp.ScreenResX * 0.95) < Game.mon.MonsterXPos[k]) && Game.mon.MonsterHP[k] != 0) {

							if (Game.plr.PlayerXPos > Game.mon.MonsterXPos[k] && Game.plr.PlayerYPos > Game.mon.MonsterYPos[k]) {
								min = sqrt(((Game.plr.PlayerXPos - Game.mon.MonsterXPos[k]) * (Game.plr.PlayerXPos - Game.mon.MonsterXPos[k])) + ((Game.plr.PlayerYPos - Game.mon.MonsterYPos[k]) * (Game.plr.PlayerYPos - Game.mon.MonsterYPos[k])));
							}
							else if (Game.plr.PlayerXPos > Game.mon.MonsterXPos[k] && Game.plr.PlayerYPos < Game.mon.MonsterYPos[k]) {
								min = sqrt(((Game.plr.PlayerXPos - Game.mon.MonsterXPos[k]) * (Game.plr.PlayerXPos - Game.mon.MonsterXPos[k])) + ((Game.mon.MonsterYPos[k] - Game.plr.PlayerYPos) * (Game.mon.MonsterYPos[k] - Game.plr.PlayerYPos)));
							}
							else if (Game.plr.PlayerXPos < Game.mon.MonsterXPos[k] && Game.plr.PlayerYPos > Game.mon.MonsterYPos[k]) {
								min = sqrt(((Game.mon.MonsterXPos[k] - Game.plr.PlayerXPos) * (Game.mon.MonsterXPos[k] - Game.plr.PlayerXPos)) + ((Game.plr.PlayerYPos - Game.mon.MonsterYPos[k]) * (Game.plr.PlayerYPos - Game.mon.MonsterYPos[k])));
							}
							else if (Game.plr.PlayerXPos < Game.mon.MonsterXPos[k] && Game.plr.PlayerYPos < Game.mon.MonsterYPos[k]) {
								min = sqrt(((Game.mon.MonsterXPos[k] - Game.plr.PlayerXPos) * (Game.mon.MonsterXPos[k] - Game.plr.PlayerXPos)) + ((Game.mon.MonsterYPos[k] - Game.plr.PlayerYPos) * (Game.mon.MonsterYPos[k] - Game.plr.PlayerYPos)));
							}

							Game.mon.GoAttackValUse = k;
						}
					}
					//If no lock found
					else {
						if (Game.mon.CheckIsReal[k][0] != 65536 && (Game.mon.MonsterYPos[k] < Game.plr.PlayerYPos + (Game.cp.ScreenResY * 0.95) || Game.plr.PlayerYPos - (Game.cp.ScreenResY * 0.95) < Game.mon.MonsterYPos[k]) && (Game.mon.MonsterXPos[k] < Game.plr.PlayerXPos + (Game.cp.ScreenResX * 0.95) || Game.plr.PlayerXPos - (Game.cp.ScreenResX * 0.95) < Game.mon.MonsterXPos[k]) && Game.mon.MonsterHP[k] != 0) {
							if (Game.plr.PlayerXPos > Game.mon.MonsterXPos[k] && Game.plr.PlayerYPos > Game.mon.MonsterYPos[k]) {
								temp = sqrt(((Game.plr.PlayerXPos - Game.mon.MonsterXPos[k]) * (Game.plr.PlayerXPos - Game.mon.MonsterXPos[k])) + ((Game.plr.PlayerYPos - Game.mon.MonsterYPos[k]) * (Game.plr.PlayerYPos - Game.mon.MonsterYPos[k])));
							}
							else if (Game.plr.PlayerXPos > Game.mon.MonsterXPos[k] && Game.plr.PlayerYPos < Game.mon.MonsterYPos[k]) {
								temp = sqrt(((Game.plr.PlayerXPos - Game.mon.MonsterXPos[k]) * (Game.plr.PlayerXPos - Game.mon.MonsterXPos[k])) + ((Game.mon.MonsterYPos[k] - Game.plr.PlayerYPos) * (Game.mon.MonsterYPos[k] - Game.plr.PlayerYPos)));
							}
							else if (Game.plr.PlayerXPos < Game.mon.MonsterXPos[k] && Game.plr.PlayerYPos > Game.mon.MonsterYPos[k]) {
								temp = sqrt(((Game.mon.MonsterXPos[k] - Game.plr.PlayerXPos) * (Game.mon.MonsterXPos[k] - Game.plr.PlayerXPos)) + ((Game.plr.PlayerYPos - Game.mon.MonsterYPos[k]) * (Game.plr.PlayerYPos - Game.mon.MonsterYPos[k])));
							}
							else if (Game.plr.PlayerXPos < Game.mon.MonsterXPos[k] && Game.plr.PlayerYPos < Game.mon.MonsterYPos[k]) {
								temp = sqrt(((Game.mon.MonsterXPos[k] - Game.plr.PlayerXPos) * (Game.mon.MonsterXPos[k] - Game.plr.PlayerXPos)) + ((Game.mon.MonsterYPos[k] - Game.plr.PlayerYPos) * (Game.mon.MonsterYPos[k] - Game.plr.PlayerYPos)));
							}
							//Reset Min and Temp Lock
							if (temp < min) {
								min = temp;
								Game.mon.GoAttackValUse = k;
							}
						}
					}
				}
			}

			//If no Temp
			if (temp == -1) {
				return;
			}
			else {
				//Enable the Auto Attack
				timerAutoAttackNav->Enabled = true;
			}
		}
	}
	
	//Auto Cursor and Check Attack Target tick 
	private: System::Void timerAutoAttackNav_Tick(System::Object^ sender, System::EventArgs^ e) {

		//Check The Auto Attack Status
		if (timerAutoAttack->Enabled == false) {
			timerAutoAttackNav->Enabled = false;
			return;
		}

		//Read the Checks for Attack Status
		ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.MonsterCheckIsReal[Game.mon.GoAttackValUse], &Game.mon.CheckIsReal[Game.mon.GoAttackValUse][0], sizeof(WORD), NULL);
		ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.MonsterHPBase[Game.mon.GoAttackValUse], &Game.mon.MonsterHP[Game.mon.GoAttackValUse], sizeof(Game.mon.MonsterHP[Game.mon.GoAttackValUse]), NULL);
		ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.MonsterYPosArray[Game.mon.GoAttackValUse], &Game.mon.MonsterYPos[Game.mon.GoAttackValUse], sizeof(Game.mon.MonsterYPos[Game.mon.GoAttackValUse]), NULL);
		ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.MonsterXPosArray[Game.mon.GoAttackValUse], &Game.mon.MonsterXPos[Game.mon.GoAttackValUse], sizeof(Game.mon.MonsterXPos[Game.mon.GoAttackValUse]), NULL);

		//Checking Real or Not Real for Attack Value
		if (Game.mon.CheckIsReal[Game.mon.GoAttackValUse][0] != 65535 || Game.mon.MonsterHP[Game.mon.GoAttackValUse] == 0 || Game.mon.MonsterYPos[Game.mon.GoAttackValUse] >= 64536 || Game.mon.MonsterYPos[Game.mon.GoAttackValUse] < 0 || (Game.mon.MonsterYPos[Game.mon.GoAttackValUse] > Game.plr.PlayerYPos + Game.cp.ScreenResYHalf || Game.plr.PlayerYPos - Game.cp.ScreenResYHalf > Game.mon.MonsterYPos[Game.mon.GoAttackValUse]) || (Game.mon.MonsterXPos[Game.mon.GoAttackValUse] > Game.plr.PlayerXPos + Game.cp.ScreenResXHalf || Game.plr.PlayerXPos - Game.cp.ScreenResXHalf > Game.mon.MonsterXPos[Game.mon.GoAttackValUse])) {
			toggleAutoAttack(false, true);
			return;
		}

		if (labelTargetName->Text == "???" || labelTargetName->Text == "Finding...") {
			memcpy(Game.mon.MonsterNamestempOne, &Game.mon.MonsterNameArray[Game.mon.GoAttackValUse][0], 64);
			labelTargetName->Text = gcnew String(Game.mon.MonsterNamestempOne);
		}

		labelTargetHealth->Text = Game.mon.MonsterHP[Game.mon.GoAttackValUse].ToString();

		//Find nearest Object and set mouse Coords
		findNearestObject(Game.mon.MonsterXPos, Game.mon.MonsterYPos, Game.mon.GoAttackValUse);

		//Set Cursor to Monster
		SetCursorPos(Game.cp.NextXPos, Game.cp.NextYPos);

	}

	//Click Object by Timer
	private: System::Void timerAutoClick_Tick(System::Object^ sender, System::EventArgs^ e) {

		if (timerAutoAttackNav->Enabled == true) {

			makeFocus(Game.ini.Hwnd);

			Sleep((rand() % 5 + 1) * 12);
			SendInput(1, Game.cp.InputM, sizeof(INPUT));
			Sleep((rand() % 5 + 1) * 12);
			SendInput(2, Game.cp.InputM, sizeof(INPUT));
		}
	}

	//Auto Heal Player after being under certain percent
	private: System::Void timerAutoHeal_Tick(System::Object^ sender, System::EventArgs^ e) {

		if (checkBoxAutoHP->Checked) {

			if (Game.plr.PlayerHealth <= Game.plr.PlayerMaxHealth * (autoHP * 0.01)) {
				makeFocus(Game.ini.Hwnd);

				SendInput(1, &Game.cp.InputK[0], sizeof(INPUT));
				Sleep((rand() % 5 + 1) * 12);
				Game.cp.InputK[0].ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
				SendInput(1, &Game.cp.InputK[0], sizeof(INPUT));
				Game.cp.InputK[0].ki.dwFlags = KEYEVENTF_SCANCODE;

				Sleep((rand() % 5 + 1) * 12);

				SendInput(1, &Game.cp.InputK[5], sizeof(INPUT));
				Sleep((rand() % 5 + 1) * 12);
				Game.cp.InputK[5].ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
				SendInput(1, &Game.cp.InputK[5], sizeof(INPUT));
				Game.cp.InputK[5].ki.dwFlags = KEYEVENTF_SCANCODE;
			}
		}


		if (checkBoxAutoMP->Checked) {

			if (Game.plr.PlayerMana <= Game.plr.PlayerMaxMana * (autoMP * 0.01)) {

				makeFocus(Game.ini.Hwnd);

				SendInput(1, &Game.cp.InputK[0], sizeof(INPUT));
				Sleep((rand() % 5 + 1) * 12);
				Game.cp.InputK[0].ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
				SendInput(1, &Game.cp.InputK[0], sizeof(INPUT));
				Game.cp.InputK[0].ki.dwFlags = KEYEVENTF_SCANCODE;

				Sleep((rand() % 5 + 1) * 12);

				SendInput(1, &Game.cp.InputK[6], sizeof(INPUT));
				Sleep((rand() % 5 + 1) * 12);
				Game.cp.InputK[6].ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
				SendInput(1, &Game.cp.InputK[6], sizeof(INPUT));
				Game.cp.InputK[6].ki.dwFlags = KEYEVENTF_SCANCODE;
			}
		}
	}

	//Listener for User inputs shortcut keys
	private: System::Void timerListen_Tick(System::Object^ sender, System::EventArgs^ e) {

		if (GetAsyncKeyState(VK_DOWN) & 0x8000) {

			attachToGame();

			Sleep(1000);
		}

		if (clientSuccess) {

			if (GetAsyncKeyState(VK_UP) & 0x8000) {

				if (timerAutoAttack->Enabled == true) {
					checkBoxAutoAttack->Checked = false;
					toggleAutoAttack(false, false);
				}
				else {
					checkBoxAutoAttack->Checked = true;
					toggleAutoAttack(true, false);
				}

				Sleep(1000);
			}
		}
	}

	//Timer for performing functions at 1 second intervals
	private: System::Void timerOneSecond_Tick(System::Object^ sender, System::EventArgs^ e) {

		if (clientSuccess) {

			//Constantly Draw Rect for Mouse Movements To-Do: Draw once and only draw when position changed
			GetWindowRect(Game.ini.Hwnd, &Game.cp.Screen);

			if (checkBoxAutoCast->Checked) {

				int i = 0;
				for (i; i < 5; i++) {

					int j = 0;
					for (j; j < 5; j++) {

						if (Game.plr.currentSkillTimes[i][j] == -1 && Game.plr.skillTimes[i][j] != -1) {
						Game.plr.currentSkillTimes[i][j] = Game.plr.skillTimes[i][j];
						}

						if (Game.plr.skillTimes[i][j] >= Game.plr.currentSkillTimes[i][j] && (Game.plr.currentSkillTimes[i][j] != 0 || Game.plr.currentSkillTimes[i][j] != NULL)) {
							Game.plr.currentSkillTimes[i][j] -= 1;
						}
						else if (Game.plr.currentSkillTimes[i][j] == 0) {
							castSkill(i, j);
							Sleep(500);
							Game.plr.currentSkillTimes[i][j] = Game.plr.skillTimes[i][j] - 1;
						}
					}
				}
			}
		}
	}

	//Active Tool Info Updater
	private: System::Void timerToolInfoUpdate_Tick(System::Object^ sender, System::EventArgs^ e) {

		if (clientSuccess) {

			//ProcessMemory Reading for information
			ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.PlayerNameBase, &Game.plr.PlayerNameArray[0], 64, 0);
			memcpy(Game.plr.PlayerName, &Game.plr.PlayerNameArray[0], 64);
			ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.PlayerLevelBase, &Game.plr.PlayerLevel, sizeof(Game.plr.PlayerLevel), NULL);
			ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.PlayerHealthBase, &Game.plr.PlayerHealth, sizeof(Game.plr.PlayerHealth), NULL);
			ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.PlayerMaxHealthBase, &Game.plr.PlayerMaxHealth, sizeof(Game.plr.PlayerMaxHealth), NULL);
			ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.PlayerMaxManaBase, &Game.plr.PlayerMaxMana, sizeof(Game.plr.PlayerMaxMana), NULL);
			ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.PlayerManaBase, &Game.plr.PlayerMana, sizeof(Game.plr.PlayerMana), NULL);
			ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.PlayerXPosBase, &Game.plr.PlayerXPos, sizeof(Game.plr.PlayerXPos), NULL);
			ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.PlayerYPosBase, &Game.plr.PlayerYPos, sizeof(Game.plr.PlayerYPos), NULL);
			ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.MouseXPosBase, &Game.cp.MouseXPos, sizeof(Game.cp.MouseXPos), NULL);
			ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.MouseYPosBase, &Game.cp.MouseYPos, sizeof(Game.cp.MouseYPos), NULL);
			ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.MapScreenXPos, &Game.cp.MapScreenXPos, sizeof(Game.cp.MapScreenXPos), NULL);
			ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.MapScreenYPos, &Game.cp.MapScreenYPos, sizeof(Game.cp.MapScreenYPos), NULL);

			if (!oneTimeData) {
				ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.ScreenResXBase, &Game.cp.ScreenResX, sizeof(Game.cp.ScreenResX), NULL);
				ReadProcessMemory(Game.ini.Handlev, (LPCVOID)Game.base.ScreenResYBase, &Game.cp.ScreenResY, sizeof(Game.cp.ScreenResY), NULL);
				//Create the Half resolutions
				Game.cp.ScreenResXHalf = Game.cp.ScreenResX / 2;
				Game.cp.ScreenResYHalf = Game.cp.ScreenResY / 2;
				//DevGUI Single Update Labels
				DevGUI->labelScreenResX->Text = Game.cp.ScreenResX.ToString();
				DevGUI->labelScreenResY->Text = Game.cp.ScreenResY.ToString();

				oneTimeData = true;
			}

			if (checkBoxAutoAttack->Checked) {
				//Check and Set AutoClick Delay Interval
				setTimerInterval(textBoxClickDelay, timerAutoClick);
				//Find Monster Information by adding monster offsets with list locations from Memory
				mapMonsterInfo(Game.base.MonsterXPosArray, Game.offs.MonsterXPosOffset, Game.offs.PIM, 6, 7, 0, 2);
				mapMonsterInfo(Game.base.MonsterYPosArray, Game.offs.MonsterYPosOffset, Game.offs.PIM, 6, 7, 1, 2);
				mapMonsterInfo(Game.base.MonsterID, Game.offs.MonsterIDOffset, Game.offs.PIM, 6, 7, 2, 2);
				mapMonsterInfo(Game.base.MonsterCheckIsReal, Game.offs.MonsterCheckIsRealOffset, Game.offs.PIM, 6, 7, 3, 2);
				mapMonsterInfo(Game.base.MonsterNameaddress, Game.offs.MonsterNameArrayOneoffset, Game.offs.PIM, 6, 7, 4, 2);
				mapMonsterInfo(Game.base.MonsterHPBase, Game.offs.MonsterHPBaseOffset, Game.offs.PIM, 6, 7, 5, 2);
			}

			if (checkBoxGunCrit->Checked && checkBoxGunCrit->Checked){
				int rd = (rand() % 100) + 1;
				if (rd > 71) {
					WriteProcessMemory(Game.ini.Handlev, (LPVOID)Game.base.PlayerGunCritBase, &Game.hvcbt.PlayerGunCritByte[1], sizeof(Game.hvcbt.PlayerGunCritByte[1]), NULL);
				}
				else {
					WriteProcessMemory(Game.ini.Handlev, (LPVOID)Game.base.PlayerGunCritBase, &Game.hvcbt.PlayerGunCritByte[0], sizeof(Game.hvcbt.PlayerGunCritByte[0]), NULL);
				}
			}
			
			if (checkBoxAutoHP->Checked && autoHP.ToString() != textBoxAutoHPPercent->Text) {
				//Check and Set Auto Heal Percentages
				setAutoPercent(textBoxAutoHPPercent);

			}

			if (checkBoxAutoMP->Checked && autoMP.ToString() != textBoxAutoMPPercent->Text) {
				//Check and Set Auto Heal Percentages
				setAutoPercent(textBoxAutoMPPercent);
			}

			//Tool Continuos Update Labels
			labelPlayerName->Text = gcnew String(Game.plr.PlayerName);
			labelPlayerLevel->Text = Game.plr.PlayerLevel.ToString();
			labelPlayerCurrentHP->Text = Game.plr.PlayerHealth.ToString();
			labelPlayerMaxHP->Text = Game.plr.PlayerMaxHealth.ToString();
			labelPlayerCurrentMP->Text = Game.plr.PlayerMana.ToString();
			labelPlayerMaxMP->Text = Game.plr.PlayerMaxMana.ToString();

			//DevGUI Continuos Update Labels
			DevGUI->labelMouseXPos->Text = Game.cp.MouseXPos.ToString();
			DevGUI->labelMouseYPos->Text = Game.cp.MouseYPos.ToString();
			DevGUI->labelPlayerXPos->Text = Game.plr.PlayerXPos.ToString();
			DevGUI->labelPlayerYPos->Text = Game.plr.PlayerYPos.ToString();
			DevGUI->labelMapScreenXPos->Text = Game.cp.MapScreenXPos.ToString();
			DevGUI->labelMapScreenYPos->Text = Game.cp.MapScreenYPos.ToString();
			
			if (timerAutoAttackNav->Enabled == true) {
				DevGUI->labelTargetXPos->Text = Game.mon.MonsterXPos[Game.mon.GoAttackValUse].ToString();
				DevGUI->labelTargetYPos->Text = Game.mon.MonsterYPos[Game.mon.GoAttackValUse].ToString();
			}
		}
	}
	
	//Set Timer Info from TextBox
	private: System::Void setTimerInterval(TextBox^ tb, Timer^ tim) {

		int parsedValue;

		if (!String::IsNullOrEmpty(tb->Text) && Int32::TryParse(tb->Text, OUT parsedValue) && parsedValue <= 10000 && parsedValue >= 10) {
			tim->Interval = parsedValue;
		}
		else {
			tb->Text = "1000";
			MessageBox::Show("You need to enter a number between 10 and 10000 and the TextBox cannot be empty");
			return;
		}
	}

	//Set Auto Heal Percentages
	private: System::Void setAutoPercent(TextBox^ tb) {

		int parsedValue;

		if (!String::IsNullOrEmpty(tb->Text) && Int32::TryParse(tb->Text, OUT parsedValue) && parsedValue <= 99 && parsedValue >= 1) {
			
			if (tb == textBoxAutoHPPercent) {
				autoHP = parsedValue;
			}
			else {
				autoMP = parsedValue;
			}
		}
		else {
			tb->Text = "65";
			MessageBox::Show("You need to enter a number between 1 and 99 and the TextBox cannot be empty");
			return;
		}
	}

	//Turn on and off Auto Attack and Nav
	private: System::Void toggleAutoAttack(bool toggle, bool type) {

		if (toggle) {
			timerAutoAttack->Enabled = true;
		}
		else {
			labelTargetName->Text = "???";
			labelTargetHealth->Text = "???";
			DevGUI->labelTargetXPos->Text = "???";
			DevGUI->labelTargetYPos->Text = "???";
			Game.mon.CheckAutoAttackvalue = 0;
			Game.mon.GoAttackValUse = -1;

			for (int i = 0;  i < 516; i++) {
				Game.mon.NearCanAttackArray[i] = { 0 };
			}

			(type ? timerAutoAttackNav->Enabled = false : timerAutoAttack->Enabled = false);
		}
	}

	//Turn on and off Auto Heal
	private: System::Void toggleAutoHeal(bool toggle) {

		if (toggle) {
			timerAutoHeal->Enabled = true;
		}
		else {
			timerAutoHeal->Enabled = false;
		}
	}

	//Turn on and off Auto Cast
	public: System::Void toggleAutoCast(bool toggle) {
		
		if (toggle) {
			gatherSkillTimes(SkillGUI1->skillTimesPointer, Game.plr.skillTimes, SkillGUI1->tab);
			gatherSkillTimes(SkillGUI2->skillTimesPointer, Game.plr.skillTimes, SkillGUI2->tab);
			gatherSkillTimes(SkillGUI3->skillTimesPointer, Game.plr.skillTimes, SkillGUI3->tab);
			gatherSkillTimes(SkillGUI4->skillTimesPointer, Game.plr.skillTimes, SkillGUI4->tab);
			gatherSkillTimes(SkillGUI5->skillTimesPointer, Game.plr.skillTimes, SkillGUI5->tab);
		}
		else {
			int i = 0;
			for (i; i < 5; i++) {
				for (int j = 0; j < 6; j++) {
					Game.plr.currentSkillTimes[i][j] = { -1 };
					Game.plr.skillTimes[i][j] = { -1 };
				}
			}
		}
	}

	//Turn on and off Auto Heal
	private: System::Void toggleHvcks(bool toggle, CheckBox^ hvck) {

		int OnOff;
		(toggle ? OnOff = 1 : OnOff = 0);
		
		if (hvck == checkBoxGunCrit) {
			WriteProcessMemory(Game.ini.Handlev, (LPVOID)Game.base.PlayerGunCritBase, &Game.hvcbt.PlayerGunCritByte[OnOff], sizeof(Game.hvcbt.PlayerGunCritByte[OnOff]), NULL);
		}

		if (hvck == checkBoxNoReload) {
			WriteProcessMemory(Game.ini.Handlev, (LPVOID)Game.base.PlayerReloadBase, &Game.hvcbt.PlayerReloadByte[OnOff], sizeof(Game.hvcbt.PlayerReloadByte[OnOff]), NULL);
		}

		if (hvck == checkBoxItemDetect) {
			WriteProcessMemory(Game.ini.Handlev, (LPVOID)Game.base.PlayerItemDetectBase, &Game.hvcbt.PlayerItemDetectByte[OnOff], sizeof(Game.hvcbt.PlayerItemDetectByte[OnOff]), NULL);
			WriteProcessMemory(Game.ini.Handlev, (LPVOID)Game.base.PlayerItemDetect2Base, &Game.hvcbt.PlayerItemDetectByte[OnOff], sizeof(Game.hvcbt.PlayerItemDetectByte[OnOff]), NULL);
		}
	}

	//Set Trickster Into Focus
	private: System::Void makeFocus(HWND hwnd) {

		SetForegroundWindow(hwnd);
		SetActiveWindow(hwnd);

	}

	//Keypress for Auto Cast
	private: System::Void castSkill(int set, int skill) {

		makeFocus(Game.ini.Hwnd);

		timerAutoClick->Enabled = false;

		Sleep((rand() % 5 + 1) * 12);

		SendInput(1, &Game.cp.InputK[set], sizeof(INPUT));
		Sleep((rand() % 5 + 1) * 12);
		Game.cp.InputK[set].ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
		SendInput(1, &Game.cp.InputK[set], sizeof(INPUT));
		Game.cp.InputK[set].ki.dwFlags = KEYEVENTF_SCANCODE;

		Sleep((rand() % 5 + 1) * 12);

		SendInput(1, &Game.cp.InputK[skill + 7], sizeof(INPUT));
		Sleep((rand() % 5 + 1) * 12);
		Game.cp.InputK[skill + 7].ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
		SendInput(1, &Game.cp.InputK[skill + 7], sizeof(INPUT));
		Game.cp.InputK[skill + 7].ki.dwFlags = KEYEVENTF_SCANCODE;

		timerAutoClick->Enabled = true;

	}

	//Gather Skill Times from the other GUIs by pointer
	private: System::Void gatherSkillTimes(int * st, int arr[5][6], int tab) {

		int * skt = new int[5];
		for (int i = 0; i < 6; i++) {
			skt[i] = st[i];
			arr[tab - 1][i] = skt[i];
		}
		delete[]skt;

	}

	//Calculate Nearest Object and sets rect cords accordingly
	private: System::Void findNearestObject(WORD oX[], WORD oY[], int gV) {

		//Calculate Where to place mouse cursor relative to nearest object

		//Player X Position Calculations
		if (Game.plr.PlayerXPos > Game.cp.ScreenResXHalf && oX[gV] > Game.cp.ScreenResXHalf) { 
			if ((Game.cp.MapScreenXPos + Game.cp.ScreenResXHalf) >= Game.plr.PlayerXPos) {
				if (Game.plr.PlayerXPos < oX[gV]) {
					Game.cp.NextXPos = Game.cp.ScreenResXHalf + (oX[gV] - Game.plr.PlayerXPos);
					if (Game.cp.NextXPos > (Game.cp.ScreenResX * 0.95)) {
						Game.cp.NextXPos = (Game.cp.ScreenResXHalf * 1.2);
					}
					Game.cp.NextXPos += Game.cp.Screen.left;
				}
				else {
					Game.cp.NextXPos = Game.cp.ScreenResXHalf - (Game.plr.PlayerXPos - oX[gV]);
					if (Game.cp.NextXPos < 40) {
						Game.cp.NextXPos = (Game.cp.ScreenResXHalf * 0.9);
					}
					Game.cp.NextXPos += Game.cp.Screen.left;

				}
			}
			else if ((Game.cp.MapScreenXPos + Game.cp.ScreenResXHalf) < Game.plr.PlayerXPos) {
				if ((Game.cp.MapScreenXPos + Game.cp.ScreenResXHalf) < oX[gV]) {
					Game.cp.NextXPos = Game.cp.ScreenResXHalf + (oX[gV] - (Game.cp.MapScreenXPos + Game.cp.ScreenResXHalf));
					if (Game.cp.NextXPos > (Game.cp.ScreenResX * 0.95)) {
						Game.cp.NextXPos = (Game.cp.ScreenResX * 0.95);
					}
					if (Game.cp.NextXPos < 40) {
						Game.cp.NextXPos = 40;
					}
					Game.cp.NextXPos += Game.cp.Screen.left;
				}
				else {
					Game.cp.NextXPos = Game.cp.ScreenResXHalf - ((Game.cp.MapScreenXPos + Game.cp.ScreenResXHalf) - oX[gV]);
					if (Game.cp.NextXPos < 40) {
						Game.cp.NextXPos = 40;
					}
					if (Game.cp.NextXPos > (Game.cp.ScreenResX * 0.95)) {
						Game.cp.NextXPos = (Game.cp.ScreenResX * 0.95);
					}
					Game.cp.NextXPos += Game.cp.Screen.left;

				}
			}
		}
		else if (Game.plr.PlayerXPos > Game.cp.ScreenResXHalf && oX[gV] < Game.cp.ScreenResXHalf) {
			Game.cp.NextXPos = Game.plr.PlayerXPos % Game.cp.ScreenResXHalf;
			if (Game.cp.NextXPos < 40) {
				Game.cp.NextXPos = (Game.cp.ScreenResXHalf * 0.9);
			}
			Game.cp.NextXPos += Game.cp.Screen.left;
		}
		else if (Game.plr.PlayerXPos < Game.cp.ScreenResXHalf && oX[gV] > Game.cp.ScreenResXHalf) {
			Game.cp.NextXPos = Game.cp.ScreenResXHalf + Game.plr.PlayerXPos;
			if (Game.cp.NextXPos > (Game.cp.ScreenResX * 0.95)) {
				Game.cp.NextXPos = (Game.cp.ScreenResXHalf * 1.2);
			}
			Game.cp.NextXPos += Game.cp.Screen.left;
		}
		else if (Game.plr.PlayerXPos < Game.cp.ScreenResXHalf && oX[gV] < Game.cp.ScreenResXHalf) {
			Game.cp.NextXPos = oX[gV];
			if (Game.cp.NextXPos < 40) {
				Game.cp.NextXPos = 40;
			}
			Game.cp.NextXPos += Game.cp.Screen.left;
		}

		//Player Y Position Cals
		if (Game.plr.PlayerYPos > Game.cp.ScreenResYHalf && oY[gV] > Game.cp.ScreenResYHalf) {
			if ((Game.cp.MapScreenYPos + Game.cp.ScreenResYHalf) >= Game.plr.PlayerYPos) {
				if (Game.plr.PlayerYPos < oY[gV]) {
					Game.cp.NextYPos = Game.cp.ScreenResYHalf + (oY[gV] - Game.plr.PlayerYPos);
					if (Game.cp.NextYPos > (Game.cp.ScreenResY * 0.95)) {
						Game.cp.NextYPos = (Game.cp.ScreenResYHalf * 1.2);
					}
					Game.cp.NextYPos += Game.cp.Screen.top;
				}
				else {
					Game.cp.NextYPos = Game.cp.ScreenResYHalf - (Game.plr.PlayerYPos - oY[gV]);
					if (Game.cp.NextYPos < 40) {
						Game.cp.NextYPos = (Game.cp.ScreenResYHalf * 0.9);
					}
					Game.cp.NextYPos += Game.cp.Screen.top;

				}
			}
			else if ((Game.cp.MapScreenYPos + Game.cp.ScreenResYHalf) < Game.plr.PlayerYPos) {
				if ((Game.cp.MapScreenYPos + Game.cp.ScreenResYHalf) < oY[gV]) {
					Game.cp.NextYPos = Game.cp.ScreenResYHalf + (oY[gV] - (Game.cp.MapScreenYPos + Game.cp.ScreenResYHalf));
					if (Game.cp.NextYPos > (Game.cp.ScreenResY * 0.95)) {
						Game.cp.NextYPos = (Game.cp.ScreenResY * 0.95);
					}
					if (Game.cp.NextYPos < 40) {
						Game.cp.NextYPos = 40;
					}
					Game.cp.NextYPos += Game.cp.Screen.top;
				}
				else {
					Game.cp.NextYPos = Game.cp.ScreenResYHalf - ((Game.cp.MapScreenYPos + Game.cp.ScreenResYHalf) - oY[gV]);
					if (Game.cp.NextYPos < 40) {
						Game.cp.NextYPos = 40;
					}
					if (Game.cp.NextYPos > (Game.cp.ScreenResY * 0.95)) {
						Game.cp.NextYPos = (Game.cp.ScreenResY * 0.95);
					}
					Game.cp.NextYPos += Game.cp.Screen.top;

				}

			}
		}
		else if (Game.plr.PlayerYPos > Game.cp.ScreenResYHalf && oY[gV] < Game.cp.ScreenResYHalf) {
			Game.cp.NextYPos = oY[gV] % Game.cp.ScreenResYHalf;
			if (Game.cp.NextYPos < 40) {
				Game.cp.NextYPos = (Game.cp.ScreenResYHalf * 0.9);
			}
			Game.cp.NextYPos += Game.cp.Screen.top;

		}
		else if (Game.plr.PlayerYPos < Game.cp.ScreenResYHalf && oY[gV] > Game.cp.ScreenResYHalf) {
			Game.cp.NextYPos = Game.cp.ScreenResYHalf + oY[gV];
			if (Game.cp.NextYPos > (Game.cp.ScreenResY * 0.95)) {
				Game.cp.NextYPos = (Game.cp.ScreenResYHalf * 0.9);
			}
			Game.cp.NextYPos += Game.cp.Screen.top;


		}
		else if (Game.plr.PlayerYPos < Game.cp.ScreenResYHalf && oY[gV] < Game.cp.ScreenResYHalf) {
			Game.cp.NextYPos = oY[gV];
			if (Game.cp.NextYPos < 40) {
				Game.cp.NextYPos = 40;
			}
			Game.cp.NextYPos += Game.cp.Screen.top;
		}

		return;
	}

	//Gather Monster info from memory Postion to arrays
	private: System::Void mapMonsterInfo(DWORD set[], DWORD offset[], DWORD PIM[], int p1, int p2, int p3, int p4) {

		int i = 0;
		for (int j = 1; j < 17; j++) {
			for (i; i < 16 * j; i++) {
				set[i] = FindaddressAddy(2, Game.ini.Handlev, offset, Game.base.MonsterBaseAddress);
				offset[1] = offset[1] + PIM[p1];
			}
			offset[0] = offset[0] + PIM[p2];
			offset[1] = PIM[p3];
		}
		offset[0] = PIM[p4];
		offset[1] = PIM[p3];
	}

	//Add values to bases for objects
	private: System::Void assignObjValues() {

		//Game Info
		Game.ini.GameBase = GetModuleBaseAddress(Game.ini.PiD, L"Trickster.exe");
		Game.ini.GameBaseLib = GetModuleBaseAddress(Game.ini.PiD, L"TrickLib.dll");

		//Player Info
		//Trickster.exe
		Game.base.PlayerStatusBase = Game.ini.GameBase + 0x85B42C; //Updated for PlayTrickster
		Game.base.PlayerXPosBase = FindaddressAddy(2, Game.ini.Handlev, Game.offs.PlayerXOffset, Game.base.PlayerStatusBase);
		Game.base.PlayerYPosBase = FindaddressAddy(2, Game.ini.Handlev, Game.offs.PlayerYOffset, Game.base.PlayerStatusBase);
		Game.base.PlayerNameBase = FindaddressAddy(2, Game.ini.Handlev, Game.offs.PlayerNameOffset, Game.base.PlayerStatusBase);
		Game.base.PlayerLevelBase = FindaddressAddy(2, Game.ini.Handlev, Game.offs.PlayerLevelOffset, Game.base.PlayerStatusBase);
		Game.base.PlayerHealthBase = FindaddressAddy(2, Game.ini.Handlev, Game.offs.PlayerHealthOffset, Game.base.PlayerStatusBase);
		Game.base.PlayerMaxHealthBase = FindaddressAddy(2, Game.ini.Handlev, Game.offs.PlayerMaxHealthOffset, Game.base.PlayerStatusBase);
		Game.base.PlayerMaxManaBase = FindaddressAddy(2, Game.ini.Handlev, Game.offs.PlayerMaxManaOffset, Game.base.PlayerStatusBase);
		Game.base.PlayerManaBase = FindaddressAddy(2, Game.ini.Handlev, Game.offs.PlayerManaOffset, Game.base.PlayerStatusBase);

		//TrickLib.dll
		Game.base.PlayerBaseLib = Game.ini.GameBaseLib + 0x28DF94; //Updated for PlayTrickster
		Game.base.PlayerStatusBaseLib = FindaddressAddy(2, Game.ini.Handlev, Game.offs.PlayerStatusBaseLibOffset, Game.base.PlayerBaseLib);
		Game.base.PlayerReloadBase = FindaddressAddy(2, Game.ini.Handlev, Game.offs.PlayerReloadOffset, Game.base.PlayerStatusBaseLib);
		Game.base.PlayerGunCritBase = FindaddressAddy(2, Game.ini.Handlev, Game.offs.PlayerGunCritOffset, Game.base.PlayerStatusBaseLib);
		Game.base.PlayerItemDetectBase = FindaddressAddy(2, Game.ini.Handlev, Game.offs.PlayerItemDetectOffset, Game.base.PlayerStatusBaseLib);
		Game.base.PlayerItemDetect2Base = FindaddressAddy(2, Game.ini.Handlev, Game.offs.PlayerItemDetect2Offset, Game.base.PlayerStatusBaseLib);

		//Mouse Scans
		//Game.base.MouseStatusBase = Game.ini.GameBase + 0xAFFED8;
		//Game.base.MouseStatus = FindaddressAddy(5, Game.ini.Handlev, mou.MouseStatusOffset, mou.MouseStatusBase);

		Game.base.MouseXPosBase = Game.ini.GameBase + 0xA399F4; //Updated for PlayTrickster
		Game.base.MouseYPosBase = Game.ini.GameBase + 0xA399F6; //Updated for PlayTrickster

		//Map Scans
		Game.base.ScreenResXBase = Game.ini.GameBase + 0xA21820; //Updated for PlayTrickster
		Game.base.ScreenResYBase = Game.ini.GameBase + 0xA21824; //Updated for PlayTrickster
		Game.base.MapScreenBase = Game.ini.GameBase + 0xA20260; //Updated for PlayTrickster
		Game.base.MapScreenXPos = FindaddressAddy(1, Game.ini.Handlev, Game.offs.MapScreenXPosOffset, Game.base.MapScreenBase);
		Game.base.MapScreenYPos = FindaddressAddy(1, Game.ini.Handlev, Game.offs.MapScreenYPosOffset, Game.base.MapScreenBase);

		//Monster Base
		Game.base.MonsterBaseAddress = Game.ini.GameBase + 0x860014; //Updated for PlayTrickster

		//Item Base
		//itm.ItemBaseAddress = Game.ini.GameBase + 0x864124; //??? Correct

		//Loop to Set Mouse and Key Inputs
		for (int i = 0; i < 14; i++) {

			//Mouse Input Framework based on 2 Inputs (Mouse LeftDown and Mouse LeftUp (Left Click))
			if (i == 0 || i == 1) {
				Game.cp.InputM[i].type = INPUT_MOUSE;
				//Set Mouse Input Type (Left Click Actions)
				(i == 0 ? Game.cp.InputM[i].mi.dwFlags = MOUSEEVENTF_LEFTDOWN : Game.cp.InputM[i].mi.dwFlags = MOUSEEVENTF_LEFTUP);
			}

			//Key Input Framework based on 14 Inputs (Num 1-5, F1-F8)
			Game.cp.InputK[i].type = INPUT_KEYBOARD;
			Game.cp.InputK[i].ki.time = 0;
			Game.cp.InputK[i].ki.wVk = 0;
			Game.cp.InputK[i].ki.dwExtraInfo = 0;
			Game.cp.InputK[i].ki.dwFlags = KEYEVENTF_SCANCODE;

			//Sets the Key Input Types
			if (i < 5) {
				//Sets the Key Input Type (Num 1 - 5)
				Game.cp.InputK[i].ki.wScan = i + 2; //Num 1 = 0x2/int 2 || Num 2 = 0x3/int 3 .....
			}
			else if (i > 4 && i < 13) {
				//Sets the Key Input Type (F1 -F8)
				Game.cp.InputK[i].ki.wScan = i + 54; //F1-8 = 0x3B-0x42/int 59-66 : Logic i (5 or more) + 54 = FKey
			}
			else if (i > 12) {
				Game.cp.InputK[i].ki.wScan = 44; //44 = char "Z"
			}
		}

		int i = 0;
		for (i; i < 5; i++) {
			for (int j = 0; j < 6; j++) {
				Game.plr.currentSkillTimes[i][j] = { -1 };
				Game.plr.skillTimes[i][j] = { -1 };
			}
		}
	}

	//Gathers the Playtrickster Client info and creates a process handle
	private: System::Void attachToGame() {

		clientSuccess = false;
		Game.ini.Hwnd = NULL;
		Game.ini.Handlev = NULL;
		Game.ini.PiD = NULL;

		//Locate Window
		Game.ini.Hwnd = FindWindowA("xmflrtmxj", NULL);

		//Perform Checks
		if (Game.ini.Hwnd != NULL) {

			GetWindowThreadProcessId(Game.ini.Hwnd, &Game.ini.PiD);

			Game.ini.Handlev = OpenProcess(PROCESS_ALL_ACCESS, FALSE, Game.ini.PiD);

			assignObjValues();

			Game.mon.CheckAutoAttackvalue = 0;
			Game.mon.GoAttackValUse = -1;

			clientSuccess = true;

			return;
		}
		else {
			MessageBox::Show("PlayTrickster is Not Open");
			return;
		}
	}
};
}