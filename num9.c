/*************************************************************************
	> File Name: num9.c
	> Author: 
	> Mail: 
	> Created Time: Thu 13 Jul 2017 05:42:44 AM PDT
 ************************************************************************/

#include<stdio.h>

int main(){


    for(int i = 1;i<=9;i++){
        for(int j = 1;j<=9;j++){
            printf("%d * %d = %d",i,j,i*j);
            printf("\n");
        }
    }
    return 0;
}
