#include<stdio.h>


void f1(){

	int d;
//------------------------------------------
	int i,j;
	//float x;

	//scanf("%d%f%d",&i,&x,&j);

	//printf("i : %d,j %d\n",i,j);

	//printf("x %f\n",x);
//------------------------------------------	
	float x,y;
	
	scanf("%f %d %f",&x,&d,&y);
	printf("x %f  y %f\n",x,y);
	printf("d %d\n",d);

	//scanf(" %d",&d);// note the white space.

	//char c;
	//scanf("%c",&c);
	//printf("d : %d,char %c",d,c);

	//printf("%-12.5e\n",30.253);


}

void f2(){

	int i =2;
	i*=2 + 5;	//14
	printf("i %d\n",i);
}
void f3(){
	int i,j,k;
	i = j = k = 2;
	i+=j+=k;
	printf("f3 i %d\n",i);
}



int main(){
	printf("Hello\n");
	f3();
	return 0;
}
