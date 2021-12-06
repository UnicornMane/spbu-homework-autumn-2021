#include <iostream>
#include <clocale>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	cin >> n;
	int n1 = n / 100;
	int n2 = (n % 100);
	int n3 = n % 10;

	bool flag = false;
	switch (n / 100)
	{
	case 1:
		cout << "Сто ";
		break;

	case 2:
		cout << "Двести ";
		break;

	case 3:
		cout << "Триста ";
		break;

	case 4:
		cout << "Четыреста ";
		break;

	case 5:
		cout << "Пятьсот ";
		break;

	case 6:
		cout << "Шестьсот ";
		break;

	case 7:
		cout << "Семьсот ";
		break;

	case 8:
		cout << "Восемьсот ";
		break;

	case 9:
		cout << "Девятьсот ";
		break;
	default:
		break;
	}

	if (((n % 100) >= 10) && ((n % 100) < 20))
	{
		switch (n % 100)
		{
		case 10:
			cout << "десять ";
			break;
		case 11:
			cout << "одиннадцать ";
			break;
		case 12:
			cout << "двенадцать ";
			break;
		case 13:
			cout << "тренадцать ";
			break;
		case 14:
			cout << "четырнадцать ";
			break;
		case 15:
			cout << "пятнадцать ";
			break;
		case 16:
			cout << "шестнадцать ";
			break;
		case 17:
			cout << "семьнадцать ";
			break;
		case 18:
			cout << "восемнадцать ";
			break;
		case 19:
			cout << "девятнадцать ";
			break;
		default:
			break;
		}
	}
	else
	{
		switch ((n % 100) / 10)
		{
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		case 5:
			cout << "пятьдесят ";
			break;
		case 6:
			cout << "шестьдесят ";
			break;
		case 7:
			cout << "семьдесят ";
			break;
		case 8:
			cout << "восемьдесят ";
			break;
		case 9:
			cout << "девяносто ";
			break;
		default:
			break;
		}
		switch (n % 10)
		{
		case 1:
			cout << "один банан";
			flag = true;
			break;
		case 2:
			cout << "два банана";
			flag = true;
			break;
		case 3:
			cout << "три банана";
			flag = true;
			break;
		case 4:
			cout << "четыре банана";
			flag = true;
			break;
		case 5:
			cout << "пять бананов";
			flag = true;
			break;
		case 6:
			cout << "шесть бананов";
			flag = true;
			break;
		case 7:
			cout << "семь бананов";
			flag = true;
			break;
		case 8:
			cout << "восемь бананов";
			flag = true;
			break;
		case 9:
			cout << "девять бананов";
			flag = true;
			break;
		default:
			break;
		}
	}

	if (!flag)
	{
		cout << "бананов";
	}
	return EXIT_SUCCESS;
}