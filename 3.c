/*************************************************************************
	> File Name: 3.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 Oct 2017 02:23:22 AM PDT
 ************************************************************************/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int buff[] =  {1, 2, 3};
	int *p = buff;
	*p++ += 123;

	printf("%d,%d\n", *p, *++p);

	return 0;

}
