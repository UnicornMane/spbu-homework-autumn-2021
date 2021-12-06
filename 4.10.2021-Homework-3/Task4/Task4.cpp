#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	cin >> n >> k;

	int** f = new int* [n + 1];

	for (int i = 0; i <= n; i++)
	{
		f[i] = new int[n + 1];
		for (int j = 0; j <= n; j++)
		{
			f[i][j] = 1;
		}
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			f[i][j] = f[i - 1][j] + f[i - 1][j - 1];
		}
	}

	cout << f[n][k];

	for (int i = 0; i <= n; ++i)
	{
		delete[] f[i];
	}
	delete[] f;

	return EXIT_SUCCESS;
}