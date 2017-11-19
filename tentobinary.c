/*************************************************************************
	> File Name: tentobinary.c
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Jun 2017 01:35:29 AM PDT
 ************************************************************************/

#include<stdio.h>

void tentobin(){

    int a = 12;
    char b = 1;
    char c = 1;

    while(b<=a ){
  
        if( (a & b )!=0 ){
            printf("1");
        }
        else{
            printf("0");
        }

       // printf("%d",c);
        b = b << 1;
     //printf("%d",b);
    }

    int cs = ~2;
    printf("%d",cs);
    printf("\n");
}
int main(){


    tentobin();
    return 0;
}
