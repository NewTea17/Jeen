#pragma once

namespace Jeen 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public: MainWindow(void);

	protected: ~MainWindow();

	
	private: System::Windows::Forms::Splitter^ PanelSplitter;
	private: System::Windows::Forms::TextBox^  EnteredTextBox;
	private: System::Windows::Forms::Button^   SendButton;
	private: System::Windows::Forms::Panel^	   MainPanel;
	private: System::Windows::Forms::Panel^    ContactsPanel;
	private: System::Windows::Forms::Panel^    MainChatPanel;
	private: System::Windows::Forms::Panel^    UserPanel;
	private: System::Windows::Forms::Label^    IsActiveBox;
	private: System::Windows::Forms::Label^    UserName;
	private: System::Windows::Forms::Panel^    ChatPanel;

	private: System::ComponentModel::Container^ components;


	private: void InitializeComponent(void);
	//private: void InitializeMessanges(void);
	private: void SendMessage();



	private: System::Void SendButton_Click(System::Object^ sender, System::EventArgs^ e);


	};
}
