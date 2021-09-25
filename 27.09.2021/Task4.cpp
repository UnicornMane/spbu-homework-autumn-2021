#include <iostream>

using namespace std;


int main()
{

  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  cin >> a >> b >> c >> d;

  //ax + b
  //------ = 0
  //cx + d


  if ((c == 0) && (d == 0))
  {
    cout << "NO";
    return EXIT_SUCCESS;
  }

  if ((a == 0) && (b == 0))
  {
    cout << "INF";
    return EXIT_SUCCESS;
  }

  if ((-b) % a)
  {
    cout << "NO";
    return EXIT_SUCCESS;
  }

  int x = -b / a;

  if (!(c * x + d))
  {
    cout << "NO";
    return EXIT_SUCCESS;
  }
  cout << x;

  return EXIT_SUCCESS;
}
