#include<stdio.h>

//performance O(n^2)
int main(){

  int count = 0;
  int array[10] = {9,8,7,6,5,4,3,2,1,0};
  int arrayCount = 10;

  for(int i = 0; i < arrayCount - 1; i++){
    for(int j = 0; j < arrayCount - i - 1; j++){
        if(array[j] > array[j+1]){
            int temp = array[j];

	    //swap array[j] and array[j+1]
	    array[j] = array[j+1];
	    array[j+1] = temp;
	    count++;

	    //display swap to console
            for(int x = 0; x < 10; x++){
               printf("%d, ",array[x]);
            }
	    printf("\n");
	}
	
    }
  }

  printf("Performance: O(n^2)\nTotal Swaps: %d\n",count);


  return 0;
}
