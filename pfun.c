#include <stdio.h>

int incream(int a){
	return ++a;
}

int multi(int *a, int *b, int *c){
	return (*c = *a * *b);
}

typedef int(*FUNC1)(int a);

typedef int(*FUNC2)(int*,int*,int*);

void show(FUNC2 fun,int arg,int *arg1){
	FUNC1 p = incream;
	int temp = p(arg);
	fun(&temp,&arg,arg1);

	printf("%d\n", *arg1);
}

int main(int argc, char const *argv[])
{
	int a;
	show(multi,10,&a);
	return 0;
}