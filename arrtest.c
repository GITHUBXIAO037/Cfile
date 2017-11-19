/*
 *
 * author:vxiao
 *
 * */
#include<stdio.h>

int main(){

	int arr[5] = {1,2,3,4,5};
	int(*p )[5] =(&arr+1);

	printf("%d\n",*(arr+1));
	printf("%d\n",**(p-1));
	printf("All to You\n");

	return 0;

}
