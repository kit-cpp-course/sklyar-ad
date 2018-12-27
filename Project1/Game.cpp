#include <iostream>
#include "Game.h"
// здесь пишем реализацию функций

	bool Game::Hod(int startX, int startY, int finishX, int finishY, array<Button^, 2>^ team0) {

		if ((finishX + 1 == startX || finishX - 1 == startX || finishY + 1 == startY || finishY - 1 == startY) && (finishX - startX != finishY - startY) && (finishX - startX != -(finishY - startY))) {
			return true;
		}
		else
		{
			return Jamp(startX, startY, finishX, finishY, team0);

		}
	}


	bool Game::Jamp(int startX, int startY, int finishX, int finishY, array<Button^, 2>^ team0) {

		int kol = 0;
		int i = 0;
		int g = 0;
		int m = 0;
		int tochliX[1000];
		int tochliY[1000];
		tochliX[0] = startX;
		tochliY[0] = startY;
		//team0[start+1]->Text = "111";
		while (kol < 8)
		{
			for (g = 0; g <= i; g++) {
				if (tochliX[g] == finishX && tochliY[g] == finishY) {
					return true;

				}
			}
			m = i;
			for (g = 0; g <= m; g++) {
				startX = tochliX[g];
				startY = tochliY[g];
				if (startX + 2 < 8 && team0[startX + 1,startY]->Text != "" && team0[startX + 2,startY]->Text == "") {
					tochliX[i] = startX + 2;
					tochliY[i] = startY;
					i++;
				}
				if (startX - 2 >=0 && team0[startX - 1, startY]->Text != "" && team0[startX - 2, startY]->Text == "") {
					tochliX[i] = startX - 2;
					tochliY[i] = startY;
					i++;
				}
				if (startY + 2 < 8 && team0[startX, startY+1]->Text != "" && team0[startX, startY+2]->Text == "") {
					tochliX[i] = startX;
					tochliY[i] = startY+2;
					i++;
				}
				if (startY - 2 >=0 && team0[startX , startY-1]->Text != "" && team0[startX, startY-2]->Text == "") {
					tochliX[i] = startX ;
					tochliY[i] = startY-2;
					i++;
				}
			}
			kol++;

		}
		return false;
	}
