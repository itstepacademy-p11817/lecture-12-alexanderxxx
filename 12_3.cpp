#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	int x = 0, x1 = 0, c=0;
	for (int b = 0;b < 1000000;b++)
	{
		x = (b / 100 % 10) + (b / 10 % 10) + (b / 1 % 10);
		x1= (b / 1000 % 10) + (b / 10000 % 10) + (b / 100000 % 10);
		if (x == x1)
			c = c++;
	}
	cout << c << '\n';
	system("pause");
	return 0;
}