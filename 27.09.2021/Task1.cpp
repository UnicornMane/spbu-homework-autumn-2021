#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <clocale>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Russian");
  int n = 0;
  cin >> n;
  int n1 = n / 100;
  int n2 = (n % 100);
  int n3 = n % 10;
  vector<string> f1(10), f2(10);
  f1[1] = "Сто";
  f1[2] = "Двести";
  f1[3] = "Триста";
  f1[4] = "Четыреста";
  f1[5] = "Пятьсот";
  f1[6] = "Шестьсот";
  f1[7] = "Семьсот";
  f1[8] = "Восемьсот";
  f1[9] = "Девятьсот";

  if (n1)
  {
    cout << f1[n1] << " ";
  }

  if (n2 < 20)
  {
    switch (n2)
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
    switch (n2 / 10)
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
    }
    switch (n3)
    {
      case 1:
        cout << "один";
        break;
      case 2:
        cout << "два";
        break;
      case 3:
        cout << "три";
        break;
      case 4:
        cout << "четыре";
        break;
      case 5:
        cout << "пять";
        break;
      case 6:
        cout << "шесть";
        break;
      case 7:
        cout << "семь";
        break;
      case 8:
        cout << "восемь";
        break;
      case 9:
        cout << "девять";
        break;
      default:
        break;
    }
  }
  return EXIT_SUCCESS;
}
