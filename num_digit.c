#include<stdio.h>
void num_digit(int number){
	printf("the number %d ",number);
	int len = 0;
	while(number != 0){
		number/=10;
		len++;
	}
	printf("your input has %d digit.\n",len);
}
int main(){

	long int numa = 1213213;
	num_digit(numa);

    return 0;
}
