/*************************************************************************
	> File Name: swap_number.c
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Jun 2017 12:46:00 AM PDT
 ************************************************************************/

#include<stdio.h>

void swap(){


    int a = 3, b = 4;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a = %d, b = %d\n",a,b);

}

int main(){
    swap();
    return 0;
}
