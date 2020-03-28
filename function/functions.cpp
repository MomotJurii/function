#include"functions.h"
void FillRand(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100 + 10;
	}return;
}
void FillRand(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = double(rand() % 100 + 10) / 11;
	}return;
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	return;
}
void Print(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	return;
}
void  Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void Sort(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	} return;
}
void Sort(double arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	} return;
}
void  Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = 0; l < COLS; l++)
				{
					if (arr[k][l] > arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}

	}
	cout << "Number of iterations:" << iterations << endl;
}

int Sum(int arr[], const int SIZE)
{
	int  sum = 0;
	for (int i = 0; i < SIZE; i++)
	{

		sum += arr[i];

	}
	return sum;
}
double Sum(double arr[], const int SIZE)
{
	double  sum = 0;
	for (int i = 0; i < SIZE; i++)
	{

		sum += arr[i];

	}
	return sum;
}
double Avg(int arr[], const double SIZE)
{
	int  sum = 0;
	double avg;
	for (int i = 0; i < SIZE; i++)
	{
		avg = Sum(arr, SIZE) / SIZE;
	}
	return avg;
}

long MinValueIn(int arr[], const int SIZE)
{
	int min;
	min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{

		if (arr[i] < min)
		{
			min = arr[i];
		}

	}return min;
}

int MaxValueIn(int arr[], const int SIZE)
{
	int max;
	max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}

	}return max;
}
void Shiftl(int arr[], const int SIZE, int shift)
{
	for (int i = 0; i < 4; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < SIZE; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[SIZE - 1] = buffer;

	}return;

}
void ShiftR(int arr[], const int SIZE, int shift)
{
	for (int i = 0; i < 4; i++)
	{
		int buffer = arr[SIZE - 1];
		for (int j = SIZE - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}