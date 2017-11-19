/*************************************************************************
	> File Name: circle_area.c
	> Author: 
	> Mail: 
	> Created Time: Tue 13 Jun 2017 06:49:00 PM PDT
 ************************************************************************/
#include<stdio.h>
#define pi 3.1415926
float calculate_area(){

    int r;
    float area;

    printf("input the r:\n");
    scanf("%d",&r);

    if(r<0){
        printf("No such circle\n");
        return;
    }

    area = pi*r*r;

    return area;
}
int main(){

    float area = calculate_area();

    printf("your calculate is:%.03f\n",area);
    return 0;
}
