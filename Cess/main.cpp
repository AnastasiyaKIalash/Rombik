#include<iostream>
using namespace std;

#define UPPER_LEFT_ANGLE   (char)218
#define UPPER_RIGHT_ANGLE   (char)191
#define LOWER_LEFT_ANGLE   (char)192
#define LOWER_RIGHT_ANGLE   (char)217
#define HORIZONTAL_LINE   (char)196
#define VERTICAL_LINE   (char)179
#define WITE_BOX   (char)219
#define BLACK_BOX   ' '

void main()
{
	setlocale(LC_ALL, " ");

	int n;
	cout << "Size: "; cin >> n;

	setlocale(LC_ALL, "C");

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	for (int i = 176; i < 224; i++)
	{
		if (i % 16 == 0)
		cout << endl;
		cout << i << "\t" << (char)i << " ";
	}
	cout << endl;
	
	
}