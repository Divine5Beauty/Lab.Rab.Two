#include "pch.h"
#include  "prototype.h"

// ������� ������������ �������
void forming(array<double, 2>^ a, int n, int m)
{
	Random^ rnd = gcnew Random; //�������� ������� ��� ��������� �����
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i, j] = rnd->NextDouble() * 10;
		}
	}
}