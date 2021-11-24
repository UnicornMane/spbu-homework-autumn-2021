//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//
//    vector <bool> arrN(100001, false);
//    vector <bool> arrM(100001, false); // работает быстрее, потому что занимает меньше памяти -- влезает в кэш
//    int n = 0;
//    int m = 0;
//    cin >> n >> m;
//
//    for (int i = 0; i < n; ++i)
//    {
//        int t;
//        cin >> t;
//        arrN[t] = true;
//    }
//
//    for (int i = 0; i < m; ++i)
//    {
//        int t;
//        cin >> t;
//        arrM[t] = true;
//    }
//
//    for (int i = 0; i < 100001; ++i)
//    {
//        if (arrN[i] && arrM[i])
//        {
//            cout << i << " ";
//        }
//    }
//
//    return EXIT_SUCCESS;
//}  ---- решение, которое вы не одобрите, но оно заходит по времени в тестирующую систему на mingw за 0.28 времени

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    bool arr[100001][2] = { false, false };
    int n = 0;
    int m = 0;
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;
        arr[t][0] = true;
    }

    for (int i = 0; i < m; ++i)
    {
        int t;
        cin >> t;
        arr[t][1] = true;
    }

    for (int i = 0; i < 100001; ++i)
    {
        if (arr[i][0] && arr[i][1])
        {
            cout << i << " ";
        }
    }

    return EXIT_SUCCESS;
} //---- нормальное решение
