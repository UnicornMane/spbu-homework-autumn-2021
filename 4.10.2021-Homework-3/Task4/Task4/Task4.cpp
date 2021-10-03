#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	cin >> n >> k;

	vector <vector <int>> f(n + 1, vector <int>(n + 1, 1));

	for (int i = 0; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			f[i][j] = f[i - 1][j] + f[i - 1][j - 1];
		}
	}

	cout << f[n][k];
	return EXIT_SUCCESS;
}