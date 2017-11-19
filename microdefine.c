/*
 *
 * author:vxiao
 *
 * */
#include<stdio.h>
#define SQARA(x) ((x)*(x))

int main(){
	int a = 5;
	printf("%d",SQARA(a++));
	printf("%d",a);

	printf("%d\n",0x01<<2);
	printf("All to You\n");

	return 0;

}
