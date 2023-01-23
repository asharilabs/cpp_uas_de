// UAS_CPP_DE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Korelasi.h"

using namespace std;

int main()
{
	DataXY _data[100];
	int banyak;

	cin >> banyak;
	if (banyak >= 100) banyak = 100;

	for (int i = 0; i < banyak; i++)
	{
		system("cls");

		float _x;
		float _y;

		do
		{
			cout << "#" << (i + 1) << endl;
			cout << "x: "; cin >> _x;
			cout << "y: "; cin >> _y;

			_data[i].x = _x;
			_data[i].y = _y;

		} while (_x == 0 || _y == 0);
	}
	cout << "Data XY telah terinput: " << banyak << " data" << endl;

	// tampilkan data yang telah terinput
	ShowInputData(_data, banyak);
	ShowResumeData(_data, banyak);
	
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
