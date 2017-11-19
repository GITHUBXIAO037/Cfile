/*************************************************************************
	> File Name: union.c
	> Author: 
	> Mail: 
	> Created Time: Wed 21 Jun 2017 07:37:36 PM PDT
 ************************************************************************/

#include<stdio.h>

union {
    int i;
    char c;

}uu;

int main(){


    uu.i = 10;
    	
    printf("%d\n",uu.c);

    uu.c = 11;

    printf("%d\n",uu.i);
   
    return 0;
}
