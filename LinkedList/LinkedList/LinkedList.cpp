#include<iostream>
#include"LinkedListLib.h"

using namespace std;

int main(int argc, char* argv[])
{
	LinkedList list;
	cout << list << endl;
	list.pushHead(0);
	list.pushTail(1);
	list.pushTail(2);
	list.pushHead(-1);
	list.pushHead(-2);
	cout << list << endl;
	cout << "poped : " << list.popHead() << endl;
	cout << "poped : " << list.popHead() << endl;
	cout << "poped : " << list.popTail() << endl;
	cout << "poped : " << list.popTail() << endl;
	cout << list << endl;
	list.insert(1, 0);
	list.insert(1, 2);
	cout << list << endl;
	list.insert(3, 2);
	cout << list << endl;
	cout << list.extract(2) << endl;
	cout << list << endl;
	list.insert(3, 2);
	list.insert(4, 2);
	list.insert(2, 2);
	cout << list << endl;
	list.swap(2, 5);
	cout << list << endl;
	return EXIT_SUCCESS;
}