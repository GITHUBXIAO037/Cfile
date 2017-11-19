/*
 *
 * author:vxiao
 *
 * */
#include<stdio.h>


void del_char_string(char* p,char ch){

	char* p1 = p;
	char* p2 = p;
	while(*p1!='\0'){
		if(*p1!=ch){
			*p2 = *p1;
			p2++;
		}
		p1++;
	}
	*p2 = '\0';
}



int main(){
	char ch[] = "ASSDDBBAA";
	puts(ch);
	del_char_string(ch,'A');
	
	puts(ch);

	printf("All to You\n");

	return 0;

}
