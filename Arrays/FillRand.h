#pragma once
#include"constants.h"
#include"stdafx.h"


void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand);
void FillRand(double arr[ROWS][COLS], double ROWS, double COLS);
void FillRand(char arr[ROWS][COLS], char ROWS, char COLS);
void FillRand(int arr[], const int n);
void FillRand(char arr[], const int n);