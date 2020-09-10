#include<stdio.h>
#include<stdlib.h>
#include"print_array.h"
#include"utilities.h"


int partition (int array[], int low, int high){
	int pivot = array[high];
	int i = low - 1, j = low;

	for(j; j <= high -1; j++){
		if(array[j] < pivot){
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i+1], &array[high]);
	return(i + 1);
}

void quickSort(int array[], int low, int high){
	if(low < high){
		int pi = partition(array, low, high);
		quickSort(array, low, pi - 1);
		quickSort(array, pi+1, high);
	}
}

int main(){
	int array[10] = {6,3,7,4,7,3,2,89,5,3};
	int arrayLen = 10;

	quickSort(array,0,arrayLen-1);
	printArr(array, arrayLen);
	return 0;
}
