/*************************************************************************
	> File Name: size.c
	> Author: 
	> Mail: 
	> Created Time: Wed 21 Jun 2017 12:44:21 AM PDT
 ************************************************************************/

#include<stdio.h>

void size(){

    char* p;
    double* pp;

    int num = sizeof(p);// 4
    int num1 = sizeof(*p);// 1

    int num2 = sizeof(pp);// 4
    int num3 = sizeof(*pp);// 8

    printf("%d %d %d %d",num,num1,num2,num3);

}

void intsize(){
    
    int a = 1;

    printf("%d\n",sizeof a);
}
int main(){
    //size();
    intsize();
    return 0;
}
