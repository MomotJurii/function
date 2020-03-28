#pragma once
#include<iostream>
using namespace std;
const int ROWS = 10;
const int COLS = 10;

void FillRand(int arr[], const int SIZE);
void FillRand(double arr[], const int SIZE);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int SIZE);
void Print(double arr[], const int SIZE);
void  Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int SIZE);
void Sort(double arr[], const int SIZE);
void  Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int SIZE);
double Sum(double arr[], const int SIZE);
double Avg(int arr[], const double SIZE);
long MinValueIn(int arr[], const int SIZE);
int MaxValueIn(int arr[], const int SIZE);
void Shiftl(int arr[], const int SIZE, int shift);
void ShiftR(int arr[], const int SIZE, int shift);
