/*************************************************************************
	> File Name: test_day2.c
	> Author: 
	> Mail: 
	> Created Time: Tue 13 tun 2017 08:11:49 PM PDT
 ************************************************************************/
//scanf read the content one by one with the format
//scanf("format",&variable);


//compiler with the math need to -lm .such as gcc test_day2.c -lm to compile
#include<stdio.h>
#include<math.h>

void getchar_putchar(){
    char ch =  getchar();
    printf("Your input is:\n");

    putchar(ch);
}

void input_string(){
    char p[124];
    printf("please input a string:\n");
    scanf("%s",p);

    printf("%s",p);
}

void gets_puts(){
    char p[255];
    gets(p);
    puts("your input is:\n");
    puts(p);

}

void test(){
    char c1,c2,c3;
    scanf("%c %c %c",&c1,&c2,&c3);
    printf("%c %c %c",c1,c2,c3);
}

int calculate_root(){
    int a, b, c;

    printf("please input the a, b, c:\n");
    scanf("%d %d %d",&a,&b,&c);

    double delta = b*b-4*a*c;

    if(delta<0){
        printf("No root\n");
        return;
    }

    if(delta>0){
        float root1 = (-b + sqrt(delta))/(2*a);
        float root2 = (-b - sqrt(delta))/(2*a);

        printf("root1 is: %f.\nroot2 is: %f.\n",root1,root2);

    }
    else{
        printf("one root\n");
        float root = (-(b)/(2*a));
        printf("root is:%f",root);
    }

    return 0;
} 
int main(){


    //getchar_putchar();

    //input_string();

    //gets_puts();
    //
    // test();
    calculate_root();
    return 0;
}
