#include "pch.h"
#include "prototype.h"

int logic()
{
	int n = 4, m = 4;// �����������
	char InputAction;// ����� �������
	bool check_matrix_A = false, check_matrix_B = false, check_InputAction = true;
	array<double>^ mas = gcnew array<double>(n * m);//������ ��� 1 �������
	array<double, 2>^ matr = gcnew array<double, 2>(n, m);//������ ��� 1 �������
	array<double>^ mas2 = gcnew array<double>(n * m);//������ ��� 2 �������
	array<double, 2>^ matr2 = gcnew array<double, 2>(n, m);//������ ��� 2 �������

	Console::Write("Laboratory number 2\n");
	Console::Write("Set values for real elements of arrays A and B\n");
	Console::WriteLine("and form arrays X and Y from elements on the main diagonals of matrices Aand B, respectively.\n");
	while (check_InputAction)
	{
		text();
		InputAction = Console::Read();
		Console::ReadLine();
		switch (InputAction - 48)
		{
		case 1:
			check_matrix_A = true;
			Console::WriteLine();
			Console::WriteLine("The matrix A is formed ");
			forming(matr, n, m);//������������
			Console::WriteLine();
			break;
		case 2:
			check_matrix_B = true;
			Console::WriteLine();
			Console::WriteLine("The matrix B is formed");
			Console::WriteLine();
			forming(matr2, n, m);//������������
			Console::WriteLine();
			break;
		case 3:
			if (check_matrix_A)
			{
				Console::WriteLine();
				Console::WriteLine("Matrix A:");
				out(matr, n, m);// ����� ��������
				Console::WriteLine();
			}
			else
			{
				Console::WriteLine();
				Console::WriteLine("Error!!!! At the beginning, form a matrix A");
				Console::WriteLine();
			}
			break;
		case 4:
			if (check_matrix_B)
			{
				Console::WriteLine();
				Console::WriteLine("Matrix B:");// 2  �������
				out(matr2, n, m);// ����� ��������
				Console::WriteLine();
			}
			else
			{
				Console::WriteLine();
				Console::WriteLine("Error!!!! At the beginning, form a matrix B");
				Console::WriteLine();
			}
			break;
		case 5:
			if (check_matrix_A)
			{
				//����� 1 ������� ���������� �� ��������� ������� ���������
				int k = form(matr, mas, n, m);
				Console::WriteLine();
				Console::WriteLine("Massive X:");
				out(mas, k);
				Console::WriteLine();
			}
			else
			{
				Console::WriteLine();
				Console::WriteLine("Error!!!! At the beginning, form a matrix A");
				Console::WriteLine();
			}
			break;
		case 6:
			if (check_matrix_B)
			{
				//����� 2 ������� ���������� �� ��������� ������� ���������
				int g = form(matr2, mas2, n, m);
				Console::WriteLine();
				Console::WriteLine("Massive Y:");
				out(mas2, g);
				Console::WriteLine();
			}
			else
			{
				Console::WriteLine();
				Console::WriteLine("Error!!!! At the beginning, form a matrix B");
				Console::WriteLine();
			}
			break;
		case 0:
			Console::WriteLine("Thank you for using the program.");
			check_InputAction = false;
			break;
		default:
			Console::WriteLine();
			Console::WriteLine("Error!!!! Select action");
			Console::WriteLine();
			break;
		}
	}
	return 0;
}