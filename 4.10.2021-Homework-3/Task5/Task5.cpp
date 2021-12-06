#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int x = 0;
    cin >> x;

    int* st = new int[x];

    int cnt = 0;

    for (int i = 1; i * i <= x; i++)
    {
        if (i * i == x)
        {
            cout << i << " ";
        }
        else if ((x % i) == 0)
        {
            cout << i << " ";
            st[cnt++] = x / i;
        }
    }

    while (cnt)
    {
        cout << st[--cnt] << " ";
    }

    delete[] st;

    return EXIT_SUCCESS;
}