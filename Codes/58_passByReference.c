//// Program to understand Pointers in Function call --- Pass By Referance

#include<stdio.h>
void square(int *n){
    *n = (*n) * (*n) ;
    printf("Square : %d\n",*n);
}

void main(){
    int n = 4;
    square(&n);
    printf("Number : %d\n",n);    
}