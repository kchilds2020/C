#include<stdio.h>

int main(){
  int array[10] = {9,8,7,6,5,4,3,2,1,0};
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 9; j++){
        if(array[j] > array[j+1]){
            int temp = array[j];
	    array[j] = array[j+1];
	    array[j+1] = temp;
	}
    }
  }

  for(int x = 0; x < 10; x++){
    printf("%d\n",array[x]);
  }

  return 0;
}
