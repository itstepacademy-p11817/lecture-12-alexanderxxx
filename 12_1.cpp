#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int d1, d2, x;
	cout << "������� ���������:" << '\n';
	cin >> d1;
	cin >> d2;
	int qwe = 9;
	while (qwe!=0)
	{ 
		cout << "�����:";
		cin >> x;
		if (x< d1 || x>d2)
			cout << "����� �� ������ � ��������" << '\n';
		else
			return 0;
	}
	system("pause");
	return 0;
}