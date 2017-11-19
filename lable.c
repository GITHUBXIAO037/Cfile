#include <stdio.h>

/*
 *lable is automatic execute in function
 *
 */
void f(){


	l:
		printf("%s\n","lable" );
	k:
		printf("%s\n", "key" );
}

void f1(){

	int a = 10;
	l:
		printf("%s\n","lable" );
	k:
		printf("%s\n", "key" );
}

int main(int argc, char const *argv[])
{
	f1();
	return 0;
}