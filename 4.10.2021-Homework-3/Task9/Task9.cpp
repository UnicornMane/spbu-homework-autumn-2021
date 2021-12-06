#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    long long a = 0;
    long long b = 0;
    long long c = 0;
    long long d = 0;
    cin >> a >> b >> c >> d;

    for (int i = a; i <= b; ++i)
    {
        if ((i % d) == c)
        {
            cout << i << " ";
        }
    }

    return EXIT_SUCCESS;
}