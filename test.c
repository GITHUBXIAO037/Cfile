/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: Tue 13 Jun 2017 06:25:15 PM PDT
 ************************************************************************/
#include<stdio.h>

typedef void (pfun)(int);

void f1(int a){
    printf("abc f1: %d\n",a);
}
void f2(int a){
    printf("abc f2: %d\n",a);
}

int main(){

    pfun* a = f1;

    a(15);

    a = f2;

    a(16);

    printf("Foo\n");

    return 0;
}
