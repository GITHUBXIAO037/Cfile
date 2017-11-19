#include<stdio.h>

int gcd(int numa,int numb){
	if(numb == 0){
		printf("gcd is:%d\n",numa);
		return numa;
	}
	gcd(numb,numa / numb);
}
int main(){

	int numa = 8,numb = 4;
	gcd(numa,numb);

    return 0;
}
