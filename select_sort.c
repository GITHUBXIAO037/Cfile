#include<stdio.h>

void find_max(int* arr,int n){

    if(n>0){
         int i = 0;
  	 int max, maxIndex = 0;
   	 for(i = 0;i < n;i++){
  //    printf("%d\n",arr[i]);

      	 if(max < arr[i]){
            max = arr[i];
            maxIndex = i;
        }
    }
  
   	 arr[maxIndex] = arr[n-1];

   	 arr[n-1] = max;

  	 find_max(arr,n-1);

    //printf("the max num is: %d\n",max);
    }



    

}

int main(){

    int arr[5] = {1,2,7,4,5};
    find_max(arr,5);

    int i = 0;
    for(i = 0;i < 5; i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}
