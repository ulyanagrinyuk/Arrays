#include<iostream>
using namespace std;



void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = { 3,5,8 };
	cout << "������� �������� �������:";
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
	cout << "����� ��������� �������:" << sum << endl;
	cout << "������� �������������� ��������� �������:" << (double)sum / n << endl;
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "����������� �������� � �������:" << min << endl;
	cout << "������������ �������� � �������:" << max << endl;
}