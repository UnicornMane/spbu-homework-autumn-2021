#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    cin >> n;

    int cnt = 1;
    int str = 1;
    
    while (cnt <= n)
    {
        int tstr = str;
        while (tstr--)
        {
            if (cnt > n)
            {
                return EXIT_SUCCESS;
            }
            cout << setw(5) << cnt << " ";
            cnt++;
        }
        str++;
        cout << '\n';
    }
    return EXIT_SUCCESS;
}