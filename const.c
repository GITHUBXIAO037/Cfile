#include <stdio.h>
int a = 10;
int b = 90;

const int *pa = &a;
int *const pb = &b;


int main(int argc, char const *argv[])
{
	a = 98;
	b = 99;
	//*pa = 101; 禁止常指针修改变量数据,可以指向其他常量空间
	//pb = &a; 指针的值是一个定值,可以通过这个值去修改变量
	pa = &b;
	*pb = 100;
	printf("a: %d\n", *pa);	
	printf("b: %d\n", *pb);	

	return 0;
}