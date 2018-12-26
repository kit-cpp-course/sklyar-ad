#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		array<Button^>^ team0 = gcnew array<Button^>(64);
		array<Button^>^ team1 = gcnew array<Button^>(16);
		array<Button^>^ team2 = gcnew array<Button^>(16);
		MyForm(void)
		{
			InitializeComponent();

			//array<Button^>^ msv = gcnew array<Button^>(5);
			//for (int i = 0; i < msv->Length; i++)
			//{
				//msv[i] = gcnew Button();
				//msv[i]->Size = Drawing::Size(75, 23);
				//msv[i]->Text = i.ToString();
				//msv[i]->Location = System::Drawing::Point(40, 40 + 40 * i);
				//Controls->Add(msv[i]);
			//}
			//
			//TODO: добавьте код конструктора
			//
			team0[0] = button3;
			team0[1] = button8;
			team0[2] = button2;
			team0[3] = button1;
			team0[4] = button7;
			team0[5] = button6;
			team0[6] = button5;
			team0[7] = button4;
			team0[8] = button16;
			team0[9] = button15;
			team0[10] = button14;
			team0[11] = button13;
			team0[12] = button12;
			team0[13] = button11;
			team0[14] = button10;
			team0[15] = button9;
			team0[16] = button32;
			team0[17] = button31;
			team0[18] = button30;
			team0[19] = button29;
			team0[20] = button28;
			team0[21] = button27;
			team0[22] = button26;
			team0[23] = button25;
			team0[24] = button24;
			team0[25] = button23;
			team0[26] = button22;
			team0[27] = button21;
			team0[28] = button20;
			team0[29] = button19;
			team0[30] = button18;
			team0[31] = button17;
			team0[32] = button64;
			team0[33] = button63;
			team0[34] = button62;
			team0[35] = button61;
			team0[36] = button60;
			team0[37] = button59;
			team0[38] = button58;
			team0[39] = button57;
			team0[40] = button56;
			team0[41] = button55;
			team0[42] = button54;
			team0[43] = button53;
			team0[44] = button52;
			team0[45] = button51;
			team0[46] = button50;
			team0[47] = button49;
			team0[48] = button48;
			team0[49] = button47;
			team0[50] = button46;
			team0[51] = button45;
			team0[52] = button44;
			team0[53] = button43;
			team0[54] = button42;
			team0[55] = button41;
			team0[56] = button40; 
			team0[57] = button39;
			team0[58] = button38;
			team0[59] = button37;
			team0[60] = button36;
			team0[61] = button35;
			team0[62] = button34;
			team0[63] = button33;
			
			team1[0] = button3;
			team1[1] = button8;
			team1[2] = button2;
			team1[3] = button1;
			team1[4] = button16;
			team1[5] = button15;
			team1[6] = button14;
			team1[7] = button13;
			team1[8] = button32;
			team1[9] = button31;
			team1[10] = button30;
			team1[11] = button29;
			team1[12] = button24;
			team1[13] = button23;
			team1[14] = button22;
			team1[15] = button21;
			for (int i = 0; i < 16; i++) {
				team1[i]->Text = "X";
			}
			
			team2[0] = button60;
			team2[1] = button59;
			team2[2] = button58;
			team2[3] = button57;
			team2[4] = button52;
			team2[5] = button51;
			team2[6] = button50;
			team2[7] = button49;
			team2[8] = button44;
			team2[9] = button43;
			team2[10] = button42;
			team2[11] = button41;
			team2[12] = button36;
			team2[13] = button35;
			team2[14] = button34;
			team2[15] = button33;
			for (int i = 0; i < 16; i++) {
				team2[i]->Text = "O";
			}
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Button^  button50;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::Button^  button54;
	private: System::Windows::Forms::Button^  button55;
	private: System::Windows::Forms::Button^  button56;
	private: System::Windows::Forms::Button^  button57;
	private: System::Windows::Forms::Button^  button58;
	private: System::Windows::Forms::Button^  button59;
	private: System::Windows::Forms::Button^  button60;
	private: System::Windows::Forms::Button^  button61;
	private: System::Windows::Forms::Button^  button62;
	private: System::Windows::Forms::Button^  button63;
	private: System::Windows::Forms::Button^  button64;



	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(48, 43);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(31, 23);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(75, 43);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(31, 23);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(130, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(31, 23);
			this->button1->TabIndex = 9;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(103, 43);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(31, 23);
			this->button2->TabIndex = 8;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(239, 43);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(31, 23);
			this->button4->TabIndex = 13;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(212, 43);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(31, 23);
			this->button5->TabIndex = 12;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(184, 43);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(31, 23);
			this->button6->TabIndex = 11;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(157, 43);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(31, 23);
			this->button7->TabIndex = 10;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(239, 63);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(31, 23);
			this->button9->TabIndex = 21;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(212, 63);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(31, 23);
			this->button10->TabIndex = 20;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(184, 63);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(31, 23);
			this->button11->TabIndex = 19;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(157, 63);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(31, 23);
			this->button12->TabIndex = 18;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(130, 63);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(31, 23);
			this->button13->TabIndex = 17;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(103, 63);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(31, 23);
			this->button14->TabIndex = 16;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(75, 63);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(31, 23);
			this->button15->TabIndex = 15;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(48, 63);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(31, 23);
			this->button16->TabIndex = 14;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(239, 103);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(31, 23);
			this->button17->TabIndex = 37;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(212, 103);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(31, 23);
			this->button18->TabIndex = 36;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(184, 103);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(31, 23);
			this->button19->TabIndex = 35;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(157, 103);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(31, 23);
			this->button20->TabIndex = 34;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(130, 103);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(31, 23);
			this->button21->TabIndex = 33;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(103, 103);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(31, 23);
			this->button22->TabIndex = 32;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(75, 103);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(31, 23);
			this->button23->TabIndex = 31;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(48, 103);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(31, 23);
			this->button24->TabIndex = 30;
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(239, 83);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(31, 23);
			this->button25->TabIndex = 29;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(212, 83);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(31, 23);
			this->button26->TabIndex = 28;
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(184, 83);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(31, 23);
			this->button27->TabIndex = 27;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(157, 83);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(31, 23);
			this->button28->TabIndex = 26;
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(130, 83);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(31, 23);
			this->button29->TabIndex = 25;
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(103, 83);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(31, 23);
			this->button30->TabIndex = 24;
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(75, 83);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(31, 23);
			this->button31->TabIndex = 23;
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(48, 83);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(31, 23);
			this->button32->TabIndex = 22;
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(239, 183);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(31, 23);
			this->button33->TabIndex = 69;
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(212, 183);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(31, 23);
			this->button34->TabIndex = 68;
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(184, 183);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(31, 23);
			this->button35->TabIndex = 67;
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(157, 183);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(31, 23);
			this->button36->TabIndex = 66;
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(130, 183);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(31, 23);
			this->button37->TabIndex = 65;
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(103, 183);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(31, 23);
			this->button38->TabIndex = 64;
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(75, 183);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(31, 23);
			this->button39->TabIndex = 63;
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(48, 183);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(31, 23);
			this->button40->TabIndex = 62;
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(239, 163);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(31, 23);
			this->button41->TabIndex = 61;
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(212, 163);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(31, 23);
			this->button42->TabIndex = 60;
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(184, 163);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(31, 23);
			this->button43->TabIndex = 59;
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(157, 163);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(31, 23);
			this->button44->TabIndex = 58;
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(130, 163);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(31, 23);
			this->button45->TabIndex = 57;
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(103, 163);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(31, 23);
			this->button46->TabIndex = 56;
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(75, 163);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(31, 23);
			this->button47->TabIndex = 55;
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(48, 163);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(31, 23);
			this->button48->TabIndex = 54;
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button49
			// 
			this->button49->Location = System::Drawing::Point(239, 143);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(31, 23);
			this->button49->TabIndex = 53;
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(212, 143);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(31, 23);
			this->button50->TabIndex = 52;
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(184, 143);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(31, 23);
			this->button51->TabIndex = 51;
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(157, 143);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(31, 23);
			this->button52->TabIndex = 50;
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button53
			// 
			this->button53->Location = System::Drawing::Point(130, 143);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(31, 23);
			this->button53->TabIndex = 49;
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button54
			// 
			this->button54->Location = System::Drawing::Point(103, 143);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(31, 23);
			this->button54->TabIndex = 48;
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(75, 143);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(31, 23);
			this->button55->TabIndex = 47;
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(48, 143);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(31, 23);
			this->button56->TabIndex = 46;
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(239, 123);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(31, 23);
			this->button57->TabIndex = 45;
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(212, 123);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(31, 23);
			this->button58->TabIndex = 44;
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(184, 123);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(31, 23);
			this->button59->TabIndex = 43;
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(157, 123);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(31, 23);
			this->button60->TabIndex = 42;
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button61
			// 
			this->button61->Location = System::Drawing::Point(130, 123);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(31, 23);
			this->button61->TabIndex = 41;
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button62
			// 
			this->button62->Location = System::Drawing::Point(103, 123);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(31, 23);
			this->button62->TabIndex = 40;
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button63
			// 
			this->button63->Location = System::Drawing::Point(75, 123);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(31, 23);
			this->button63->TabIndex = 39;
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// button64
			// 
			this->button64->Location = System::Drawing::Point(48, 123);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(31, 23);
			this->button64->TabIndex = 38;
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(371, 307);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button59);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->button61);
			this->Controls->Add(this->button62);
			this->Controls->Add(this->button63);
			this->Controls->Add(this->button64);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button3);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//DrawLine(System::Drawing::Pens::Green, 0, 0, 500, 500);
		
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			 public: bool hodX = true;
			 System::Windows::Forms::Button^ lastButton;
			 bool nullButton = true;
private: System::Void ButtonClick(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::Button^ nowButton = (Button^)sender;

	if (hodX == true) {
		if (nullButton==true && nowButton->Text == "X") {
			nowButton->Text = "||X||";
			lastButton = nowButton;
			nullButton = false;
		}
		else
		{
			if (nullButton == false && nowButton->Text == "") {
				int i = 0;
				
				while (team0[i]!=lastButton)
				{
					i++;
				}
				int g = 0;
				while (team0[g] != nowButton)
				{
					g++;
				}
				if (Hod(i, g) == true) {
					nowButton->Text = "X";
					lastButton->Text = "";
					hodX = false;
					nullButton = true;
				}
				else
				{
					lastButton->Text = "X";
					nullButton = true;
				}



			}
		}


		








	}
	else
	{
		if (nullButton == true && nowButton->Text == "O") {
			nowButton->Text = "||O||";
			lastButton = nowButton;
			nullButton = false;
		}
		else
		{
			if (nullButton == false && nowButton->Text == "") {
				int i = 0;

				while (team0[i] != lastButton)
				{
					i++;
				}
				int g = 0;
				while (team0[g] != nowButton)
				{
					g++;
				}
				if (Hod(i, g) == true) {
					nowButton->Text = "O";
					lastButton->Text = "";
					hodX = true;
					nullButton = true;
				}
				else
				{
					lastButton->Text = "O";
					nullButton = true;
				}



			}
		}
	}
	
}

		 private: bool Hod(int start, int finish) {
			 if ((finish % 8+1== start % 8 || finish % 8 - 1 == start % 8 || finish / 8 + 1 == start / 8 || finish / 8 - 1 == start / 8)&&(finish%8-start%8!= finish / 8 - start / 8) && (finish % 8 - start % 8 != -(finish / 8 - start / 8))) {
				 return true;
			 }
			 else
			 {
				 return Jamp(start, finish);
				 
			 }
		 }
		

		private: bool Jamp(int start, int finish) {
			int kol = 0;
			int i = 0;
			int g = 0;
			int m = 0;
			int tochli[1000];
			tochli[0] = start;
			//team0[start+1]->Text = "111";
			while (kol<8)
			{
				for (g = 0; g <= i; g++) {
					if (tochli[g] == finish) {
						return true;
						
					}
				}
				m = i;
				for (g = 0; g <= m; g++) {
					start = tochli[g];
					if (start % 8 + 2 < 8 && team0[start + 1]->Text != "" && team0[start + 2]->Text == "") {
						tochli[i] = start + 2;
						i++;
					}
					if (start % 8 - 2 >= 0 && team0[start - 1]->Text != "" && team0[start - 2]->Text == "") {
						tochli[i] = start - 2;
						i++;
					}
					if (start / 8 + 2 < 8 && team0[start + 8]->Text != ""&& team0[start + 16]->Text == "") {
						tochli[i] = start + 16;
						i++;
					}
					if (start / 8 - 2 >= 0 && team0[start - 8]->Text != ""&& team0[start - 16]->Text == "") {
						tochli[i] = start - 16;
						i++;
					}
				}
				kol++;

			}
			return false;
		}

		
};
}
