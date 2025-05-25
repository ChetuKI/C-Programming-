// Program to find max of two numbers using a pointer
#include<stdio.h>
void max_of_two(int a,int b ,int *max);

void main ()
{
    int a = 10 , b = 400  ;
    int max ; 
    max_of_two(a,b,&max);
    printf("Max : %d ",max);
}

void max_of_two(int a ,int b ,int *max){
    if (a>b){
        *max = a ;
    } else {
        *max = b ;
    }
}
