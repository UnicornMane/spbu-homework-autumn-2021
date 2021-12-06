#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
	int k = 0;
	cin >> k;

	cout << ((!(k % 4) || (k == 1)) ? "YES" : "NO");

	return EXIT_SUCCESS;
}