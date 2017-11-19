/*
 *
 * author:vxiao
 *
 * */
#include<stdio.h>
int test(char *pStr){

	for(;*pStr!='\0';pStr++){
		printf("%c\n",*pStr);
	}
	return 0;
}
int strcmp0(char *source,char* dest){

	while(*(source++)==*(dest++)){
		if(*source=='\0')
			return 0;
	}
	return -1;
}

int main(){
	char *p1 = "Hello";
	char *p2 = "Hllo";
	int re = strcmp0(p1,p2);
	printf("%d",re);

	printf("All to You\n");

	return 0;
}
