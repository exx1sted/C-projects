#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int month, day, i = 1, counter = 1;
	cout << "������� �����(1-12)";
	cin >> month;
	cout << "������� ���� (1-7):";
	cin >> day;
	counter = day;
	switch (month) {
	case 1:cout << "������" << endl; month = 31; break;
	case 2:cout << "�������" << endl; month = 28; break;
	case 3:cout << "����" << endl; month = 31; break;
	case 4:cout << "������" << endl; month = 30; break;
	case 5:cout << "���" << endl; month = 31; break;
	case 6:cout << "����" << endl; month = 30; break;
	case 7:cout << "����" << endl; month = 31; break;
	case 8:cout << "������" << endl; month = 31; break;
	case 9:cout << "��������" << endl; month = 30; break;
	case 10:cout << "�������" << endl; month = 31; break;
	case 11:cout << "������" << endl; month = 30; break;
	case 12:cout << "�������" << endl; month = 31; break;

	}
	cout << "��\t��\t��\t���\t���\t���\t����" << endl;
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
