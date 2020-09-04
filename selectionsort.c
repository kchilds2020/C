#include<stdio.h>
#include "utilities.h"
#include "print_array.h"

void selectionSort(int arr[], int n){
   int i, j, min_idx,totalIterations = 0;

   for(i = 0; i < n - 1; i++){
      min_idx = i;
      for(j = i + 1; j < n; j++){
        //find minimum value based on current index onward
         if(arr[j] < arr[min_idx]){
            min_idx = j;
         }
         totalIterations++;
      }
      //print each swap
      printArr(arr,n);

      swap(&arr[min_idx], &arr[i]);
   }

   printf("\nPerformance: O(n^2)\nTotal Iterations: %d\n",totalIterations);
}

int main() {
   int arr[10] = {9,8,7,6,5,4,3,2,1,0};
   selectionSort(arr,10);
   return 0;
}
