﻿#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);

int Sum(const int arr[], const int n);
double Avg(const int arr[], const int n);
int minValueIn(const int arr[], const int n);
int maxValueIn(const int arr[], const int n);


void Sort(int arr[], const int n);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);



void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива:" << Sum(arr, n) << endl;
	cout << "Среднее арифмитическое элементов массива:" << Avg(arr, n) << endl;
	cout << "Минмальное значение в массиве:" << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве:" << maxValueIn(arr, n) << endl;
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



		int min, max;
		min = max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < min) min = arr[i];
			if (arr[i] > max) max = arr[i];
		}
		cout << "Минимальное значение в массиве:" << min << endl;
		cout << "Максимальное значение в массиве:" << max << endl;


	}
	void FillRand(int arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 100;
		}
	}
	void FillRand(double arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 100;
			arr[i] /= 100;
		}
	}
	void Print(const int arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
	void Print(const double arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
	int Sum(const int arr[], const int n)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
	double Avg(const int arr[], const int n)
	{
		return (double)Sum(arr, n) / n;
	}
	int minValueIn(const int arr[], const int n)
	{
		int min = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < min)min = arr[i];
		}
		return min;
	}
	int maxValueIn(const int arr[], const int n)
	{
		int max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max)max = arr[i];
		}
		return max;	
	}
	void shiftLeft(int arr[], const int n, int number_of_shifts)
	{
		for (int i = 0; i < number_of_shifts; i++)
		{
			int buffer = arr[0];
			for (int i = 0; i < n; i++)
			{
				arr[i] = arr[i + 1];
			}
			arr[n - 1] = buffer;
		}
		
	}

	void shiftRight(int arr[], const int n, int number_of_shifts)
	{
		/*for (int i = 0; i < number_of_shifts; i++)
		{
			int buffer = arr[n - 1];
			for (int i = n - 1; i > 0; i--)
			{
				arr[i] = arr[i - 1];
			}
			arr[0] = buffer;
		}*/
		shiftLeft(arr, n, n - number_of_shifts);

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


	/*cout << "Введите элементы массива:";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива:" << sum << endl;
	cout << "Среднее арифмитическое элементов массива:" << (double)sum / n << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "Минимальное значение в массиве:" << min << endl;
	cout << "Максимальное значение в массиве:" << max << endl;
}*/

	

