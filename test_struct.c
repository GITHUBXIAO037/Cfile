/*************************************************************************
	> File Name: test_struct.c
	> Author: 
	> Mail: 
	> Created Time: Thu 13 Jul 2017 11:18:48 PM PDT
 ************************************************************************/

#include<stdio.h>

struct a
{

    char c;
    int a;
    struct a *p;
    struct a *q;
    struct a *e;
    struct a *t;
    struct a *r;
    char y;
    

};

int main(){

    struct a pp;
    struct a * p;
    printf("is equal: %d\n",((char *)&pp+16)==&(pp.e));
    //printf("addrres %p\n",&pp);
    printf("struct :%d\n",sizeof(struct a));

    return 0;
}
