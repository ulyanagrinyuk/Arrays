#pragma once
#include"Shift.h"


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

void shiftLeft(double arr[ROWS][COLS], const int ROWS, int COLS, int number_of_shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		double buffer = arr[0][0];
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = arr[i][j + 1];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void shiftLeft(char arr[ROWS][COLS], const int ROWS, int COLS, int number_of_shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		char buffer = arr[0][0];
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = arr[i][j + 1];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n, int number_of_shifts)
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
void shiftLeft(char arr[], const int n, int number_of_shifts)
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
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int k = 0; k < number_of_shifts; k++)
	{
		int buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i > 1; i--)
		{
			for (int j = COLS - 1; j > 1; j--)
			{
				if (j == 0 && i != 0)
				{
					arr[i][j] = arr[i - 1][COLS];
				}
				else
				{
					arr[i][j] = arr[i][j - 1];
				}
			}
		}
		arr[0][0] = buffer;
	}

}