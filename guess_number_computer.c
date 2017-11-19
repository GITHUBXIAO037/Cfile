/*************************************************************************
	> File Name: guess_number.c
	> Author: 
	> Mail: 
	> Created Time: Sun 18 Jun 2017 11:28:44 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void guess_number(){

    srand(time(NULL));
    int num = rand()%100;
   
    int inputNumber = rand()%100;
    int low = 0, high = 100, middle = 0;
    while(middle != num){
	middle = (low + high)/2;
        if(middle>num){
	    high = middle;
            printf("your input is greater (low%d - high%d)\n",low,high);	
	
        }else{
	    low = middle;
            printf("your input is littler(low%d - high%d)\n",low,high);	

        }
        
    }
    printf("bingo the number is: %d\n",num);

}

int main(){

    guess_number();

    return 0;
}
