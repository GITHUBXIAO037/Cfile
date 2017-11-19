/*************************************************************************
	> File Name: doublepoint.c
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Jun 2017 01:34:59 AM PDT
 ************************************************************************/

#include<stdio.h>


int main(){
    
    int num = 119;
    int* pint = &num;
    int** ppint = &pint;

    printf("*pint %d,,,**ppint %d",*pint,**ppint);

    return 0;

}
