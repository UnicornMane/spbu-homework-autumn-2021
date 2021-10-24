#include <iostream>
#include <algorithm>

using namespace std;


int main(int argc, char* argv[])
{
    int arr[100] = { 0 };
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }


    //-----------------------------------------------------------------------------
       //3
    cout << "ARRAY : ";

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    //-----------------------------------------------------------------------------

       //4
    cout << "EVEN : ";

    for (int i = 0; i < n; ++i)
    {
        if ((arr[i] % 2) == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    //-----------------------------------------------------------------------------

       //5
    cout << "SUM : ";

    int tmp = 0;

    for (int i = 0; i < n; ++i)
    {
        tmp += arr[i];
    }
    cout << tmp << endl;


    //-----------------------------------------------------------------------------

       //6
    cout << "PRODUCT OF NEGATIVE : ";

    tmp = 1;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 0)
        {
            tmp *= arr[i];
        }
    }
    cout << tmp << endl;


    //-----------------------------------------------------------------------------

       //7
    cout << "FIRST MIN INDEX : ";

    tmp = 1e9;

    for (int i = 0; i < n; ++i)
    {
        tmp = min(tmp, arr[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        if (tmp == arr[i])
        {
            cout << i;
            break;
        }
    }
    cout << endl;


    //-----------------------------------------------------------------------------

       //8
    cout << "SECOND MAX : ";

    int secMax = -1e9;
    tmp = -1e9;

    for (int i = 0; i < n; ++i)
    {
        tmp = max(tmp, arr[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        if (tmp != arr[i])
        {
            secMax = max(secMax, arr[i]);
        }
    }
    cout << secMax << endl;


    //-----------------------------------------------------------------------------

       //9
    cout << "REVERSE : ";

    for (int i = n - 1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    //-----------------------------------------------------------------------------

       //10
    cout << "ODD INDEXES : ";

    for (int i = 1; i < n; i += 2)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}