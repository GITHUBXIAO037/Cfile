/*************************************************************************
	> File Name: 5.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 Oct 2017 02:02:10 AM PDT
 ************************************************************************/

#include<stdio.h>

void get_odd(){
    int a = 3;
    a ^= 1;
   // a ^= 3;
    printf("%d",a);
}

int main(int argc, char *argv[])
{
        int buff[] = {1, 2, 3};
        int *p = buff;

//        printf("%p\n",p);
  //      printf("%d\n",(int)p);
    //    printf("%x\n", *(int *)((int)p + 1));
//
        get_odd();
        return 0;
}
