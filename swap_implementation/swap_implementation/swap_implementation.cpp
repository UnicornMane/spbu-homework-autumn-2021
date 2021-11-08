#include <iostream>

using namespace std;

template<typename any>
void my_swap(any& a, any& b)
{
	a ^= b;
	b ^= a;
	a ^= b;
}

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	my_swap(a, b);
	cout << a << " " << b;
	return EXIT_SUCCESS;
}