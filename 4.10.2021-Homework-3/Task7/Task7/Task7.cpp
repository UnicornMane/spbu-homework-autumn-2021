#include <iostream>

using namespace std;

bool func(int a, int b, int c, int d, int x)
{
	return (a * (x * x * x) + b * (x * x) + c * x + d) == 0;
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cin >> a >> b >> c >> d;

	for (int x = 0; x <= 1000; x++)
	{
		if (func(a, b, c, d, x))
		{
			cout << x << " ";
		}
	}
	return EXIT_SUCCESS;
}