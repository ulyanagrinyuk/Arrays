#pragma once
#include"constants.h"

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftLeft(char arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, int COLS, int number_of_shifts);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, int COLS, int number_of_shifts);
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);