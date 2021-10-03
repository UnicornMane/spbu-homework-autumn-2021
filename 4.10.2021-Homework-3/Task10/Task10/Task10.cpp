#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int ceil_sqrt(int x)
{
    int l = 0;
    int r = numeric_limits<int> :: max();
    
    while (r - l > 1)
    {
        int m = l + ((r - l) >> 1);
        if ((long long)m * m <= x)
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    return l;
}

int find_start_point(int a, int b)
{
    int l = ceil_sqrt(a);
    if ((long long)l * l < a)
    {
        l++;
    }
    int r = b;
    while (r - l > 1)
    {
        int m = l + ((r - l) >> 1);
        if ((long long)m * m <= a)
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    return l;
}

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    cin >> a >> b;
    if ((0 > a) && (b > 0))
    {
        cout << 0 << " ";
    }
    for (int i = find_start_point(a, b); (long long)i * i <= b; ++i)
    {
        cout << i * i << " ";
    }
    return EXIT_SUCCESS;
}