#include <iostream>
#include"mylib.h"

using namespace std;

int main(int argc, char* argv[])
{
	cout << "2.\n";
	{
		int n = 0;
		cin >> n;
		cout << task2(n) << "\n\n";
	}
	
	cout << "3.\n";
	{
		int n = 0;
		cin >> n;
		task3(n);
	}

	return EXIT_SUCCESS;
}