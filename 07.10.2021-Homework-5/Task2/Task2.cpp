#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double f = 0.0;
	cin >> f;

	long long value = *((long long*)&f);

	if (f < 0)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}


	for (int i = 1; i < sizeof(int) * 8; ++i)
	{
		long long currentBit = (sizeof(long long) * 8 - i - 1);
		long long bitMask = 1ll << currentBit;
		long long bit = (bool)(value & bitMask);

		cout << bit;
		if ((i + 1) % 4 == 0)
		{
			cout << " ";
		}
	}

	cout << endl;

	return EXIT_SUCCESS;
}