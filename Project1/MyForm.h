
#pragma once
#include "Game.h"
#include "MakeButtons.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;

	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		array<Button^, 2>^ team0 = gcnew array<Button^, 2>(8, 8);
		MyForm(void)
		{
			InitializeComponent();
			int dimansionOfField = 8;
			MakeButtons m;
			m.MakeButton(dimansionOfField, team0);
			for (int i = 0; i < dimansionOfField; i++)
			{
				for (int j = 0; j < dimansionOfField; j++)
				{
					team0[i, j]->Click += gcnew System::EventHandler(this, &MyForm::ButtonClick);
					Controls->Add(team0[i, j]);
				}
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
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(371, 307);
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
	Game t;
	if (hodX == true) {
		if (nullButton==true && nowButton->Text == "X") {
			nowButton->Text = "|X|";
			lastButton = nowButton;
			nullButton = false;
		}
		else
		{
			if (nullButton == false && nowButton->Text == "") {
				int i1 = 0;
				int i2 = 0;
				while (team0[i1,i2]!=lastButton)
				{
					i1++;
					if (i1 > 7) {
						i1=0;
						i2++;
					}
				}
				int g1 = 0;
				int g2 = 0;
				while (team0[g1,g2] != nowButton)
				{
					g1++;
					if (g1 > 7) {
						g1 = 0;
						g2++;
					}
				}
				if (t.Hod(i1,i2,g1, g2, team0) == true) {
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
			nowButton->Text = "|O|";
			lastButton = nowButton;
			nullButton = false;
		}
		else
		{
			if (nullButton == false && nowButton->Text == "") {
				int i1 = 0;
				int i2 = 0;
				while (team0[i1, i2] != lastButton)
				{
					i1++;
					if (i1 > 7) {
						i1 = 0;
						i2++;
					}
				}
				int g1 = 0;
				int g2 = 0;
				while (team0[g1, g2] != nowButton)
				{
					g1++;
					if (g1 > 7) {
						g1 = 0;
						g2++;
					}
				}
				
				if (t.Hod(i1, i2, g1, g2, team0) == true) {
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

		 

		
};
}
