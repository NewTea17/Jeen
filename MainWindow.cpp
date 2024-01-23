#include <vector>
#include "MainWindow.h"

Jeen::MainWindow::MainWindow(void)
{
	InitializeComponent();

	StartPosition = FormStartPosition::CenterScreen;
}

Jeen::MainWindow::~MainWindow()
{
	if (components)
	{
		delete components;
	}
}

void Jeen::MainWindow::InitializeComponent(void)
{
    this->ContactsPanel = (gcnew System::Windows::Forms::Panel());
    this->PanelSplitter = (gcnew System::Windows::Forms::Splitter());
    this->MainChatPanel = (gcnew System::Windows::Forms::Panel());
    this->ChatPanel = (gcnew System::Windows::Forms::Panel());
    this->UserPanel = (gcnew System::Windows::Forms::Panel());
    this->IsActiveBox = (gcnew System::Windows::Forms::Label());
    this->UserName = (gcnew System::Windows::Forms::Label());
    this->SendButton = (gcnew System::Windows::Forms::Button());
    this->EnteredTextBox = (gcnew System::Windows::Forms::TextBox());
    this->ContactsPanel->SuspendLayout();
    this->MainChatPanel->SuspendLayout();
    this->UserPanel->SuspendLayout();
    this->SuspendLayout();
    // 
    // ContactsPanel
    // 
    this->ContactsPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left));
    this->ContactsPanel->Controls->Add(this->PanelSplitter);
    this->ContactsPanel->Location = System::Drawing::Point(6, 4);
    this->ContactsPanel->Name = L"ContactsPanel";
    this->ContactsPanel->Size = System::Drawing::Size(277, 532);
    this->ContactsPanel->TabIndex = 0;
    // 
    // PanelSplitter
    // 
    this->PanelSplitter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
        static_cast<System::Int32>(static_cast<System::Byte>(43)));
    this->PanelSplitter->Location = System::Drawing::Point(0, 0);
    this->PanelSplitter->Name = L"PanelSplitter";
    this->PanelSplitter->Size = System::Drawing::Size(257, 532);
    this->PanelSplitter->TabIndex = 0;
    this->PanelSplitter->TabStop = false;
    // 
    // MainChatPanel
    // 
    this->MainChatPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->MainChatPanel->Controls->Add(this->ChatPanel);
    this->MainChatPanel->Controls->Add(this->UserPanel);
    this->MainChatPanel->Controls->Add(this->SendButton);
    this->MainChatPanel->Controls->Add(this->EnteredTextBox);
    this->MainChatPanel->Location = System::Drawing::Point(269, 4);
    this->MainChatPanel->Name = L"MainChatPanel";
    this->MainChatPanel->Size = System::Drawing::Size(843, 532);
    this->MainChatPanel->TabIndex = 1;
    // 
    // ChatPanel
    // 
    this->ChatPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
        | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->ChatPanel->AutoScroll = true;
    this->ChatPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(22)),
        static_cast<System::Int32>(static_cast<System::Byte>(33)));
    this->ChatPanel->Location = System::Drawing::Point(1, 72);
    this->ChatPanel->Name = L"ChatPanel";
    this->ChatPanel->Size = System::Drawing::Size(842, 386);
    this->ChatPanel->TabIndex = 3;
    // 
    // UserPanel
    // 
    this->UserPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->UserPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
        static_cast<System::Int32>(static_cast<System::Byte>(43)));
    this->UserPanel->Controls->Add(this->IsActiveBox);
    this->UserPanel->Controls->Add(this->UserName);
    this->UserPanel->Location = System::Drawing::Point(0, 0);
    this->UserPanel->Name = L"UserPanel";
    this->UserPanel->Size = System::Drawing::Size(843, 66);
    this->UserPanel->TabIndex = 2;
    // 
    // IsActiveBox
    // 
    this->IsActiveBox->AutoSize = true;
    this->IsActiveBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->IsActiveBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
        static_cast<System::Int32>(static_cast<System::Byte>(153)));
    this->IsActiveBox->Location = System::Drawing::Point(7, 33);
    this->IsActiveBox->Name = L"IsActiveBox";
    this->IsActiveBox->Size = System::Drawing::Size(143, 18);
    this->IsActiveBox->TabIndex = 1;
    this->IsActiveBox->Text = L"is Active / isn\'t Active";
    // 
    // UserName
    // 
    this->UserName->AutoSize = true;
    this->UserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->UserName->ForeColor = System::Drawing::Color::White;
    this->UserName->Location = System::Drawing::Point(4, 4);
    this->UserName->Name = L"UserName";
    this->UserName->Size = System::Drawing::Size(97, 20);
    this->UserName->TabIndex = 0;
    this->UserName->Text = L"UserName";
    // 
    // SendButton
    // 
    this->SendButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
    this->SendButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(117)),
        static_cast<System::Int32>(static_cast<System::Byte>(153)));
    this->SendButton->FlatAppearance->BorderSize = 0;
    this->SendButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->SendButton->ForeColor = System::Drawing::Color::White;
    this->SendButton->Location = System::Drawing::Point(763, 466);
    this->SendButton->Margin = System::Windows::Forms::Padding(5);
    this->SendButton->Name = L"SendButton";
    this->SendButton->Padding = System::Windows::Forms::Padding(0, 2, 0, 2);
    this->SendButton->Size = System::Drawing::Size(75, 34);
    this->SendButton->TabIndex = 1;
    this->SendButton->Text = L"Send";
    this->SendButton->UseVisualStyleBackColor = false;
    this->SendButton->Click += gcnew System::EventHandler(this, &MainWindow::SendButton_Click);
    // 
    // EnteredTextBox
    // 
    this->EnteredTextBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
        | System::Windows::Forms::AnchorStyles::Right));
    this->EnteredTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
        static_cast<System::Int32>(static_cast<System::Byte>(43)));
    this->EnteredTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
    this->EnteredTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->EnteredTextBox->ForeColor = System::Drawing::SystemColors::InactiveBorder;
    this->EnteredTextBox->Location = System::Drawing::Point(3, 464);
    this->EnteredTextBox->Multiline = true;
    this->EnteredTextBox->Name = L"EnteredTextBox";
    this->EnteredTextBox->Size = System::Drawing::Size(840, 68);
    this->EnteredTextBox->TabIndex = 0;
    // 
    // MainWindow
    // 
    this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
        static_cast<System::Int32>(static_cast<System::Byte>(54)));
    this->ClientSize = System::Drawing::Size(1115, 539);
    this->Controls->Add(this->MainChatPanel);
    this->Controls->Add(this->ContactsPanel);
    this->ForeColor = System::Drawing::Color::White;
    this->MinimumSize = System::Drawing::Size(565, 586);
    this->Name = L"MainWindow";
    this->Text = L"Jeen";
    this->ContactsPanel->ResumeLayout(false);
    this->MainChatPanel->ResumeLayout(false);
    this->MainChatPanel->PerformLayout();
    this->UserPanel->ResumeLayout(false);
    this->UserPanel->PerformLayout();
    this->ResumeLayout(false);

}

void Jeen::MainWindow::SendMessage()
{
    if (EnteredTextBox->Text != "")
    {
        System::Windows::Forms::Panel^ newPanel = gcnew System::Windows::Forms::Panel();
        System::Drawing::Point startPoint(600, 300);
        System::Drawing::Size msgSize(235, 50);

        newPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
        newPanel->Location = startPoint;
        newPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
            static_cast<System::Int32>(static_cast<System::Byte>(51)));
        newPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Right | System::Windows::Forms::AnchorStyles::Bottom));
        newPanel->Size = msgSize;

        ChatPanel->Controls->Add(newPanel);


        System::Windows::Forms::Label^ textLabel = gcnew System::Windows::Forms::Label();

        textLabel->Text = EnteredTextBox->Text;
        textLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
        textLabel->AutoSize = true;


        newPanel->Controls->Add(textLabel);

        int stepBetweenMsg = newPanel->Height;
        for (int i = 0; i < ChatPanel->Controls->Count - 1; i++)
        {
            ChatPanel->Controls[i]->Top -= stepBetweenMsg + 10;
        }

        EnteredTextBox->Text = "";
    }
}

System::Void Jeen::MainWindow::SendButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    SendMessage();
}
