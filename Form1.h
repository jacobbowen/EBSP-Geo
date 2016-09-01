#pragma once
#include "math.h"
#include "vector.h"

namespace EBSP_Geo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
  using namespace System::Drawing::Imaging;


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
      haveALine = false;
	  haveBandProfile = false;
      g = pictureBox1->CreateGraphics();
      pen1 = gcnew Pen(Color::Blue,1.0f);
      pen2 = gcnew Pen(Color::YellowGreen,1.0f);
	  pen3 = gcnew Pen(Color::Red,1.0f);
      pen2->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;
      pen3->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;
      inDrawing = false;
	  profileCenterX = 20;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
      if (bmp1 != nullptr) delete bmp1;
      if (bmp2 != nullptr) delete bmp2;
      if (bmp3 != nullptr) delete bmp3;
      if (bmpIPF != nullptr) delete bmpIPF;

      delete pen1;
      delete pen2;
      delete pen3;
      delete g;
      
			if (components)
			{
				delete components;
			}
    }
  private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
  protected: 
  private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
  private: System::Windows::Forms::ToolStrip^  toolStrip1;
  private: System::Windows::Forms::ToolStripButton^  toolStripButtonLoad;
  private: System::Windows::Forms::ToolStripButton^  toolStripButtonCG1;
  private: System::Windows::Forms::ToolStripButton^  toolStripButtonSave;
  private: System::Windows::Forms::SplitContainer^  splitContainer1;

	private:
		/// <summary>
		/// Required designer variable.
    Bitmap^ bmp1;
    Bitmap^ bmp2;
    Bitmap^ bmp3;
    Bitmap^ bmpIPF;
    int x1,y1,x2,y2;
    Graphics^ g;
    Pen^ pen1;
    Pen^ pen2;
    Pen^ pen3;
    bool inDrawing;
    bool haveALine;
	bool haveBandProfile;
    double DD,DP,SSx; // mm
    double pixSize; // mm/pixel
    Point PC;
    int SW;
	int LW;
	int profileCenterX;
	double slopeGain;

  private: System::Windows::Forms::Label^  label4;
  private: System::Windows::Forms::Label^  label3;
  private: System::Windows::Forms::TextBox^  textBoxPCx;
  private: System::Windows::Forms::Label^  label2;
  private: System::Windows::Forms::TextBox^  textBoxDD;
  private: System::Windows::Forms::Label^  label1;
  private: System::Windows::Forms::TextBox^  textBoxSSy;
  private: System::Windows::Forms::Label^  label6;
  private: System::Windows::Forms::Label^  label7;
  private: System::Windows::Forms::TextBox^  textBoxSSx;
  private: System::Windows::Forms::Label^  label5;
  private: System::Windows::Forms::TextBox^  textBoxPCy;
  private: System::Windows::Forms::ToolStripButton^  toolStripButtonGetBand;
  private: System::Windows::Forms::SplitContainer^  splitContainer2;
  private: System::Windows::Forms::TabControl^  tabControl1;
  private: System::Windows::Forms::TabPage^  tabPage1;
  private: System::Windows::Forms::PictureBox^  pictureBox1;
  private: System::Windows::Forms::TabPage^  tabPage2;
  private: System::Windows::Forms::PictureBox^  pictureBox2;
  private: System::Windows::Forms::PictureBox^  pictureBoxBand;
  private: System::Windows::Forms::ToolStripButton^  toolStripButtonCG2;

  private: System::Windows::Forms::Label^  labelXppmm;
  private: System::Windows::Forms::Label^  label8;
  private: System::Windows::Forms::TextBox^  textBoxSW;
  private: System::Windows::Forms::Label^  label9;
  private: System::Windows::Forms::Label^  label10;
  private: System::Windows::Forms::PictureBox^  pictureBox3;
  private: System::Windows::Forms::ToolStripButton^  toolStripButtonSaveBand;
  private: System::Windows::Forms::NumericUpDown^  numericUpDownL1;
  private: System::Windows::Forms::NumericUpDown^  numericUpDownL2;
  private: System::Windows::Forms::Label^  label13;
  private: System::Windows::Forms::TextBox^  textBoxL2;
  private: System::Windows::Forms::TextBox^  textBoxL1;
  private: System::Windows::Forms::Label^  label15;
  private: System::Windows::Forms::Label^  label14;
  private: System::Windows::Forms::CheckBox^  checkBox2;
  private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
private: System::Windows::Forms::TextBox^  textBoxLW;

private: System::Windows::Forms::Label^  label11;

private: System::Windows::Forms::TextBox^  textBoxDP;

private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::TextBox^  textBoxSlopeGain;
private: System::Windows::Forms::ToolStripButton^  toolStripButton2;


           /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButtonLoad = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonCG1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonCG2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonSave = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonGetBand = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonSaveBand = (gcnew System::Windows::Forms::ToolStripButton());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBoxSlopeGain = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDP = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxLW = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxSW = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->labelXppmm = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxSSy = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxSSx = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxPCy = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxPCx = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxDD = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxL2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxL1 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownL1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownL2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBoxBand = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownL1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownL2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBand))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripButtonLoad,
					this->toolStripButtonCG1, this->toolStripButtonCG2, this->toolStripButtonSave, this->toolStripButtonGetBand, this->toolStripButton2,
					this->toolStripButton1, this->toolStripButtonSaveBand
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(953, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButtonLoad
			// 
			this->toolStripButtonLoad->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButtonLoad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonLoad.Image")));
			this->toolStripButtonLoad->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonLoad->Name = L"toolStripButtonLoad";
			this->toolStripButtonLoad->Size = System::Drawing::Size(66, 22);
			this->toolStripButtonLoad->Text = L"Load EBSP";
			this->toolStripButtonLoad->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonLoad_Click);
			// 
			// toolStripButtonCG1
			// 
			this->toolStripButtonCG1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButtonCG1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonCG1.Image")));
			this->toolStripButtonCG1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonCG1->Name = L"toolStripButtonCG1";
			this->toolStripButtonCG1->Size = System::Drawing::Size(74, 22);
			this->toolStripButtonCG1->Text = L"Correct Geo";
			this->toolStripButtonCG1->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonCG1_Click);
			// 
			// toolStripButtonCG2
			// 
			this->toolStripButtonCG2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButtonCG2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonCG2.Image")));
			this->toolStripButtonCG2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonCG2->Name = L"toolStripButtonCG2";
			this->toolStripButtonCG2->Size = System::Drawing::Size(80, 22);
			this->toolStripButtonCG2->Text = L"Correct Geo2";
			this->toolStripButtonCG2->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonCG2_Click);
			// 
			// toolStripButtonSave
			// 
			this->toolStripButtonSave->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButtonSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonSave.Image")));
			this->toolStripButtonSave->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonSave->Name = L"toolStripButtonSave";
			this->toolStripButtonSave->Size = System::Drawing::Size(91, 22);
			this->toolStripButtonSave->Text = L"Save Processed";
			this->toolStripButtonSave->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonSave_Click);
			// 
			// toolStripButtonGetBand
			// 
			this->toolStripButtonGetBand->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButtonGetBand->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonGetBand.Image")));
			this->toolStripButtonGetBand->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonGetBand->Name = L"toolStripButtonGetBand";
			this->toolStripButtonGetBand->Size = System::Drawing::Size(53, 22);
			this->toolStripButtonGetBand->Text = L"Capture";
			this->toolStripButtonGetBand->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonGetBand_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(56, 22);
			this->toolStripButton1->Text = L"Row avg";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::toolStripButton1_Click);
			// 
			// toolStripButtonSaveBand
			// 
			this->toolStripButtonSaveBand->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButtonSaveBand->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonSaveBand.Image")));
			this->toolStripButtonSaveBand->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonSaveBand->Name = L"toolStripButtonSaveBand";
			this->toolStripButtonSaveBand->Size = System::Drawing::Size(65, 22);
			this->toolStripButtonSaveBand->Text = L"Save Band";
			this->toolStripButtonSaveBand->Click += gcnew System::EventHandler(this, &Form1::toolStripButtonSaveBand_Click);
			// 
			// splitContainer1
			// 
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer1->Location = System::Drawing::Point(0, 25);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label17);
			this->splitContainer1->Panel1->Controls->Add(this->textBoxSlopeGain);
			this->splitContainer1->Panel1->Controls->Add(this->textBoxDP);
			this->splitContainer1->Panel1->Controls->Add(this->label16);
			this->splitContainer1->Panel1->Controls->Add(this->label12);
			this->splitContainer1->Panel1->Controls->Add(this->textBoxLW);
			this->splitContainer1->Panel1->Controls->Add(this->label11);
			this->splitContainer1->Panel1->Controls->Add(this->label10);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox3);
			this->splitContainer1->Panel1->Controls->Add(this->textBoxSW);
			this->splitContainer1->Panel1->Controls->Add(this->label9);
			this->splitContainer1->Panel1->Controls->Add(this->labelXppmm);
			this->splitContainer1->Panel1->Controls->Add(this->label8);
			this->splitContainer1->Panel1->Controls->Add(this->textBoxSSy);
			this->splitContainer1->Panel1->Controls->Add(this->label6);
			this->splitContainer1->Panel1->Controls->Add(this->label7);
			this->splitContainer1->Panel1->Controls->Add(this->textBoxSSx);
			this->splitContainer1->Panel1->Controls->Add(this->label5);
			this->splitContainer1->Panel1->Controls->Add(this->textBoxPCy);
			this->splitContainer1->Panel1->Controls->Add(this->label4);
			this->splitContainer1->Panel1->Controls->Add(this->label3);
			this->splitContainer1->Panel1->Controls->Add(this->textBoxPCx);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->textBoxDD);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(953, 777);
			this->splitContainer1->SplitterDistance = 203;
			this->splitContainer1->TabIndex = 1;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(16, 652);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(103, 13);
			this->label17->TabIndex = 24;
			this->label17->Text = L"Gain for slope profile";
			// 
			// textBoxSlopeGain
			// 
			this->textBoxSlopeGain->Location = System::Drawing::Point(18, 668);
			this->textBoxSlopeGain->Name = L"textBoxSlopeGain";
			this->textBoxSlopeGain->Size = System::Drawing::Size(100, 20);
			this->textBoxSlopeGain->TabIndex = 23;
			this->textBoxSlopeGain->Text = L"1";
			// 
			// textBoxDP
			// 
			this->textBoxDP->Location = System::Drawing::Point(71, 19);
			this->textBoxDP->Name = L"textBoxDP";
			this->textBoxDP->Size = System::Drawing::Size(72, 20);
			this->textBoxDP->TabIndex = 22;
			this->textBoxDP->Text = L"177,8";
			this->textBoxDP->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBoxDP_KeyPress);
			this->textBoxDP->Leave += gcnew System::EventHandler(this, &Form1::textBoxDP_Leave);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(16, 22);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(44, 13);
			this->label16->TabIndex = 21;
			this->label16->Text = L"Position";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(16, 46);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Distance";
			// 
			// textBoxLW
			// 
			this->textBoxLW->Location = System::Drawing::Point(15, 247);
			this->textBoxLW->Name = L"textBoxLW";
			this->textBoxLW->Size = System::Drawing::Size(100, 20);
			this->textBoxLW->TabIndex = 20;
			this->textBoxLW->Text = L"10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 231);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(83, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"avraging (pixels)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 274);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(77, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Intensity profile";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::Window;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(15, 290);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(120, 350);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 17;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox3_Paint);
			// 
			// textBoxSW
			// 
			this->textBoxSW->Location = System::Drawing::Point(15, 199);
			this->textBoxSW->Name = L"textBoxSW";
			this->textBoxSW->Size = System::Drawing::Size(100, 20);
			this->textBoxSW->TabIndex = 16;
			this->textBoxSW->Text = L"120";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 183);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(111, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"sampling width (pixels)";
			// 
			// labelXppmm
			// 
			this->labelXppmm->AutoSize = true;
			this->labelXppmm->Location = System::Drawing::Point(16, 162);
			this->labelXppmm->Name = L"labelXppmm";
			this->labelXppmm->Size = System::Drawing::Size(14, 13);
			this->labelXppmm->TabIndex = 13;
			this->labelXppmm->Text = L"X";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 146);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"pixel size(mm)";
			// 
			// textBoxSSy
			// 
			this->textBoxSSy->Location = System::Drawing::Point(108, 122);
			this->textBoxSSy->Name = L"textBoxSSy";
			this->textBoxSSy->Size = System::Drawing::Size(47, 20);
			this->textBoxSSy->TabIndex = 11;
			this->textBoxSSy->Text = L"28";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(88, 127);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Y";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 129);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"X";
			// 
			// textBoxSSx
			// 
			this->textBoxSSx->Location = System::Drawing::Point(36, 122);
			this->textBoxSSx->Name = L"textBoxSSx";
			this->textBoxSSx->Size = System::Drawing::Size(47, 20);
			this->textBoxSSx->TabIndex = 8;
			this->textBoxSSx->Text = L"38";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 106);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Screen size (mm)";
			// 
			// textBoxPCy
			// 
			this->textBoxPCy->Location = System::Drawing::Point(109, 82);
			this->textBoxPCy->Name = L"textBoxPCy";
			this->textBoxPCy->Size = System::Drawing::Size(47, 20);
			this->textBoxPCy->TabIndex = 6;
			this->textBoxPCy->Text = L"178";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(89, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"X";
			// 
			// textBoxPCx
			// 
			this->textBoxPCx->Location = System::Drawing::Point(36, 82);
			this->textBoxPCx->Name = L"textBoxPCx";
			this->textBoxPCx->Size = System::Drawing::Size(47, 20);
			this->textBoxPCx->TabIndex = 3;
			this->textBoxPCx->Text = L"668";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Pattern center (pixels)";
			// 
			// textBoxDD
			// 
			this->textBoxDD->Enabled = false;
			this->textBoxDD->Location = System::Drawing::Point(71, 43);
			this->textBoxDD->Name = L"textBoxDD";
			this->textBoxDD->Size = System::Drawing::Size(72, 20);
			this->textBoxDD->TabIndex = 1;
			this->textBoxDD->Text = L"17,72662";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Detector (mm)";
			// 
			// splitContainer2
			// 
			this->splitContainer2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->checkBox2);
			this->splitContainer2->Panel1->Controls->Add(this->checkBox1);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxL2);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxL1);
			this->splitContainer2->Panel1->Controls->Add(this->label15);
			this->splitContainer2->Panel1->Controls->Add(this->label14);
			this->splitContainer2->Panel1->Controls->Add(this->label13);
			this->splitContainer2->Panel1->Controls->Add(this->numericUpDownL1);
			this->splitContainer2->Panel1->Controls->Add(this->numericUpDownL2);
			this->splitContainer2->Panel1->Controls->Add(this->pictureBoxBand);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer2->Size = System::Drawing::Size(746, 777);
			this->splitContainer2->SplitterDistance = 185;
			this->splitContainer2->TabIndex = 0;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(7, 30);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(55, 17);
			this->checkBox2->TabIndex = 11;
			this->checkBox2->Text = L"Line 2";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(7, 6);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(55, 17);
			this->checkBox1->TabIndex = 10;
			this->checkBox1->Text = L"Line 1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// textBoxL2
			// 
			this->textBoxL2->Location = System::Drawing::Point(11, 105);
			this->textBoxL2->Name = L"textBoxL2";
			this->textBoxL2->ReadOnly = true;
			this->textBoxL2->Size = System::Drawing::Size(100, 20);
			this->textBoxL2->TabIndex = 9;
			// 
			// textBoxL1
			// 
			this->textBoxL1->Location = System::Drawing::Point(11, 82);
			this->textBoxL1->Name = L"textBoxL1";
			this->textBoxL1->ReadOnly = true;
			this->textBoxL1->Size = System::Drawing::Size(100, 20);
			this->textBoxL1->TabIndex = 8;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(113, 108);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(23, 13);
			this->label15->TabIndex = 7;
			this->label15->Text = L"mm";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(113, 86);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(33, 13);
			this->label14->TabIndex = 6;
			this->label14->Text = L"pixels";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(8, 66);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(60, 13);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Band width";
			// 
			// numericUpDownL1
			// 
			this->numericUpDownL1->Location = System::Drawing::Point(71, 5);
			this->numericUpDownL1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 119, 0, 0, 0 });
			this->numericUpDownL1->Name = L"numericUpDownL1";
			this->numericUpDownL1->Size = System::Drawing::Size(65, 20);
			this->numericUpDownL1->TabIndex = 2;
			this->numericUpDownL1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 110, 0, 0, 0 });
			this->numericUpDownL1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown2_ValueChanged);
			// 
			// numericUpDownL2
			// 
			this->numericUpDownL2->Location = System::Drawing::Point(71, 29);
			this->numericUpDownL2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 119, 0, 0, 0 });
			this->numericUpDownL2->Name = L"numericUpDownL2";
			this->numericUpDownL2->Size = System::Drawing::Size(65, 20);
			this->numericUpDownL2->TabIndex = 1;
			this->numericUpDownL2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownL2->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// pictureBoxBand
			// 
			this->pictureBoxBand->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxBand->Location = System::Drawing::Point(152, 5);
			this->pictureBoxBand->Name = L"pictureBoxBand";
			this->pictureBoxBand->Size = System::Drawing::Size(100, 120);
			this->pictureBoxBand->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxBand->TabIndex = 0;
			this->pictureBoxBand->TabStop = false;
			this->pictureBoxBand->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBoxBand_Paint);
			this->pictureBoxBand->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBoxBand_MouseDown);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(738, 580);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(730, 554);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Original";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseMove);
			// 
			// tabPage2
			// 
			this->tabPage2->AutoScroll = true;
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(730, 554);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Processed";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(83, 22);
			this->toolStripButton2->Text = L"Load capture ";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(953, 802);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->toolStrip1);
			this->Name = L"Form1";
			this->Text = L"Kikuchi Band width Measurment";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownL1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownL2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBand))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
           {
             if (e->Button == System::Windows::Forms::MouseButtons::Left)
                {
                  x1 = x2 = e->X;
                  y1 = y2 = e->Y;
                  g->DrawLine(pen1,x1,y1,x2,y2);
                  inDrawing = true;
                  haveALine = false;
                }
             else if (e->Button == System::Windows::Forms::MouseButtons::Right)
                {
                  x2 = e->X;
                  y2 = e->Y;
                  g->DrawLine(pen1,x1,y1,x2,y2);
                  inDrawing = false;
                  haveALine = true;
                }
           }
private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
           {
              if (inDrawing)
                {
                  pictureBox1->Refresh();
                  x2 = e->X;
                  y2 = e->Y;
                  g->DrawLine(pen1,x1,y1,x2,y2);
                 }
           }
private: System::Void toolStripButtonLoad_Click(System::Object^  sender, System::EventArgs^  e) 
           {
            openFileDialog1->ShowDialog();
            try
              {
                if (bmp1 !=nullptr) delete bmp1;
                if (g != nullptr) delete g;
                bmp1 = gcnew Bitmap(openFileDialog1->FileName);
                pictureBox1->Image = bmp1;
                g = pictureBox1->CreateGraphics();
                //g = Graphics::FromImage(bmp1);
                SSx = System::Convert::ToDouble(textBoxSSx->Text);
                labelXppmm->Text = System::Convert::ToString(bmp1->Width/SSx);
                haveALine = false;
              }
            catch (Exception^) 
              {
                MessageBox::Show("Oh boss cannot be load some thing wrong!!");
              }
           }
private: System::Void toolStripButtonGetBand_Click(System::Object^  sender, System::EventArgs^  e) 
           {
           int SL;
           Point pL,pH,ps,pb,ps1,ps2;
           double ds;
           Vector3 er1,er2,en1,et1,enL,enH,et;
           Vector3 rL,rH,r1;
           double dx1,dy1,dx2,dy2;
           double dxL,dyL,dxH,dyH;
                      
           if (haveALine)
             {
               getConParam();
               
               // caculate unit vectors
               dx1 = ((double)(x1-PC.X))*pixSize; // in mm
               dy1 = ((double)(y1-PC.Y))*pixSize; // in mm
               dx2 = ((double)(x2-PC.X))*pixSize; // in mm
               dy2 = ((double)(y2-PC.Y))*pixSize; // in mm
               er1 = Unit3(dx1,dy1,DD);
               er2 = Unit3(dx2,dy2,DD);
               en1 = Cross3(er1,er2);
               et1 = Cross3(en1,er1);
               Unify3(en1);
               Unify3(et1);
               r1 = Multiply3(er1,DD); // r = DD er1
               et = et1;

               // calculate bmp3 size
               ds = DD*atan(abs(Norm3(Cross3(er1,er2)))/Dot3(er1,er2));
               SL = (int)(ds/pixSize); 
               if (bmp3 != nullptr) delete bmp3;
               bmp3 = gcnew Bitmap(SL,SW,bmp1->PixelFormat);

               for (pb.X = 0; pb.X < SL; pb.X++)  // run in t direction
                 {
                 rL = rH = r1;
                 enL = enH = en1;
                 Unify3(enL);
                 Unify3(enH);
                 for (pb.Y = 0; pb.Y < SW/2; pb.Y++) // run in n direction
                   {
                   rL = Add3(rL ,Multiply3(enL ,pixSize)); // r = r + pixSizeY*en
                   rH = Add3(rH ,Multiply3(enH ,pixSize)); // r = r + pixSizeY*en
                   rL = Multiply3(Unify3(rL),DD);
                   rH = Multiply3(Unify3(rH),DD);
                   dxL = rL.x*DD/rL.z;              
                   dyL = rL.y*DD/rL.z;
                   dxH = rH.x*DD/rH.z;              
                   dyH = rH.y*DD/rH.z;
                   pL.X = (int)(PC.X + dxL/pixSize);
                   pL.Y = (int)(PC.Y + dyL/pixSize);
                   pH.X = (int)(PC.X + dxH/pixSize);
                   pH.Y = (int)(PC.Y + dyH/pixSize);
                   if ((pL.X<0)||(pL.X>bmp1->Width-1)||(pL.Y<0)||(pL.Y>bmp1->Height-1)) 
                     bmp3->SetPixel(pb.X, pb.Y + SW/2, Color::Black);
                   else bmp3->SetPixel(pb.X, pb.Y + SW/2, bmp1->GetPixel(pL.X,pL.Y));
                   if ((pH.X<0)||(pH.X>bmp1->Width-1)||(pH.Y<0)||(pH.Y>bmp1->Height-1)) 
                     bmp3->SetPixel(pb.X, SW/2 - pb.Y-1, Color::Black);
                   else bmp3->SetPixel(pb.X, SW/2 - pb.Y-1, bmp1->GetPixel(pH.X,pH.Y));
                   enL = Unify3(Cross3(rL,et));  // en = er x et
                   enH = Unify3(Cross3(et,rH));  // en = et x er
                   }
                 r1 = Add3(r1 ,Multiply3(et,pixSize));
                 et = Unify3(Cross3(en1,r1));
                 }
                 pictureBoxBand->Image = bmp3;
                 numericUpDownL2->Maximum = SW-1;
                 //if (numericUpDownL2->Value < numericUpDownL2->Minimum) 
					 numericUpDownL2->Value = 10;
                 numericUpDownL1->Maximum = SW-1;
                 //if (numericUpDownL1->Value > numericUpDownL1->Maximum) 
					 numericUpDownL1->Value = SW-11;
             }
           else
             MessageBox::Show("Please draw a central line of a selected band","Select a band");
           }
private: System::Void toolStripButtonSave_Click(System::Object^  sender, System::EventArgs^  e) 
           {
              saveFileDialog1->ShowDialog();
                try
                {
                bmp2->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);
                }
                catch (Exception^)
                {
                  MessageBox::Show("error boss");
                }
           }
private: System::Void toolStripButtonCG1_Click(System::Object^  sender, System::EventArgs^  e) 
           {
            Point p,p1;

            if (bmp2 !=nullptr) delete bmp2;
            bmp2 = gcnew Bitmap(bmp1->Width,bmp1->Height,bmp1->PixelFormat);
            getConParam();            
            for (p.X=0; p.X < bmp1->Width; p.X++)
              for (p.Y=0; p.Y < bmp1->Height; p.Y++)
              {
              p1 = getImg1Coor(p);
              bmp2->SetPixel(p1.X,p1.Y,bmp1->GetPixel(p.X,p.Y));
              }
            pictureBox2->Image = bmp2;
           }
private: System::Void toolStripButtonCG2_Click(System::Object^  sender, System::EventArgs^  e) 
           {
            Point p,ps;

            // clear previous bitmap
            if (bmp2 !=nullptr) delete bmp2;
            // create new bitmap
            bmp2 = gcnew Bitmap(bmp1->Width,bmp1->Height,bmp1->PixelFormat);
            getConParam();            
            for (p.X=0; p.X < bmp1->Width; p.X++)
              for (p.Y=0; p.Y < bmp1->Height; p.Y++)
              {
                ps = getSphereCoor(p);
                bmp2->SetPixel(ps.X,ps.Y,bmp1->GetPixel(p.X,p.Y));
              }
            pictureBox2->Image = bmp2;
           }
private: Point getSphereCoor(Point p)
           {
           Point ps;
           double d,dx,dy,dxs,dys;
           double theta;

           if ((p.X == PC.X) && (p.Y == PC.Y)) ps = p;
           else
             {
              dx = ((double)(p.X-PC.X))*pixSize;
              dy = ((double)(p.Y-PC.Y))*pixSize;
              d = sqrt(dx*dx + dy*dy);
              theta = atan(d/DD);
              dxs = DD*theta*dx/d;
              dys = DD*theta*dy/d;
              ps.X = (int)(PC.X + (dxs/pixSize));
              ps.Y = (int)(PC.Y + (dys/pixSize));
             }

           return ps;
           }
private: Point getImg1Coor(Point p)
           {
           double dx,dy,dx1,dy1;
           double r;
           Point p1;

           dx = ((double)(p.X-PC.X))*pixSize;
           dy = ((double)(p.Y-PC.Y))*pixSize;
           r = sqrt(dx*dx + dy*dy + DD*DD);
           dx1 = DD*dx/r;
           dy1 = DD*dy/r;
           p1.X = (int)(PC.X + (dx1/pixSize));
           p1.Y = (int)(PC.Y + (dy1/pixSize));

           return p1;
           }

private: Point IgetSphereCoor(Point ps)
           {
           Point p;
           double theta;
           double dx,dy,dxs,dys;
           double ds;

           if ((ps.X == PC.X) && (ps.Y == PC.Y)) p = ps;
           else
             {
              dxs = ((double)(ps.X - PC.X))*pixSize;
              dys = ((double)(ps.Y - PC.Y))*pixSize;
              ds = sqrt(dxs*dxs + dys*dys);
              theta = ds/DD;
              dx = DD*tan(theta)*dxs/ds;
              dy = DD*tan(theta)*dys/ds;
              p.X = (int)(PC.X + (dx/pixSize));
              p.Y = (int)(PC.Y + (dy/pixSize));
             }

           return p;
           }

private: Point IgetImg1Coor(Point p1)
           {
           Point p;
           double r1;
           double dx,dy,dx1,dy1;

           dx1 = ((double)(p1.X-PC.X))*pixSize;
           dy1 = ((double)(p1.Y-PC.Y))*pixSize;
           r1 = sqrt(DD*DD - dx1*dx1 - dy1*dy1);
           dx = DD*dx1/r1;
           dy = DD*dy1/r1;
           p.X = (int)(PC.X + (dx/pixSize));
           p.Y = (int)(PC.Y + (dy/pixSize));

           return p;
           }
private: System::Void getConParam(System::Void)
           {
            // Detector distance (mm)
            DD = Convert::ToDouble(textBoxDD->Text);
            // Screen size
            SSx = Convert::ToDouble(textBoxSSx->Text);
            // Pattern center coordinate
            PC.X = Convert::ToInt32(textBoxPCx->Text);
            PC.Y = Convert::ToInt32(textBoxPCy->Text);
            // mm/pixel
            pixSize = SSx / (double)bmp1->Width;
            // Sampling width
            SW = Convert::ToInt32(textBoxSW->Text);
			LW = Convert::ToInt32(textBoxLW->Text);
            labelXppmm->Text = System::Convert::ToString(bmp1->Width/SSx);
			// slope profile gain
			slopeGain = Convert::ToDouble(textBoxSlopeGain->Text);
           }
private: System::Void RowAverage(System::Void)
		   {
           int i,j;
           Color c;
           try
             {
				 getConParam();
				 const int H = bmp3->Height;
				 const int W = bmp3->Width;
				 double R[1024];
				 double dR[1024];
				 // initialise graphics
				 if (bmpIPF != nullptr) delete bmpIPF;
					bmpIPF = gcnew Bitmap(SW,350);
				 Graphics^ g = Graphics::FromImage(bmpIPF);
				 g->Clear(Color::White);
				 Pen^ aPen = gcnew Pen( Color::Black,1.0f );
				 // row average
				for (j=0; j< H; j++)
				{ 
					R[j] = 0;
					for (i=0; i< W; i++)
					{
						c = bmp3->GetPixel(i,j);
						R[j] =R[j] + c.R;
					}
					R[j] = R[j]/W;
				} 
				g->DrawLine(pen2,0,256,H-1,256);
		        for (i = 1; i < H-2; i++)
				  g->DrawLine(aPen,i,256-(int)R[i],i+1,256-(int)R[i+1]);

				// derivative
				dR[1] = slopeGain*(R[2]-R[0]);
				aPen->Color = Color::Blue;
				for (i = 2; i < H-1; i++)
				  {
					 dR[i] = slopeGain*(R[i+1]-R[i-1]);
					 g->DrawLine(aPen,i-1,256-(int)dR[i-1]*2,i,256-(int)dR[i]*2);
				  }
				pictureBox3->Image = bmpIPF;
				if (!haveBandProfile) haveBandProfile = true;
				//profileCenterX = e->X;
				 pictureBoxBand->Refresh();
				delete aPen;
             }
           catch (Exception^)
             {
             MessageBox::Show("error in RowAverage function!!");
             }
           }

private: System::Void toolStripButtonSaveBand_Click(System::Object^  sender, System::EventArgs^  e) 
           {
              saveFileDialog1->ShowDialog();
                try
                {
                bmp3->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);
                }
                catch (Exception^)
                {
                  MessageBox::Show("error boss");
                }
           }
private: System::Void pictureBoxBand_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
           {
           int i,j;
           Color c;
           try
             {
				 getConParam();
				 const int W = bmp3->Height;
				 double R[450];
				 double dR[450];
				 // initialise graphics
				 if (bmpIPF != nullptr) delete bmpIPF;
					bmpIPF = gcnew Bitmap(SW,350);
				 Graphics^ g = Graphics::FromImage(bmpIPF);
				 g->Clear(Color::White);
				 Pen^ aPen = gcnew Pen( Color::Black,1.0f );
				 // row average
				for (j=0; j< W; j++)
				{ 
					R[j] = 0;
					for (i=e->X-LW/2; i< e->X+LW/2; i++)
					{
						c = bmp3->GetPixel(i,j);
						R[j] =R[j] + c.R;
					}
					R[j] = R[j]/LW;
				} 
				g->DrawLine(pen2,0,256,W-1,256);
		        for (i = 1; i < W-2; i++)
				  g->DrawLine(aPen,i,256-(int)R[i],i+1,256-(int)R[i+1]);

				// derivative
				dR[1] = slopeGain*(R[2]-R[0]);
				aPen->Color = Color::Blue;
				for (i = 2; i < W-1; i++)
				  {
					 dR[i] = slopeGain*(R[i+1]-R[i-1]);
					 g->DrawLine(aPen,i-1,256-(int)dR[i-1]*2,i,256-(int)dR[i]*2);
				  }
				pictureBox3->Image = bmpIPF;
				if (!haveBandProfile) haveBandProfile = true;
				profileCenterX = e->X;
				 pictureBoxBand->Refresh();
				delete aPen;
             }
           catch (Exception^)
             {
             MessageBox::Show("off the area!!");
             }
           }

private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
           {
           Graphics^ gg = e->Graphics;
           if (haveALine)
             {
             gg->DrawLine(pen1,x1,y1,x2,y2);
             }
           }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
           {
           pictureBoxBand->Refresh();
           pictureBox3->Refresh();
           textBoxL1->Text = Convert::ToString((int)abs((double)(numericUpDownL2->Value - numericUpDownL1->Value)));
           textBoxL2->Text = Convert::ToString(abs((double)(numericUpDownL2->Value - numericUpDownL1->Value))*pixSize);
           }
private: System::Void pictureBoxBand_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
           {
           if (checkBox1->Checked)
             {
              e->Graphics->DrawLine(pen2,0,SW-(int)numericUpDownL1->Value-1,pictureBoxBand->Width,SW-(int)numericUpDownL1->Value-1);
             } 
           if (checkBox2->Checked)
             {
              e->Graphics->DrawLine(pen2,0,SW-(int)numericUpDownL2->Value-1,pictureBoxBand->Width,SW-(int)numericUpDownL2->Value-1);
             }
		   if (haveBandProfile)
			 {
			  //e->Graphics->DrawLine(pen3,profileCenterX-LW/2,0,profileCenterX-LW/2,pictureBoxBand->Height);
			  //e->Graphics->DrawLine(pen3,profileCenterX+LW/2,0,profileCenterX+LW/2,pictureBoxBand->Height);
			 }
           }
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
           {
            pictureBoxBand->Refresh();
            pictureBox3->Refresh();
            textBoxL1->Text = Convert::ToString((int)abs((double)(numericUpDownL2->Value - numericUpDownL1->Value)));
            textBoxL2->Text = Convert::ToString(abs((double)(numericUpDownL2->Value - numericUpDownL1->Value))*pixSize);
           }
private: System::Void pictureBox3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
           {
           e->Graphics->DrawLine(pen3,SW-(int)numericUpDownL2->Value-1,0,SW-(int)numericUpDownL2->Value-1,pictureBox3->Height-1);
           e->Graphics->DrawLine(pen3,SW-(int)numericUpDownL1->Value-1,0,SW-(int)numericUpDownL1->Value-1,pictureBox3->Height-1); 
           }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
           {
            pictureBoxBand->Refresh();
           }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
           {
            pictureBoxBand->Refresh();
           }

private: System::Void textBoxDP_Leave(System::Object^  sender, System::EventArgs^  e) 
		 {
			 DD = 177.8 - System::Convert::ToDouble(textBoxDP->Text) + 17.72662;
			 textBoxDD->Text = System::Convert::ToString(DD);
		 }
private: System::Void textBoxDP_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {
			 if ( e->KeyChar == '\r' )
            {
               DD = 177.8 - System::Convert::ToDouble(textBoxDP->Text) + 17.72662;
				textBoxDD->Text = System::Convert::ToString(DD);
            }

		 }
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			RowAverage();
		 }
};
}

