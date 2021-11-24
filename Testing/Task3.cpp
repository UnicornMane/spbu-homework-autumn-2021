#include <iostream>
#include <cmath>
#include <numeric>

using namespace std;

int gcd(int, int);

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    cin >> a >> b;

    cout << a * b / gcd(a, b); 
    return EXIT_SUCCESS;
}

int gcd(int a, int b)
{
    while (b)
    {
        a %= b;
        swap(a, b); // я реализовывал своп сам для любого типа данных через шаблоны; реализация лежит в моём гитхабе там же, где и домашки с названием swap_implementation:
                         //https://github.com/UnicornMane/spbu-homework-autumn-2021/blob/main/swap_implementation/swap_implementation/swap_implementation.cpp
    }
    return a;
}
