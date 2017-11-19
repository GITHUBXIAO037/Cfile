/*************************************************************************
	> File Name: testRecurse.c
	> Author: 
	> Mail: 
	> Created Time: Thu 10 Aug 2017 04:50:43 AM PDT
 ************************************************************************/

#include<stdio.h>

void fun(int n){

    printf("%d\n",n);
    if(n>0){
        return fun(n-1);
    }
}

int main(){
    
    fun(15000000);
    return 0;
}
