#include <stdio.h>
#include <stdlib.h>
struct BB
{
	long num;// 4
	char* name;
	short data;
	char ha;
	short ba[5];
	
};

typedef struct
{
	int a:2;
	int b:1;
	int c:1;
}test;

int main(int argc, char const *argv[])
{
	printf("BB %d\n", sizeof(struct BB));
	test t;
	t.a = 1;
	t.b = 1;
	t.c = 1;
	printf("%d\n",t.a);
	printf("%d\n",t.b);
	printf("%d\n",t.c);

	char a = 1;
	printf("%x\n", a);

	void* pb = malloc(100);

	printf("malloc: %d\n", sizeof(pb));
	printf("malloc size : %d\n", sizeof(*pb));
	printf("malloc size : %d\n", sizeof(&pb));

	return 0;
}