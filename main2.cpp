#include <iostream>

using namespace std;

void PrintInfoAboutArrays()
{
	int SSDArray[3];
	int SDDArray[3][3];

	int *DSDArray = new int[10];
	int **DDDArray = new int*[3];
	for (int i = 0; i < 3; ++i)
		DDDArray[i] = new int[3];

	//for SSD Array:
	cout << "Static Single-Dimension Array elements addresses are:" << endl;
	for (int i = 0; i < 3; ++i)
	{
		cout << &(SSDArray[i]) << " ";
	}
	cout << endl;

	//for DSD Array:
	cout << "Dynamic Single-Dimension Array elements addresses are:" << endl;
	for (int i = 0; i < 3; ++i)
	{
		cout << &(DSDArray[i]) << " ";
	}
	cout << endl;

	//for SDD Array:
	cout << "Static Double-Dimension Array elements addresses are:" << endl;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << &(SDDArray[i][j]) << " ";
		}
		cout << endl;
	}

	//for DDD Array:
	cout << "Dynamic Double-Dimension Array elements addresses are:" << endl;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << &(DDDArray[i][j]) << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 3; ++i)
		delete[] DDDArray[i];
	delete[] DDDArray;
	delete[] DSDArray;
}

int main(int argc, char **argv)
{
	PrintInfoAboutArrays();
	cin.get();
	return 0;
}