#include "MakeButtons.h"

void MakeButtons::MakeButton(int dimansionOfField, array<Button^, 2>^ team0) {
	bool flag = false;
	int x = 0, y = 0;
	for (int i = 0; i < dimansionOfField; i++)
	{
		for (int j = 0; j < dimansionOfField; j++)
		{
			team0[i, j] = gcnew Button();
			team0[i, j]->Size = Drawing::Size(30, 30);
			team0[i, j]->Text = "";
			team0[i, j]->Location = System::Drawing::Point(x + 20, 90 + y);
			x += 30;

			flag = true;
		}
		x = 0;
		y += 30;
	}

	for (int i1 = 0; i1 < 4; i1++) {
		for (int i2 = 0; i2 < 4; i2++) {
			team0[i1, i2]->Text = "X";
		}
	}
	for (int i1 = 4; i1 < 8; i1++) {
		for (int i2 = 4; i2 < 8; i2++) {
			team0[i1, i2]->Text = "O";
		}
	}
}