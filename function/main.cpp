#include "functions.h"
void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 12;
	int arr[SIZE];
	FillRand(arr, SIZE);
	Print(arr, SIZE);

	cout << "��������� ����������� ����� ��:  ";
	int side;
	int shift;
	cin >> shift; cout << endl;
	cout << "���� �� ������ ��������� ����� �����, �������\"0\"���� ������ �������\"1\":  ";
	cin >> side; cout << endl;
	if (side == 0)
	{
		Shiftl(arr, SIZE, shift);
		Print(arr, SIZE);
	}
	else if (side == 1)
	{
		ShiftR(arr, SIZE, shift);
		Print(arr, SIZE);
	}
	cout << endl << endl;

	Sort(arr, SIZE);
	Print(arr, SIZE);
	cout << "����� ��������� �������:" << Sum(arr, SIZE) << endl;
	cout << "������� �������������� ��������� �������:" << Avg(arr, SIZE) << endl;
	cout << "����������� �������� � �������:" << MinValueIn(arr, SIZE) << endl;
	cout << "������������ �������� � �������:" << MaxValueIn(arr, SIZE) << endl;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "����� ��������� �������:" << Sum(brr, SIZE) << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);



	int A[ROWS][COLS];
	FillRand(A, ROWS, COLS);
	Print(A, ROWS, COLS);
	Sort(A, ROWS, COLS);
	Print(A, ROWS, COLS);
}

