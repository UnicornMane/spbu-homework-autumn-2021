#include <iostream>
#include <random>
#include <ctime>
#include "ArrayListLib.h"

using namespace std;

int main(int argc, char* argv[])
{
	srand(time(0));
	ArrayList tmp;
	for (int i = 0; i < 10; ++i)
	{
		tmp.pushend(rand() % 100);
	}

	cout << tmp << endl;

	cout << "-----------------------------\n";
	tmp.sort();

	cout << tmp << endl;

	cout << tmp.extract(7) << endl << tmp << endl;
	tmp.insert(66, 4);
	cout << tmp << endl;
	
	tmp.pushbegin(77);
	cout << tmp << endl;
	tmp.pushend(88);
	cout << tmp << endl;
	
	cout << tmp.extractbegin() << endl << tmp << endl;
	cout << tmp.extractend() << endl << tmp << endl;

	tmp.sort();
	cout << tmp << endl;

	return EXIT_SUCCESS;
}