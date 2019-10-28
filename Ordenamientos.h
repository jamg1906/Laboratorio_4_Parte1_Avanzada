#pragma once
class Ordenamientos
{
public:
	int* BubbleSort( int Vector_numeros[], int n);
	int* QuickSort(int Vector_numeros[], int low, int high);
	int* StupidSort(int Vector_numeros[], int n);
	void swap(int* a, int* b);
	int partition(int arr[], int low, int high);
};

