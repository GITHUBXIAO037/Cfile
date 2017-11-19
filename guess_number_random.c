/*************************************************************************
	> File Name: guess_number.c
	> Author: 
	> Mail: 
	> Created Time: Sun 18 Jun 2017 11:28:44 PM PDT
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
	RANDOM MATCHED

*/

void guess_number(){

    srand(time(NULL));
    int num = rand()%100;
   
    int inputNumber = rand()%100;
    
    while(inputNumber != num){
	inputNumber = rand()%100;
        if(inputNumber>num){
	   
            printf("your input is greater\n");	
	
        }else{
	    
            printf("your input is littler\n");	

        }
        
    }
    printf("bingo the number is: %d\n",num);

}

int main(){

    guess_number();

    return 0;
}
