#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    cin >> n;

    int z = 0;
    int p = 0;
    int m = 0;

    while (n--)
    {
        int t = 0;
        cin >> t;
        if (t == 0)
        {
            z++;
        }
        else if (t > 0)
        {
            p++;
        }
        else
        {
            m++;
        }
    }

    cout << z << " " << p << " " << m;
    return EXIT_SUCCESS;
}