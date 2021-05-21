#include "pch.h"
#include  "prototype.h"

// функция вывода матрицы на экран
void out(array<double, 2>^ a, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			Console::Write(L"{0,4:F2} ", a[i, j]);
		}
		Console::WriteLine();
	}
}

// функция вывода одномерного массива на экран
void out(array<double>^ b, int k)
{
	for (int i = 0; i < k; i++)
	{
		Console::Write(L"{0:F2} ", b[i]);
	}
	Console::WriteLine();
}