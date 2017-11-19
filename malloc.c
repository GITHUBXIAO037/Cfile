#include <stdio.h>
#include <stdlib.h>
void f1(){

	char * p = NULL;

	p = (char*)malloc(0);

	printf("%p\n", p);
}

int main(int argc, char const *argv[])
{
	f1();
	return 0;
}