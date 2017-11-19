/*************************************************************************
	> File Name: pointer.c
	> Author: 
	> Mail: 
	> Created Time: Thu 29 Jun 2017 04:55:28 AM PDT
 ************************************************************************/

#include<stdio.h>
int main(){

    int (*p)[4];
    int a[5][5];
    p = a;

    int len = &a[4][2] - &p[4][2];

    printf("%d\n",len);

    return 0;
}
