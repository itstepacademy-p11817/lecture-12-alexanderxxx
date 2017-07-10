#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	setlocale(0, "");
	double v, col, t1=7.0, t2= 4.5, t3=6.0, t4=1.7, summ=0, s, vir=0;

	int qwe = 9;
	while (qwe != 0)
	{
		cout << "Общая выручка: " << vir << '\n' << '\n' << "товары: " << '\n' << "1 - Водка" << '\n' << "2 - Пиво" << '\n' << "3 - Вино" << '\n' << "4 - Сигареты" << '\n' << "5 - чек" << '\n' << "0 - Выход" << '\n';
		cin >> v;
		if (v!=0 && v<5)
		{ 
			cout << "количество: ";
			cin >> col;
		}
		if (v == 1)
			summ = summ + t1*col;
		else if (v == 2)
			summ = summ + t2*col;
		else if (v == 3)
			summ = summ + t3*col;
		else if (v == 4)
			summ = summ + t4*col;
		else if (v == 5)
		{
			cout << "Скидка (%): ";
			cin >> s;
			if (s != 0)
			{
				summ = summ - (summ*s / 100);
			}
			cout << "К оплате: " << summ << '\n';
			vir = vir + summ;
			summ = 0;
		}
		else if (v == 0)
			return 0;
		else
			cout << "Введена какая то херня" << '\n';

	}
		
	system("pause");
	return 0;
}