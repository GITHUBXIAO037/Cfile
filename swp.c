#include <stdio.h>

void swp(int* num1,int* num2 ){

    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}

void swp2(char** pstr1,char** pstr2){

    //printf("pstr1 %p\n",pstr1);
    
    //printf("pstr2 %p\n",pstr2);
    char* tmp = *pstr1;
    *pstr1 = *pstr2;
    *pstr2 = tmp;
    
}

int main()
{
	int a = 10;
	int b = 100;
	printf("a = %d, b = %d\n", a, b);


	swp(&a,&b);	

	printf("a = %d, b = %d\n", a, b);


	char *p = "help";
	char *q = "====";
	
    	//printf("p %p\n",&p);
    	//printf("q %p\n",&q);
	printf("%s %s\n", p, q);

        swp2(&p,&q);

	printf("%s %s\n", p, q);
}
