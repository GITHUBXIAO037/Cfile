/*
 *
 * author:vxiao
 *
 * */
#include<stdio.h>
#include<string.h>


int main(){

	char c;
	char *str = &c;
	strcpy(str,"Hello");

	printf("%c",c);
	printf("All to You\n");

	return 0;

}
