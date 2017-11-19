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
	printf(" %d\n", *p);
	*p++ += 123;
	// 前 ++ 和后 ++的区别
	// printf("size %d\n", sizeof(buff));
	printf("%d,%d\n", *p, *++p);
	printf("%d\n", *p);
	printf("buff %d\n", buff[0]);

	return 0;

}
