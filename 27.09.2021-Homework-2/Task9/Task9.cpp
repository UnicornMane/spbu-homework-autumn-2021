#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int m = 0;
    int n = 0;
    int x = 0;
    int y = 0;
    cin >> m >> n >> x >> y;

    if (x - 1 > 0)
    {
        cout << x - 1 << " " << y << endl;
    }
    if (y - 1 > 0)
    {
        cout << x << " " << y - 1 << endl;
    }
    if (x + 1 <= m)
    {
        cout << x + 1 << " " << y << endl;
    }
    if (y + 1 <= n)
    {
        cout << x << " " << y + 1 << endl;
    }

    return EXIT_SUCCESS;
}