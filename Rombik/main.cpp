#include<iostream>
using namespace std;
//#define ROMBUS_1
//#define ROMBUS_2
#define ROMBUS_3

void main()
{
	setlocale(LC_ALL, " ");

#ifdef ROMBUS_1

	int n;
	cout << "Size: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << "."; cout << "/";
		for (int j = 0; j < i; j++)cout << "..";cout << "\\";
			cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0 ; j <= i; j++)cout << ".";cout << "\\";
		for (int j = i; j < n-1; j++)cout << "..";cout << "/";
		cout << endl;
	}
#endif ROMBUS_1

#ifdef ROMBUS_2

	int n;
	cout << "Size: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++)cout << " ";cout << "\\";
			cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " ";cout << "\\";
		for (int j = 0; j < (n - i - 1) * 2; j++)cout << " ";cout << "/";
		cout << endl;
	}
#endif  ROMBUS_2

#ifdef ROMBUS_3

	int n;
	cout << "Size: "; cin >> n;

	for (int i = 0; i < n*2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (i+n == j || j+n==i)cout << "\\";
			else if (i == n - 1 - j || i-n == n*2 -j -1)cout << "/";
			else cout << " ";
		}
		cout << endl;
	}
#endif  ROMBUS_3


}