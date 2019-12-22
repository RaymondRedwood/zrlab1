#include <iostream>

using namespace std;

int varglobal = 156;

void PrintInfo()
{
	int varauto = 988;
	int *vardynamic = new int;
	*vardynamic = 5000;

	cout << "Global Variable varglobal address is: " << &varglobal << " value is " << varglobal << endl;
	cout << "Automatic Variable varauto address is: " << &varauto << " value is " << varauto << endl;
	cout << "Dynamic Variable vardynamic address is: " << vardynamic << " value is " << *vardynamic << endl;

	delete vardynamic;
}

int main(int argc, char **argv)
{
	PrintInfo();
	cin.get();
	return 0;

	return 0;
}