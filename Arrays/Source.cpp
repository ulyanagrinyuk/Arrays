#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

const int ROWS = 5;
const int COLS = 8;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand);
void FillRand(double arr[ROWS][COLS], double ROWS, double COLS);
void FillRand(char arr[ROWS][COLS], char ROWS, char COLS);
void FillRand(int arr[], const int n);
void FillRand(char arr[], const int n);

void Print(const int arr[], const int n);
void Print(double arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], double ROWS, double COLS);
void Print(char arr[ROWS][COLS], char ROWS, char COLS);
void Print(char arr[], const int n);

int Sum(const int arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(double arr[ROWS][COLS], double ROWS, double COLS);
int Sum(char arr[ROWS][COLS], char ROWS, char COLS);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);

double Avg(const int arr[], const int n);
int Avg(const int arr[ROWS][COLS], const int ROWS, int const COLS);
int Avg(char arr[ROWS][COLS], char ROWS, char COLS);
char Avg(char arr[], const int n);
double Avg(double arr[], const int n);
int Avg(double arr[ROWS][COLS], double ROWS, double COLS);

int minValueIn(const int arr[], const int n);
double minValueIn(double arr[], const int n);
double minValueIn(double arr[ROWS][COLS], double ROWS, double COLS);
char minValueIn(char arr[ROWS][COLS], char ROWS, char COLS);
char minValueIn(char arr[], const int n);
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(const int arr[], const int n);
double maxValueIn(double arr[ROWS][COLS], double ROWS, double COLS);
char maxValueIn(char arr[], const int n);
double maxValueIn(double arr[], const int n);
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char arr[ROWS][COLS], char ROWS, char COLS);

void Sort(int arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
//void Sort(double arr[ROWS][COLS], double ROWS, double COLS);
void Sort(char arr[ROWS][COLS], char ROWS, char COLS);
//void Sort(double arr[], const int n);
void Sort(char arr[], const int n);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftLeft(char arr[], const int n, int number_of_shifts);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, int COLS, int number_of_shifts);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, int COLS, int number_of_shifts);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, int COLS, int number_of_shifts);

void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(double arr[], const int n, int number_of_shifts);
void shiftRight(char arr[], const int n, int number_of_shifts);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(const int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void UniqueRand(int arr[], const int n);
void UniqueRand(char arr[], const int n);
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(char arr[ROWS][COLS], char ROWS, char COLS);
void UniqueRand(int arr[ROWS][COLS], const int ROWS,const int COLS);


void Search(int arr[], const int n);
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS);


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
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
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

void FillRand(double arr[ROWS][COLS], double ROWS, double COLS )
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}

void FillRand(char arr[ROWS][COLS], char ROWS, char COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
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
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";		
		}
		cout << endl;
	}
}

void Print(double arr[ROWS][COLS], double ROWS, double COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";	
		}
		cout << endl;
	}
}
void Print(char arr[ROWS][COLS], char ROWS, char COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] <<  "  ";
		}
		cout << endl;
	}
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i];
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

int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

int Sum(double arr[ROWS][COLS], double ROWS, double COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum < arr[i][j];
		}
	}
	return sum;
}

int Sum(char arr[ROWS][COLS], char ROWS, char COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
		return sum;
	}
}
double Sum(double arr[], const int n)
{
	double sum_arr = 0;
	for (int i = 0; i < n; i++)
	{
		sum_arr += arr[i];
	}
	return sum_arr;
}
char Sum(char arr[], const int n)
{
	char sum = 0;
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
int Avg(const int arr[ROWS][COLS], const int ROWS, int const COLS)
{
	return(double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

int Avg(char arr[ROWS][COLS], char ROWS, char COLS)
{
	return(double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
char Avg(char arr[], const int n)
{
	return(double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return(double)Sum(arr, n) / n;
}
int Avg(double arr[ROWS][COLS], double ROWS, double COLS)
{
	return(double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
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
double minValueIn(double arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
double minValueIn(double arr[ROWS][COLS], double ROWS, double COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}
char minValueIn(char arr[ROWS][COLS], char ROWS, char COLS)
{
	char min = arr[0][0];
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (arr[i][j] < min) min = arr[i][j];
			}
		}
	}
	return min;
}
char minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
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
char maxValueIn(char arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[ROWS][COLS], double ROWS, double COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
char maxValueIn(char arr[ROWS][COLS], char ROWS, char COLS)
{
	char max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
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
void shiftLeft(int arr[ROWS][COLS], const int ROWS, int COLS, int number_of_shifts)
{
	shiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
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
		arr[ROWS-1][COLS-1] = buffer;
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
		arr[ROWS-1][COLS-1] = buffer;
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
void shiftRight(double arr[], const int n, int number_of_shifts)
{
	
}
void shiftRight(char arr[], const int n, int number_of_shifts)
{
	
}
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	
}
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	
}
void shiftRight(const int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftRight(arr, ROWS, COLS, ROWS * COLS + number_of_shifts);
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
//void Sort(double arr[ROWS][COLS], double ROWS, double COLS)
//{
//	{
//		double iterations = 0;
//		for (int i = 0; i < ROWS; i++)
//		{
//			for (int j = 0; j < COLS; j++)
//			{
//				for (int k = i; k < ROWS; k++)
//				{
//					for (int l = k == i ? j + 1 : 0; l < COLS; l++)
//					{
//						if (arr[k][l] < arr[i][j])
//						{
//							arr[i][j] ^= arr[k][l];
//							arr[k][l] ^= arr[i][j];
//							arr[i][j] ^= arr[k][l];
//						}
//						iterations++;
//					}
//				}
//			}
//		}
//		cout << "Массив отсортирован за" << iterations << "итерация." << endl;
//	}
//}
void Sort(char arr[ROWS][COLS], char ROWS, char COLS)
{

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

void UniqueRand(char arr[ROWS][COLS], char ROWS, char COLS)
{
	
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
					for (int l = 0; l<(k == i ? j : COLS); l++)
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

}
void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)continue;

		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("Значение %i повторяется %i раз", arr[i], count);
		//if (count) cout << "Значение" << arr[i] << "повторяется" << count << "раз" << endl;
	}
}
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == [k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before)break;
			}
			if (met_before)continue;
			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count)printf("Значение %i повторяется %i раз", arr[i][j], count);
		}
	}
}