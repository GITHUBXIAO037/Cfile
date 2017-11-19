/*************************************************************************
	> File Name: time2412.c
	> Author: 
	> Mail: 
	> Created Time: Thu 15 Jun 2017 09:11:21 PM PDT
 ************************************************************************/

#include<stdio.h>

int timeXY(int x,int y){
    if(x>24||y>60){
        printf("invalid time.\n");

        return -1;
    }

    if(x>12){
        x = x - 12;
    }

    printf("time %d:%d\n",x,y);
    return 0;
}

int main(){

    int t1, t2;
    scanf("%d:%d",&t1,&t2);

    timeXY(t1,t2);
    return 0;
}
