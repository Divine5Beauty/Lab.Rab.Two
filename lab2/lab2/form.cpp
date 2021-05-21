#include "pch.h"
#include  "prototype.h"

// функци€ формировани€ одномерного массива и запоминание нужного количества пам€ти дл€ него
int form(array<double, 2>^ a, array<double>^ b, int n, int m)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)
			{
				b[k] = a[i, j];
				k++;
			}
		}
	}
	return k;
}
