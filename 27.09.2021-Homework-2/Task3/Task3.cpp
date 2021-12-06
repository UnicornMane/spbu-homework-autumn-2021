#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	cin >> k >> m >> n;
	k = min(k, n);
	n *= 2;

	cout << ((n / k) + (int)((n % k) != 0)) * m;
	return EXIT_SUCCESS;
}