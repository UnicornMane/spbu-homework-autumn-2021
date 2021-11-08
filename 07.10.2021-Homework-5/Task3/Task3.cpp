#include <iostream>
#include<cmath>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	cin >> k;

	if (k == numeric_limits<int>::min())
	{
		cout << "Err";
		return EXIT_FAILURE;
	}

	if (k < 0)
	{
		k = ~k;
		bool flag = false;

		for (int i = 0; !flag; ++i)
		{
			if (k & (1 << (i)))
			{
				k = k & (~(1 << (i)));
			}
			else
			{
				k = k | ((1 << (i)));
				flag = true;
			}
		}
	}

	cout << k;

	return EXIT_SUCCESS;
}
