#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	cin >> k;

	int m1 = 0;
	int m2 = 0;
	cin >> m1 >> m2;

	{
		int t1 = (int)((bool)((k & (1 << m1))));
		int t2 = (int)((bool)((k & (1 << m2))));
		if (t1 == t2)
		{

		}
		else if (t1 == 0)
		{
			k = (k | (1 << m1));
			k = (k & ~(1 << m2));
		}
		else
		{
			k = (k | (1 << m2));
			k = (k & ~(1 << m1));
		}
	}

	cout << k;

	return EXIT_SUCCESS;
}
