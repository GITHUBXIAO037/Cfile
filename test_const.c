#include<stdio.h>

void const_test(){

	int const abc = 10;

	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	for(i = 0;i<abc;i++){
		printf("%d ",arr[i]);
	
	}
}

int main(){

	printf("All to You\n");
	const_test();
	return 0;

}
