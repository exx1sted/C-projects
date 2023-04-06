#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int month, day, i = 1, counter = 1;
	cout << "Введите месяц(1-12)";
	cin >> month;
	cout << "Введите день (1-7):";
	cin >> day;
	counter = day;
	switch (month) {
	case 1:cout << "Январь" << endl; month = 31; break;
	case 2:cout << "Февраль" << endl; month = 28; break;
	case 3:cout << "Март" << endl; month = 31; break;
	case 4:cout << "Апрель" << endl; month = 30; break;
	case 5:cout << "Май" << endl; month = 31; break;
	case 6:cout << "Июнь" << endl; month = 30; break;
	case 7:cout << "Июль" << endl; month = 31; break;
	case 8:cout << "Август" << endl; month = 31; break;
	case 9:cout << "Сентябрь" << endl; month = 30; break;
	case 10:cout << "Октября" << endl; month = 31; break;
	case 11:cout << "Ноябрь" << endl; month = 30; break;
	case 12:cout << "Декабрь" << endl; month = 31; break;

	}
	cout << "пн\tвт\tср\tчет\tпят\tсуб\tвоск" << endl;
	for (int j = 1; j < day; j++)
		cout << "\t";
	for (int i = 1; i <= month; i++)
	{


		if (counter > 7)
		{
			cout << "\n";
			counter = 1;
		}
		cout << i << "\t";
		counter++;



	}
	system("pause");
	return 0;
}
