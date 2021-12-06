#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a >> b >> c;
    if (c < a)
    {
        a ^= c;
        c ^= a;
        a ^= c;
    }
    if (c < b)
    {
        c ^= b;
        b ^= c;
        c ^= b;
    }

    if (a + b <= c)
    {
        cout << "impossible";
        return EXIT_SUCCESS;
    }
    if (a * a + b * b < c * c)
    {
        cout << "obtuse";
        return EXIT_SUCCESS;
    }
    if (a * a + b * b == c * c)
    {
        cout << "right";
        return EXIT_SUCCESS;
    }
    if (a * a + b * b > c * c)
    {
        cout << "acute";
        return EXIT_SUCCESS;
    }

    return EXIT_SUCCESS;
}