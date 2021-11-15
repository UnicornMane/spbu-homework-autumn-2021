#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int n = 0;
    cin >> n;

    int* arr = new int[n];
    int maxi = -1001;
    int mini = 1001;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == maxi)
        {
            arr[i] = mini;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    return EXIT_SUCCESS;
}