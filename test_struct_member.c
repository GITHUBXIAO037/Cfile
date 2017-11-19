/*************************************************************************
	> File Name: test_struct_member.c
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Jul 2017 05:37:48 AM PDT
 ************************************************************************/

#include<stdio.h>


struct my{
    int* i;
};

int main(){

    struct my me;
    struct my *you;
    
    
    printf("&me.i %p\n",&me.i);

    printf("&you->i %p\n",&you->i);
    printf("me.i %p\n",me.i);

    printf("you->i %p\n",you->i);
    printf("&me %p\n",&me);

    printf("&you %p\n",&you);
}
