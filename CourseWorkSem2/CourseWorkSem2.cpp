// CourseWorkSem2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int Laba2_1();
int Laba2_2();
short int coursemainmenu();

int main()
{
	setlocale(LC_ALL, "Russian");

	short int choose_menu, exit = 0;

	while (1)
	{
		choose_menu = coursemainmenu();
		switch (choose_menu)
		{
		case 1:
			system("cls");
			cout << "������������ ������ �1 \n";
			Laba2_1();
			system("cls");
			break;
		case 2:
			system("cls");
			cout << "������������ ������ �2 \n";
			Laba2_2();
			system("pause");
			system("cls");
			break;
		case 0:
			return -1;
			break;

		}
	}

	return 0;
}

short int coursemainmenu() // ����, ����� �������
{
	setlocale(LC_ALL, "Russian");
	short int i;
	cout << "�������� ������ \n\n";
	cout << "�������� ���� �� ������� ���� (1,2), ����� ��������� ��������������� �� ������������ ������, ��� 0, ����� �����. \n";
	cout << "1) ������������ ������ �1 \n";
	cout << "2) ������������ ������ �2 \n";
	cout << "0) �����\n" << endl;

	cout << "�����: ";

	while (1)
	{
		cin >> i;
		if ((i >= 0) & (i <= 2))
			break;
		else
			cout << "������������ ����, ��������� �������.\n";
	}
	cout << "\n";
	return i;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
