#include <iostream>

using namespace std;


int main()
{
  int a = 0;
  int b = 0;
  int c = 0;
  cin >> a >> b >> c;
  if (c < a)
  {
    swap(c, a);
  }
  if (c < b)
  {
    swap(c, b);
  }

  if (a + b <= c)
  {
    cout << "impossible";
    return EXIT_SUCCESS;
  }
  if (a * a + b * b < c * c)
  {
    cout << "obtuse";
    return EXIT_SUCCESS;
  }
  if (a * a + b * b == c * c)
  {
    cout << "right";
    return EXIT_SUCCESS;
  }
  if (a * a + b * b > c * c)
  {
    cout << "acute";
    return EXIT_SUCCESS;
  }

  return EXIT_SUCCESS;
}
