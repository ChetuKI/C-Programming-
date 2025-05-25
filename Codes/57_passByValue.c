// Program to understand Pointers in Function call --- Pass By Value

#include<stdio.h>
void square(int n){
    n = n * n ;
    printf("Square is %d\n",n);
}

void main(){
    int n=4 ;
    square(n);
    printf("Number is %d\n",n);
}