#pragma once


// ����� ����� ��������� �������

using namespace System::Windows::Forms;

// ���� �������
class Game {

public:
	bool Hod(int, int, int, int, array<Button^, 2>^);
	// ������ �������
public:
	bool Jamp(int, int, int, int, array<Button^, 2>^);
};
