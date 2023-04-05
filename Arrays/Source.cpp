#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"
#include"Sort.h"
#include"Shift.h"
#include"Search.h"
#include"UniqueRand.h"






//void shiftRight(int arr[], const int n, int number_of_shifts);


//void Sort(double arr[ROWS][COLS], double ROWS, double COLS);
//void Sort(char arr[ROWS][COLS], char ROWS, char COLS);
//void Sort(double arr[], const int n);

//void shiftLeft(int arr[ROWS][COLS], const int ROWS, int COLS, int number_of_shifts);


//void shiftRight(double arr[], const int n, int number_of_shifts);
//void shiftRight(char arr[], const int n, int number_of_shifts);
//void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
//void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

//void UniqueRand(char arr[ROWS][COLS], char ROWS, char COLS);

//void UniqueRand(double arr[ROWS][COLS], const int ROWS,const int COLS);




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
















//void shiftLeft(int arr[ROWS][COLS], const int ROWS, int COLS, int number_of_shifts)
//{
//	
//}

//void shiftRight(int arr[], const int n, int number_of_shifts)
//{
//	/*for (int i = 0; i < number_of_shifts; i++)
//	{
//		int buffer = arr[n - 1];
//		for (int i = n - 1; i > 0; i--)
//		{
//			arr[i] = arr[i - 1];
//		}
//		arr[0] = buffer;
//	}*/
//	shiftLeft(arr, n, n - number_of_shifts);
//
//}
//void shiftRight(double arr[], const int n, int number_of_shifts)
//{
//	
//}
//void shiftRight(char arr[], const int n, int number_of_shifts)
//{
//	
//}
//void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
//{
//	
//}
//void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
//{
//	
//}

//void Sort(double arr[], const int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[j] < arr[i])
//			{
//				arr[i] ^= arr[j];
//				arr[j] ^= arr[i];
//				arr[i] ^= arr[j];
//			}
//
//		}
//	}
//}

