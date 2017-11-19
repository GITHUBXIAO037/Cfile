/*************************************************************************
	> File Name: def.c
	> Author: 
	> Mail: 
	> Created Time: Tue 20 Jun 2017 11:14:52 PM PDT
 ************************************************************************/

#include<stdio.h>
#if 0
#error Noo error message
#endif

#define XX(x,y) ((x*y<100)?1:0)

#line 1

int main(){

    printf("XX\n");
    printf("XX,%d\n",XX(12,10));
    return 0;
}



