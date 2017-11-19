#include<stdio.h>
int add(int,int);

int minus(int,int);
int (*pFunc)(int,int);

int add(int num1,int num2){

	return (num1+num2);

}

int minus(int num1,int num2){

	return (num1-num2);

}

int main(){
	pFunc = add;

	printf("%d.",(*pFunc)(10,3));
	
	pFunc = minus;

	printf("%d.",(*pFunc)(29,27));

	printf("All to You\n");

	return 0;

}
