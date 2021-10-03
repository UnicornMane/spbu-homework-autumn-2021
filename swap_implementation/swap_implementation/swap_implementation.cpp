#include <iostream>

using namespace std;

void my_swap(int& a, int& b)
{
	a ^= b;
	b ^= a;
	a ^= b;
}

int main()
{
	int a = 0;
	int b = 0;
	cin >> a >> b;

	my_swap(a, b);

	cout << a << endl << b;
}