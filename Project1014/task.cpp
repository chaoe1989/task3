#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <algorithm>
#include "TASK.h"
const int MAXSIZE = 100;
using namespace std;

int IsTriangle(int a, int b, int c)
{
	int flag = 0;
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		flag = 1;
	}
	return flag;
}

int IsTriangle(float a, float b, float c)
{
	int flag = 0;
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		flag = 1;
	}
	return flag;
}

int IsTriangle(double a, double b, double c)
{
	int flag = 0;
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		flag = 1;
	}
	return flag;
}

void Cal_C(double *l,int m)
{
	double max_c = 0;
	double *a = (double *)malloc(3 * sizeof(double));
	for (int i = 0; i <= m - 3; i++)
	{
		for (int j = i+1; j <= m - 2; j++)
		{
			for (int k = j+1; k <= m - 1; k++)
			{
				int flag = IsTriangle(l[i], l[j], l[k]);
				if (flag == 1)
				{
					double c = l[i] + l[j] + l[k];
					if (c > max_c)
					{
						a[0] = l[i];
						a[1] = l[j];
						a[2] = l[k];
						max_c = c;
					}
				}
			}
		}
	}
	cout << "the max perimeter is:" << max_c << endl;
	if (max_c)
	{
		cout << "the three sides are: " << a[0] << " " << a[1] << " " << a[2] << " " << endl;
	}
}

void Cal_S(double *l, int m)
{
	double max_s = 0;
	double *a = (double *)malloc(3 * sizeof(double));
	for (int i = 0 ; i <= m - 3; i++)
	{
		for (int j = i + 1 ; j <= m - 2; j++)
		{
			for (int k = j + 1 ; k <= m - 1; k++)
			{
				int flag = IsTriangle(l[i], l[j], l[k]);
				if (flag == 1)
				{
					double p = (l[i] + l[j] + l[k]) / 2;
					double s = sqrt(p*(p - l[i])*(p - l[j])*(p - l[k]));
					if (s > max_s)
					{
						a[0] = l[i];
						a[1] = l[j];
						a[2] = l[k];
						max_s = s;
					}
				}
			}
		}
	}
	cout << "the max area is:" << max_s << endl;
	if (max_s)
		cout << "the three sides are:" << a[0] << " " << a[1] << " " << a[2] << " " << endl;
}
			
		