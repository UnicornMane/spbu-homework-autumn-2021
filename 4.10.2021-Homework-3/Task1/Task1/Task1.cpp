#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
	long long n = 0;
	cin >> n;
	
	long long fact = 1;
	for (int i = 2; i <= n; i++)
	{
		fact *= (long long)i;
	}
	cout << fact;
	return EXIT_SUCCESS;
}