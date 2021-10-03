#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    cin >> n;

    int sum = 0;
   
    while (n--)
    {
        int t = 0;
        cin >> t;

        sum += t;
    }

    cout << sum;
    return EXIT_SUCCESS;
}