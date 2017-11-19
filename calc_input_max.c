/*************************************************************************
	> File Name: calc_input_max.c
	> Author:vxiao
	> Mail: 13211661891@163.com
	> Created Time: Fri 16 Jun 2017 05:24:11 AM PDT
 ************************************************************************/
/**
*
*it compare the number you input ,and give the best
*
* */
#include<stdio.h>

void compare_max(){

    float in_number;
    float max_num=0;


    printf("input the number(0 for exit)\n");
    while(1){
        scanf("%f",&in_number);
        if(in_number == 0.0000){
           // goto max_lable;
            break;
        }

        if(in_number>=max_num){
            max_num = in_number;
        }
    }

    max_lable:
        printf("The max number you input is: %.3f\n",max_num);
}

int main(){

    compare_max();
    return 0;
}
