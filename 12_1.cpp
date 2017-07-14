#include <iostream>
#include <stdlib.h>

int main()
{
	setlocale(0, "");
	int d1=0, d2=0, x=0;
	std::cout << "границы диапазона:" << '\n';
	std::cin >> d1;
	std::cin >> d2;
	while (d2!=0)
	{ 
		std::cout << "число:";
		std::cin >> x;
		if (x< d1 || x>d2)
			cout << "число не входит в диапазон" << '\n';
		else
			return 0;
	}
	system("pause");
	return 0;
}