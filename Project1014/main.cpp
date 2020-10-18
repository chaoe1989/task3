#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "task.h"
using namespace std;
const int MAXSIZE = 100;

int main()
{
	int m;
	cout << "please input the number of sticks(the number must be greater than 3):" << endl;
	double len[MAXSIZE];
	cin >> m;
	cout << "enter the length of sticks:" << endl;
	for (int i = 0; i < m; i++)
	{
		cin >> len[i];
	}
	Cal_C(len,m);
	Cal_S(len,m);
	system("pause");
	return 0;
}