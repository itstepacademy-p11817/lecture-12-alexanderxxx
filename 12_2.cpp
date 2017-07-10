#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	double s=0, k, summ=0, s1=1;
	cout << "K= ";
	cin >> k;
	for (int i=0,f=1;i<k;i++,f++)
	{
		for (int w=1;w<=f;w++)
		{ 
			s1 = s1*w;
		}
		s = 1 / s1;
		summ = summ + s;
	}
	cout << summ << '\n';
	system("pause");
	return 0;
}