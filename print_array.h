#include<stdio.h>

extern void printArr(int arr[], int arrLen){
   printf("[");
   for(int i = 0; i < arrLen; i++){
      if(i == arrLen - 1){
         printf("%d]\n", arr[i]);
      }
      else{
         printf("%d, ", arr[i]);
      }
   }
}
