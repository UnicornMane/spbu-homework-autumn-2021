#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    long long a = 0;
    long long b = 0;
    long long c = 0;
    long long d = 0;
    cin >> a >> b >> c >> d;

    for (; a <= b; a++)
    {
        if ((a % d) == c)
        {
            cout << a << " ";
        }
    }
    return EXIT_SUCCESS;
}