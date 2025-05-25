// Program to Understand Operator Precedence

#include<stdio.h>
int main()
{
    float x = 10 + 8 * 5 ;
    printf("%.2f\n",x);
    printf("%d\n",5*2-2*3);
    printf("%d\n",5*2/2*3);
    printf("%d\n",5*(2/2)*3);
    printf("%d",5+2/2*3);
}