#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"
#include"Sort.h"
#include"Shift.h"
#include"Search.h"
#include"UniqueRand.h"



void UniqueRand(int arr[], const int n);
void UniqueRand(char arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(char arr[ROWS][COLS], char ROWS, char COLS);
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[], const int n);
void Sort(double arr[ROWS][COLS], double ROWS, double COLS);
void Sort(char arr[ROWS][COLS], char ROWS, char COLS);
void Sort(double arr[], const int n);



//#defiine ARRAYS_1
#define ARRAYS_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef ARRAYS_1
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	FillRand(arr, n, 0, 5);
	/*UnigueRand(arr, n);*/
	Print(arr, n);
	cout << "Сумма элементов массива:" << Sum(arr, n) << endl;
	cout << "Среднее арифмитическое элементов массива:" << Avg(arr, n) << endl;
	cout << "Минмальное значение в массиве:" << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве:" << maxValueIn(arr, n) << endl;
	Search(arr, n);
	Sort(arr, n);
	Print(arr, n);


	/*int number_of_shifts;
	cout << "Введите кол - во сдвигов влево:"; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите кол - во сдвигов вправо:"; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);*/
	const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);
#endif // ARRAYS_1
		
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS, 10, 20);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива:" << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива:" << Avg(i_arr_2, ROWS, COLS) << endl;
	Search(i_arr_2, ROWS, COLS); 
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	UniqueRand(i_arr_2, ROWS, COLS);
	
	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	Sum(d_arr_2, ROWS, COLS);

	char c_arr_2[ROWS][COLS];
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	Sum(c_arr_2, ROWS, COLS);

}

void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}
void UniqueRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(char arr[ROWS][COLS], char ROWS, char COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}
void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						arr[i][j] ^= arr[k][l];
						arr[k][l] ^= arr[i][j];
						arr[i][j] ^= arr[k][l];
					}
					iterations++;
				}
			}
		}
	}
	cout << "Массив отсортирован за" << iterations << "итерация." << endl;
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}

		}
	}
}
void Sort(double arr[ROWS][COLS], double ROWS, double COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					double buffer;
					if (arr[i][j] > arr[k][l])
					{
						buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}

				}
			}
		}
	}

}
void Sort(char arr[ROWS][COLS], char ROWS, char COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; k < COLS; k++)
				{
					char buffer;
					if (arr[i][j] > arr[k][l])
					{
						buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			double buffer = 0;
			if (arr[j] < arr[i])
			{
				buffer = arr[j];
				arr[j] = arr[i];
				arr[i] = buffer;
			}
		}
	}
}


