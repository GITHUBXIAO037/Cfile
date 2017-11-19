#include<stdio.h>
int a = 1;
char* p = "abc";

void fun(){
	printf("acb");
}

int main(){
	static int sa = 911;
	char* hp = malloc(1);
	char ch;
	
	printf("system %p\n",main);
	printf("fun %p\n",fun);
	printf("global %p , %p\n",&a,p);
	printf("heap %p\n",hp);	
	printf("stack %p\n",&ch);
	printf("static %p\n",&sa);
}
