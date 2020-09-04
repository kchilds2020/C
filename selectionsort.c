#include<stdio.h>

void swap(int *xp, int *yp){
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}


void selectionSort(int arr[], int n){
   int i, j, min_idx;

   for(i = 0; i < n - 1; i++){
      min_idx = i;
      for(j = i + 1; j < n; j++){
        //find minimum value based on current index onward
         if(arr[j] < arr[min_idx]){
            min_idx = j;
         }
      }
      //print each swap
      for(int x = 0; x < n; x++){
         printf("%d, ", arr[x]);
      }
      printf("\n");
      swap(&arr[min_idx], &arr[i]);
   }
}

int main() {
   int arr[10] = {9,8,7,6,5,4,3,2,1,0};
   selectionSort(arr,10);
   return 0;
}
