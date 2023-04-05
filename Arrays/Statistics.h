#pragma once

#include"constants.h"


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

