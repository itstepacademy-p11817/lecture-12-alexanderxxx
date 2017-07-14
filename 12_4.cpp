#include <iostream>
#include <stdlib.h>

int main()
{
	setlocale(0, "");
	double v=0.0, col=0.0, t1=7.0, t2= 4.5, t3=6.0, t4=1.7, summ=0.0, s=0.0, vir=0.0;

	while (t1 != 0)
	{
		std::cout << "Общая выручка: " << vir << '\n' << '\n' << "товары: " << '\n' << "1 - Водка" << '\n' << "2 - Пиво" << '\n' << "3 - Вино" << '\n' << "4 - Сигареты" << '\n' << "5 - чек" << '\n' << "0 - Выход" << '\n';
		std::cin >> v;
		if (v!=0 && v<5)
		{ 
			std::cout << "количество: ";
			std::cin >> col;
		}
		if (v == 1)
			summ += t1*col;
		else if (v == 2)
			summ += t2*col;
		else if (v == 3)
			summ += t3*col;
		else if (v == 4)
			summ += t4*col;
		else if (v == 5)
		{
			std::cout << "Скидка (%): ";
			std::cin >> s;
			if (s != 0)
			{
				summ = summ - (summ*s / 100);
			}
			std::cout << "К оплате: " << summ << '\n';
			vir = vir + summ;
			summ = 0;
		}
		else if (v == 0)
			return 0;
		else
			std::cout << "Введена какая то херня" << '\n';

	}
		
	system("pause");
	return 0;
}