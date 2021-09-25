#include <iostream>

using namespace std;

int main()
{
  int n = 0;
  cin >> n;

  if ((!(n % 4) && (n % 100)) || !(n % 400))
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }

  return EXIT_SUCCESS;
}
