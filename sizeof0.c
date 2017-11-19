#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/*
char *pc = (char*)malloc(10);

const int a = 91;

const char arr[10];
*/
struct AAA
{
	int b0:5;
	int b1:2;
	
};
/*
	char pp[10] = "0123456";
	struct AAA a0;
	memcpy(&a0,pp,sizeof(struct AAA));

	printf("strlen arr: %d\n", a0.b0);
	printf("strlen arr: %d\n", '0');
	
*/

struct bit
{
	int a:3;
	int b:2;
	int c:3;
};
/*
	struct bit s;
	char* c = (char*)&s;
 	0x99 在内存中表示为 100 11 001 , a = 001, b = 11, c = 100
	*c = 0x99;
	printf("a %d\n",s.a);
	printf("b %d\n",s.b);
	printf("c %d\n",s.c);

*/
int main(int argc, char const *argv[])
{

	return 0;
}