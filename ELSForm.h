#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace GroundStation
{
	/// <summary> 
	/// Summary for ELSForm
	///
	/// WARNING: If you change the name of this class, you will need to change the 
	///          'Resource File Name' property for the managed resource compiler tool 
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	__gc class ELSForm : public System::Windows::Forms::Form
	{
	public: 
		ELSForm(void)
		{
			InitializeComponent();
			this->add_Closing(new CancelEventHandler(this, &GroundStation::ELSForm::ELSForm_Closing));
		}
        
	protected: 
		void Dispose(Boolean disposing)
		{
			if (disposing && components)
			{
				components->Dispose();
			}
			__super::Dispose(disposing);
		}
	private: System::Void ELSForm_Closing(Object * sender, System::ComponentModel::CancelEventArgs* e){			
			e->Cancel = true; // don't close			
			this->Hide();     // Hide instead.
		}      		
	private: System::Windows::Forms::Label *  label19;
	public: System::Windows::Forms::TextBox *  s11A9;
	private: System::Windows::Forms::Label *  label1;
	private: System::Windows::Forms::Label *  label2;
	private: System::Windows::Forms::Label *  label3;
	private: System::Windows::Forms::Label *  label4;
	private: System::Windows::Forms::Label *  label5;
	private: System::Windows::Forms::Label *  label6;
	private: System::Windows::Forms::Label *  label7;
	private: System::Windows::Forms::Label *  label8;
	private: System::Windows::Forms::Label *  label9;
	private: System::Windows::Forms::Label *  label10;
	private: System::Windows::Forms::Label *  label11;
	private: System::Windows::Forms::Label *  label12;
	private: System::Windows::Forms::Label *  label13;
	private: System::Windows::Forms::Label *  label14;
	private: System::Windows::Forms::Label *  label15;
	private: System::Windows::Forms::Label *  label16;
	private: System::Windows::Forms::Label *  label17;
	private: System::Windows::Forms::Label *  label18;
	private: System::Windows::Forms::Label *  label20;
	private: System::Windows::Forms::Label *  label21;




















	public: System::Windows::Forms::TextBox *  s11A5;
	public: System::Windows::Forms::TextBox *  s11E221;
	public: System::Windows::Forms::TextBox *  s11E231;
	public: System::Windows::Forms::TextBox *  s11E133;
	public: System::Windows::Forms::TextBox *  s11E136;
	public: System::Windows::Forms::TextBox *  s11E141;
	public: System::Windows::Forms::TextBox *  s11E134;
	public: System::Windows::Forms::TextBox *  s11E137;
	public: System::Windows::Forms::TextBox *  s11E144;
	public: System::Windows::Forms::TextBox *  s11E142;
	public: System::Windows::Forms::TextBox *  s11E233;
	public: System::Windows::Forms::TextBox *  s11E223;
	public: System::Windows::Forms::TextBox *  s11A8;
	public: System::Windows::Forms::TextBox *  s11A6;
	public: System::Windows::Forms::TextBox *  s11E227;
	public: System::Windows::Forms::TextBox *  s11E235;
	public: System::Windows::Forms::TextBox *  s11E157;
	public: System::Windows::Forms::TextBox *  s11E156;
	public: System::Windows::Forms::TextBox *  s11E265;
	public: System::Windows::Forms::TextBox *  s11E241;
	private: System::Windows::Forms::GroupBox *  groupBox1;
	private: System::Windows::Forms::GroupBox *  groupBox2;
	public: System::Windows::Forms::TextBox *  s11E291;
	private: System::Windows::Forms::Label *  label22;
	private: System::Windows::Forms::Label *  label23;
	private: System::Windows::Forms::Label *  label24;
	private: System::Windows::Forms::Label *  label25;
	private: System::Windows::Forms::Label *  label26;
	private: System::Windows::Forms::Label *  label27;
	public: System::Windows::Forms::TextBox *  s11E306;
	public: System::Windows::Forms::TextBox *  s11E298;
	public: System::Windows::Forms::TextBox *  s11E308;
	public: System::Windows::Forms::TextBox *  s11E295;
	public: System::Windows::Forms::TextBox *  s11E303;
	private: System::Windows::Forms::GroupBox *  groupBox3;
	private: System::Windows::Forms::Label *  label28;
	private: System::Windows::Forms::Label *  label29;
	private: System::Windows::Forms::Label *  label30;
	private: System::Windows::Forms::Label *  label31;
	private: System::Windows::Forms::Label *  label32;
	public: System::Windows::Forms::TextBox *  s11E45;
	public: System::Windows::Forms::TextBox *  s11E43;
	public: System::Windows::Forms::TextBox *  s11E46;
	public: System::Windows::Forms::TextBox *  s11A51;
	public: System::Windows::Forms::TextBox *  s10A22;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container* components;

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->s11A9 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->s11A5 = (gcnew System::Windows::Forms::TextBox());
			this->s11A8 = (gcnew System::Windows::Forms::TextBox());
			this->s11A6 = (gcnew System::Windows::Forms::TextBox());
			this->s11E221 = (gcnew System::Windows::Forms::TextBox());
			this->s11E231 = (gcnew System::Windows::Forms::TextBox());
			this->s11E133 = (gcnew System::Windows::Forms::TextBox());
			this->s11E136 = (gcnew System::Windows::Forms::TextBox());
			this->s11E141 = (gcnew System::Windows::Forms::TextBox());
			this->s11E134 = (gcnew System::Windows::Forms::TextBox());
			this->s11E137 = (gcnew System::Windows::Forms::TextBox());
			this->s11E227 = (gcnew System::Windows::Forms::TextBox());
			this->s11E144 = (gcnew System::Windows::Forms::TextBox());
			this->s11E142 = (gcnew System::Windows::Forms::TextBox());
			this->s11E233 = (gcnew System::Windows::Forms::TextBox());
			this->s11E223 = (gcnew System::Windows::Forms::TextBox());
			this->s11E235 = (gcnew System::Windows::Forms::TextBox());
			this->s11E157 = (gcnew System::Windows::Forms::TextBox());
			this->s11E156 = (gcnew System::Windows::Forms::TextBox());
			this->s11E265 = (gcnew System::Windows::Forms::TextBox());
			this->s11E241 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->s11E308 = (gcnew System::Windows::Forms::TextBox());
			this->s11E295 = (gcnew System::Windows::Forms::TextBox());
			this->s11E303 = (gcnew System::Windows::Forms::TextBox());
			this->s11E298 = (gcnew System::Windows::Forms::TextBox());
			this->s11E306 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->s11E291 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->s10A22 = (gcnew System::Windows::Forms::TextBox());
			this->s11A51 = (gcnew System::Windows::Forms::TextBox());
			this->s11E46 = (gcnew System::Windows::Forms::TextBox());
			this->s11E43 = (gcnew System::Windows::Forms::TextBox());
			this->s11E45 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label19
			// 
			this->label19->Location = System::Drawing::Point(8, 16);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(192, 24);
			this->label19->TabIndex = 39;
			this->label19->Text = L"PYRO BUS A VOLTS";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// s11A9
			// 
			this->s11A9->Enabled = false;
			this->s11A9->Location = System::Drawing::Point(200, 16);
			this->s11A9->Name = L"s11A9";
			this->s11A9->Size = System::Drawing::Size(64, 20);
			this->s11A9->TabIndex = 42;
			this->s11A9->Text = L"XX.XX V";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(8, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(192, 24);
			this->label1->TabIndex = 43;
			this->label1->Text = L"PYRO BUS B VOLTS";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(8, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 24);
			this->label2->TabIndex = 44;
			this->label2->Text = L"SLA SEP RELAY A";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(8, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(192, 24);
			this->label3->TabIndex = 45;
			this->label3->Text = L"SLA SEP RELAY B";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(8, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(192, 24);
			this->label4->TabIndex = 46;
			this->label4->Text = L"CREW ABORT A";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(8, 184);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 24);
			this->label5->TabIndex = 47;
			this->label5->Text = L"CREW ABORT B";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(8, 208);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(192, 24);
			this->label6->TabIndex = 48;
			this->label6->Text = L"EDS ABORT VOTE 1";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(8, 232);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(192, 24);
			this->label7->TabIndex = 49;
			this->label7->Text = L"EDS ABORT VOTE 2";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(8, 256);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(192, 24);
			this->label8->TabIndex = 50;
			this->label8->Text = L"EDS ABORT VOTE 3";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(8, 304);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(192, 24);
			this->label9->TabIndex = 52;
			this->label9->Text = L"EDS ABORT B";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(8, 280);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(192, 24);
			this->label10->TabIndex = 51;
			this->label10->Text = L"EDS ABORT A";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(8, 328);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(192, 24);
			this->label11->TabIndex = 53;
			this->label11->Text = L"SCS CHANNEL ENABLE RCS A";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label12
			// 
			this->label12->Location = System::Drawing::Point(8, 352);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(192, 24);
			this->label12->TabIndex = 54;
			this->label12->Text = L"SCS CHANNEL ENABLE RCS B";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(8, 376);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(192, 24);
			this->label13->TabIndex = 55;
			this->label13->Text = L"CM RCS PRESS SIG A";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label14
			// 
			this->label14->Location = System::Drawing::Point(8, 400);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(192, 24);
			this->label14->TabIndex = 56;
			this->label14->Text = L"CM RCS PRESS SIG B";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->Location = System::Drawing::Point(8, 424);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(192, 24);
			this->label15->TabIndex = 57;
			this->label15->Text = L"LOGIC BUS A VOLTS";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label16
			// 
			this->label16->Location = System::Drawing::Point(8, 448);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(192, 24);
			this->label16->TabIndex = 58;
			this->label16->Text = L"LOGIC BUS B VOLTS";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label17
			// 
			this->label17->Location = System::Drawing::Point(8, 472);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(192, 24);
			this->label17->TabIndex = 59;
			this->label17->Text = L"FWD HS JETT A";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label18
			// 
			this->label18->Location = System::Drawing::Point(8, 496);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(192, 24);
			this->label18->TabIndex = 60;
			this->label18->Text = L"FWD HS JETT B";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label20
			// 
			this->label20->Location = System::Drawing::Point(8, 520);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(192, 24);
			this->label20->TabIndex = 61;
			this->label20->Text = L"CSM-LM LOCK RING SEP RELAY A";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label21
			// 
			this->label21->Location = System::Drawing::Point(8, 544);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(192, 24);
			this->label21->TabIndex = 62;
			this->label21->Text = L"CSM-LM LOCK RING SEP RELAY B";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// s11A5
			// 
			this->s11A5->Enabled = false;
			this->s11A5->Location = System::Drawing::Point(200, 40);
			this->s11A5->Name = L"s11A5";
			this->s11A5->Size = System::Drawing::Size(64, 20);
			this->s11A5->TabIndex = 63;
			this->s11A5->Text = L"XX.XX V";
			// 
			// s11A8
			// 
			this->s11A8->Enabled = false;
			this->s11A8->Location = System::Drawing::Point(200, 424);
			this->s11A8->Name = L"s11A8";
			this->s11A8->Size = System::Drawing::Size(64, 20);
			this->s11A8->TabIndex = 64;
			this->s11A8->Text = L"XX.XX V";
			// 
			// s11A6
			// 
			this->s11A6->Enabled = false;
			this->s11A6->Location = System::Drawing::Point(200, 448);
			this->s11A6->Name = L"s11A6";
			this->s11A6->Size = System::Drawing::Size(64, 20);
			this->s11A6->TabIndex = 65;
			this->s11A6->Text = L"XX.XX V";
			// 
			// s11E221
			// 
			this->s11E221->Enabled = false;
			this->s11E221->Location = System::Drawing::Point(200, 112);
			this->s11E221->Name = L"s11E221";
			this->s11E221->Size = System::Drawing::Size(64, 20);
			this->s11E221->TabIndex = 101;
			this->s11E221->Text = L"XXXX";
			// 
			// s11E231
			// 
			this->s11E231->Enabled = false;
			this->s11E231->Location = System::Drawing::Point(200, 136);
			this->s11E231->Name = L"s11E231";
			this->s11E231->Size = System::Drawing::Size(64, 20);
			this->s11E231->TabIndex = 102;
			this->s11E231->Text = L"XXXX";
			// 
			// s11E133
			// 
			this->s11E133->Enabled = false;
			this->s11E133->Location = System::Drawing::Point(200, 160);
			this->s11E133->Name = L"s11E133";
			this->s11E133->Size = System::Drawing::Size(64, 20);
			this->s11E133->TabIndex = 103;
			this->s11E133->Text = L"XXXX";
			// 
			// s11E136
			// 
			this->s11E136->Enabled = false;
			this->s11E136->Location = System::Drawing::Point(200, 184);
			this->s11E136->Name = L"s11E136";
			this->s11E136->Size = System::Drawing::Size(64, 20);
			this->s11E136->TabIndex = 104;
			this->s11E136->Text = L"XXXX";
			// 
			// s11E141
			// 
			this->s11E141->Enabled = false;
			this->s11E141->Location = System::Drawing::Point(200, 208);
			this->s11E141->Name = L"s11E141";
			this->s11E141->Size = System::Drawing::Size(64, 20);
			this->s11E141->TabIndex = 105;
			this->s11E141->Text = L"XXXX";
			// 
			// s11E134
			// 
			this->s11E134->Enabled = false;
			this->s11E134->Location = System::Drawing::Point(200, 304);
			this->s11E134->Name = L"s11E134";
			this->s11E134->Size = System::Drawing::Size(64, 20);
			this->s11E134->TabIndex = 110;
			this->s11E134->Text = L"XXXX";
			// 
			// s11E137
			// 
			this->s11E137->Enabled = false;
			this->s11E137->Location = System::Drawing::Point(200, 280);
			this->s11E137->Name = L"s11E137";
			this->s11E137->Size = System::Drawing::Size(64, 20);
			this->s11E137->TabIndex = 109;
			this->s11E137->Text = L"XXXX";
			// 
			// s11E227
			// 
			this->s11E227->Enabled = false;
			this->s11E227->Location = System::Drawing::Point(200, 376);
			this->s11E227->Name = L"s11E227";
			this->s11E227->Size = System::Drawing::Size(64, 20);
			this->s11E227->TabIndex = 108;
			this->s11E227->Text = L"XXXX";
			// 
			// s11E144
			// 
			this->s11E144->Enabled = false;
			this->s11E144->Location = System::Drawing::Point(200, 256);
			this->s11E144->Name = L"s11E144";
			this->s11E144->Size = System::Drawing::Size(64, 20);
			this->s11E144->TabIndex = 107;
			this->s11E144->Text = L"XXXX";
			// 
			// s11E142
			// 
			this->s11E142->Enabled = false;
			this->s11E142->Location = System::Drawing::Point(200, 232);
			this->s11E142->Name = L"s11E142";
			this->s11E142->Size = System::Drawing::Size(64, 20);
			this->s11E142->TabIndex = 106;
			this->s11E142->Text = L"XXXX";
			// 
			// s11E233
			// 
			this->s11E233->Enabled = false;
			this->s11E233->Location = System::Drawing::Point(200, 352);
			this->s11E233->Name = L"s11E233";
			this->s11E233->Size = System::Drawing::Size(64, 20);
			this->s11E233->TabIndex = 112;
			this->s11E233->Text = L"XXXX";
			// 
			// s11E223
			// 
			this->s11E223->Enabled = false;
			this->s11E223->Location = System::Drawing::Point(200, 328);
			this->s11E223->Name = L"s11E223";
			this->s11E223->Size = System::Drawing::Size(64, 20);
			this->s11E223->TabIndex = 111;
			this->s11E223->Text = L"XXXX";
			// 
			// s11E235
			// 
			this->s11E235->Enabled = false;
			this->s11E235->Location = System::Drawing::Point(200, 400);
			this->s11E235->Name = L"s11E235";
			this->s11E235->Size = System::Drawing::Size(64, 20);
			this->s11E235->TabIndex = 113;
			this->s11E235->Text = L"XXXX";
			// 
			// s11E157
			// 
			this->s11E157->Enabled = false;
			this->s11E157->Location = System::Drawing::Point(200, 544);
			this->s11E157->Name = L"s11E157";
			this->s11E157->Size = System::Drawing::Size(64, 20);
			this->s11E157->TabIndex = 117;
			this->s11E157->Text = L"XXXX";
			// 
			// s11E156
			// 
			this->s11E156->Enabled = false;
			this->s11E156->Location = System::Drawing::Point(200, 520);
			this->s11E156->Name = L"s11E156";
			this->s11E156->Size = System::Drawing::Size(64, 20);
			this->s11E156->TabIndex = 116;
			this->s11E156->Text = L"XXXX";
			// 
			// s11E265
			// 
			this->s11E265->Enabled = false;
			this->s11E265->Location = System::Drawing::Point(200, 496);
			this->s11E265->Name = L"s11E265";
			this->s11E265->Size = System::Drawing::Size(64, 20);
			this->s11E265->TabIndex = 115;
			this->s11E265->Text = L"XXXX";
			// 
			// s11E241
			// 
			this->s11E241->Enabled = false;
			this->s11E241->Location = System::Drawing::Point(200, 472);
			this->s11E241->Name = L"s11E241";
			this->s11E241->Size = System::Drawing::Size(64, 20);
			this->s11E241->TabIndex = 114;
			this->s11E241->Text = L"XXXX";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->s11A9);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->s11A5);
			this->groupBox1->Controls->Add(this->s11A8);
			this->groupBox1->Controls->Add(this->s11A6);
			this->groupBox1->Controls->Add(this->s11E221);
			this->groupBox1->Controls->Add(this->s11E231);
			this->groupBox1->Controls->Add(this->s11E133);
			this->groupBox1->Controls->Add(this->s11E136);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->s11E141);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->s11E134);
			this->groupBox1->Controls->Add(this->s11E137);
			this->groupBox1->Controls->Add(this->s11E227);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->s11E144);
			this->groupBox1->Controls->Add(this->s11E142);
			this->groupBox1->Controls->Add(this->s11E233);
			this->groupBox1->Controls->Add(this->s11E223);
			this->groupBox1->Controls->Add(this->s11E235);
			this->groupBox1->Controls->Add(this->s11E157);
			this->groupBox1->Controls->Add(this->s11E156);
			this->groupBox1->Controls->Add(this->s11E265);
			this->groupBox1->Controls->Add(this->s11E241);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Location = System::Drawing::Point(8, 8);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(272, 576);
			this->groupBox1->TabIndex = 118;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"LAUNCH ESCAPE SYSTEM";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->s11E308);
			this->groupBox2->Controls->Add(this->s11E295);
			this->groupBox2->Controls->Add(this->s11E303);
			this->groupBox2->Controls->Add(this->s11E298);
			this->groupBox2->Controls->Add(this->s11E306);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->s11E291);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Location = System::Drawing::Point(288, 8);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(272, 168);
			this->groupBox2->TabIndex = 119;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"EARTH LANDING SEQ CONTROL";
			// 
			// s11E308
			// 
			this->s11E308->Enabled = false;
			this->s11E308->Location = System::Drawing::Point(200, 136);
			this->s11E308->Name = L"s11E308";
			this->s11E308->Size = System::Drawing::Size(64, 20);
			this->s11E308->TabIndex = 113;
			this->s11E308->Text = L"XXXX";
			// 
			// s11E295
			// 
			this->s11E295->Enabled = false;
			this->s11E295->Location = System::Drawing::Point(200, 112);
			this->s11E295->Name = L"s11E295";
			this->s11E295->Size = System::Drawing::Size(64, 20);
			this->s11E295->TabIndex = 112;
			this->s11E295->Text = L"XXXX";
			// 
			// s11E303
			// 
			this->s11E303->Enabled = false;
			this->s11E303->Location = System::Drawing::Point(200, 88);
			this->s11E303->Name = L"s11E303";
			this->s11E303->Size = System::Drawing::Size(64, 20);
			this->s11E303->TabIndex = 111;
			this->s11E303->Text = L"XXXX";
			// 
			// s11E298
			// 
			this->s11E298->Enabled = false;
			this->s11E298->Location = System::Drawing::Point(200, 64);
			this->s11E298->Name = L"s11E298";
			this->s11E298->Size = System::Drawing::Size(64, 20);
			this->s11E298->TabIndex = 110;
			this->s11E298->Text = L"XXXX";
			// 
			// s11E306
			// 
			this->s11E306->Enabled = false;
			this->s11E306->Location = System::Drawing::Point(200, 40);
			this->s11E306->Name = L"s11E306";
			this->s11E306->Size = System::Drawing::Size(64, 20);
			this->s11E306->TabIndex = 109;
			this->s11E306->Text = L"XXXX";
			// 
			// label26
			// 
			this->label26->Location = System::Drawing::Point(8, 136);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(192, 24);
			this->label26->TabIndex = 108;
			this->label26->Text = L"MAIN CHUTE DISC RELAY B";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label27
			// 
			this->label27->Location = System::Drawing::Point(8, 112);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(192, 24);
			this->label27->TabIndex = 107;
			this->label27->Text = L"MAIN CHUTE DISC RELAY A";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label24
			// 
			this->label24->Location = System::Drawing::Point(8, 88);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(192, 24);
			this->label24->TabIndex = 106;
			this->label24->Text = L"MAIN DEP RELAY B";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label25
			// 
			this->label25->Location = System::Drawing::Point(8, 64);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(192, 24);
			this->label25->TabIndex = 105;
			this->label25->Text = L"MAIN DEP RELAY A";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label23
			// 
			this->label23->Location = System::Drawing::Point(8, 40);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(192, 24);
			this->label23->TabIndex = 104;
			this->label23->Text = L"DROGUE DEP RELAY B";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// s11E291
			// 
			this->s11E291->Enabled = false;
			this->s11E291->Location = System::Drawing::Point(200, 16);
			this->s11E291->Name = L"s11E291";
			this->s11E291->Size = System::Drawing::Size(64, 20);
			this->s11E291->TabIndex = 103;
			this->s11E291->Text = L"XXXX";
			// 
			// label22
			// 
			this->label22->Location = System::Drawing::Point(8, 16);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(192, 24);
			this->label22->TabIndex = 102;
			this->label22->Text = L"DROGUE DEP RELAY A";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->s10A22);
			this->groupBox3->Controls->Add(this->s11A51);
			this->groupBox3->Controls->Add(this->s11E46);
			this->groupBox3->Controls->Add(this->s11E43);
			this->groupBox3->Controls->Add(this->s11E45);
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Controls->Add(this->label31);
			this->groupBox3->Controls->Add(this->label30);
			this->groupBox3->Controls->Add(this->label29);
			this->groupBox3->Controls->Add(this->label28);
			this->groupBox3->Location = System::Drawing::Point(288, 184);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(272, 144);
			this->groupBox3->TabIndex = 120;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"CREW SAFETY SYSTEM";
			// 
			// s10A22
			// 
			this->s10A22->Enabled = false;
			this->s10A22->Location = System::Drawing::Point(200, 112);
			this->s10A22->Name = L"s10A22";
			this->s10A22->Size = System::Drawing::Size(64, 20);
			this->s10A22->TabIndex = 117;
			this->s10A22->Text = L"XXX.XX �F";
			// 
			// s11A51
			// 
			this->s11A51->Enabled = false;
			this->s11A51->Location = System::Drawing::Point(200, 88);
			this->s11A51->Name = L"s11A51";
			this->s11A51->Size = System::Drawing::Size(64, 20);
			this->s11A51->TabIndex = 116;
			this->s11A51->Text = L"XX.XX V";
			// 
			// s11E46
			// 
			this->s11E46->Enabled = false;
			this->s11E46->Location = System::Drawing::Point(200, 64);
			this->s11E46->Name = L"s11E46";
			this->s11E46->Size = System::Drawing::Size(64, 20);
			this->s11E46->TabIndex = 115;
			this->s11E46->Text = L"XXXX";
			// 
			// s11E43
			// 
			this->s11E43->Enabled = false;
			this->s11E43->Location = System::Drawing::Point(200, 40);
			this->s11E43->Name = L"s11E43";
			this->s11E43->Size = System::Drawing::Size(64, 20);
			this->s11E43->TabIndex = 114;
			this->s11E43->Text = L"XXXX";
			// 
			// s11E45
			// 
			this->s11E45->Enabled = false;
			this->s11E45->Location = System::Drawing::Point(200, 16);
			this->s11E45->Name = L"s11E45";
			this->s11E45->Size = System::Drawing::Size(64, 20);
			this->s11E45->TabIndex = 113;
			this->s11E45->Text = L"XXXX";
			// 
			// label32
			// 
			this->label32->Location = System::Drawing::Point(8, 112);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(192, 24);
			this->label32->TabIndex = 112;
			this->label32->Text = L"DOCKING PROBE TEMP";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label31
			// 
			this->label31->Location = System::Drawing::Point(8, 88);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(192, 24);
			this->label31->TabIndex = 111;
			this->label31->Text = L"ANGLE OF ATTACK";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label30
			// 
			this->label30->Location = System::Drawing::Point(8, 64);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(192, 24);
			this->label30->TabIndex = 110;
			this->label30->Text = L"MASTER CAUTION WARNING ON";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label29
			// 
			this->label29->Location = System::Drawing::Point(8, 40);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(192, 24);
			this->label29->TabIndex = 109;
			this->label29->Text = L"SM EDS ABORT REQUEST B";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label28
			// 
			this->label28->Location = System::Drawing::Point(8, 16);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(192, 24);
			this->label28->TabIndex = 108;
			this->label28->Text = L"SM EDS ABORT REQUEST A";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ELSForm
			// 
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->ClientSize = System::Drawing::Size(566, 588);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"ELSForm";
			this->Text = L"LES / ELS / CSS";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}		
};
}
