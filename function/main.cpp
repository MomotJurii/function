#include "functions.h"
void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 12;
	int arr[SIZE];
	FillRand(arr, SIZE);
	Print(arr, SIZE);

	cout << "Выполнить циклический сдвиг на:  ";
	int side;
	int shift;
	cin >> shift; cout << endl;
	cout << "если вы хотите выполнить сдвиг влево, введите\"0\"если вправо введите\"1\":  ";
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
	cout << "Сумма элементов массива:" << Sum(arr, SIZE) << endl;
	cout << "Среднее арифметическое елементов массива:" << Avg(arr, SIZE) << endl;
	cout << "Минимальное значение в массиве:" << MinValueIn(arr, SIZE) << endl;
	cout << "Максимальное значение в массиве:" << MaxValueIn(arr, SIZE) << endl;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива:" << Sum(brr, SIZE) << endl;
	Sort(brr, SIZE);
	Print(brr, SIZE);



	int A[ROWS][COLS];
	FillRand(A, ROWS, COLS);
	Print(A, ROWS, COLS);
	Sort(A, ROWS, COLS);
	Print(A, ROWS, COLS);
}

