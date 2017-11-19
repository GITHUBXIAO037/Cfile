F#include<stdio.h>

#define X 3
#define Y 3*X
#undef X
#define X 2

int z = Y;
void f0(){

	char ch[] = "123abc1a";
	int num = 0, chnum = 0,i=0;

	while(ch[i]){
	if(isdigit(ch[i]))
            num++;
        if(isalpha(ch[i]))
            chnum++;

        i++;
	}

    printf(" num %d char %d\n",num,chnum);

}


void f2(){
    int a[3][4] = {12,23,45,56,67,78,89,11,22,7,2};
    int** pint = a;
    int i=0;
    int len = sizeof(a)/sizeof(int);
    int max = 0;
    for(i=0;i<len-1;i++){
        //printf("%d ",*(pint+i));
	if(max<*(pint+i)){
	    max = *(pint+i);
	}
        
    }
    printf("%d ",max);
}

void f3(int n){
    int sum = 0;
    int i = 0;
    int j = 1;
    for(i = 1; i<= n; i++){
        j = j*i;
        sum+=j;
    }

    printf("sum %d\n",sum);
}

char arrch[32];
void f4(char ch,int n){
    
    while(n--){
        printf("%c",ch);

    }
    printf("\n");
}

void ff4(){
    char* arrch = "a4b4c5";
    char des[32]="";
    int j = 0;
    while(*arrch){
	char ch = *arrch;
        //printf("c %c ",*arrch);
	arrch++;
	int i = *arrch-'0';
	//printf("d %d ",i);
	if(i>0&&i<9){
		
		while(i--){
			des[j++]=ch;
		}
	}
	//arrch++;
    }
    puts(des);
}

/*
int main(){

	printf("All to You\n");
	printf("z %d\n",z);
	
	return 0;

}*/
int main(void)
{
	
	
	ff4();
	

}
