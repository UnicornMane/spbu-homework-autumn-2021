#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
    bool even = false;
    int mini = 10001;
    int maxi = -10001;
    {
        int t = 0;
        while (cin >> t)
        {
            if (even)
            {
                maxi = max(t, maxi);
            }
            else
            {
                mini = min(t, mini);
            }
            even = !even;
        }
    }
    cout << maxi + mini;
    return EXIT_SUCCESS;
}
