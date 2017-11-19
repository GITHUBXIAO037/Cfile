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
   
    int inputNumber;
    scanf("%d",&inputNumber);

    while(inputNumber != num){
	scanf("%d",&inputNumber);
        if(inputNumber>num){
            printf("your input is greater\n");		
        }else{
            printf("your input is littler\n");	
        }
        
    }
    printf("bingo the number is: %d",num);

}

int main(){

    guess_number();

    return 0;
}
