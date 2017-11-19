/*************************************************************************
	> File Name: 1.c
	> Author: 
	> Mail: 
	> Created Time: Fri 30 Jun 2017 01:09:55 AM PDT
 ************************************************************************/

#include<stdio.h>
int main(){

    const int *pint;
    int a =100;
    pint=&a;

    int b = 99;
    printf("%d\n",*pint);

    pint=&b;

    printf("%d\n",*pint);
    return 0;
}
