#include<stdio.h>

int minus(int,int);
  /*typedef int (*pFunc)(int,int);函数指针类型
    pFunc like;//函数指针变量
    like = minus;
    int result = like(15,12);

    printf(" the result is: %d\n",result);

*/

typedef int pFunc(int,int);//函数类型
int minus(int num1,int num2){

	return (num1-num2);

}

int main(){

    	pFunc *like;//函数指针变量.
	like = minus;
	int result = like(15,12);

        printf(" the result is: %d\n",result);
	printf("All to You\n");

	return 0;

}
