// Program to understand Pointer Arithmatic -- Increment and Decrement Operator

#include<stdio.h>
void main(){
    int age = 20 ;
    int *ptr = &age ; 

    printf("%u\n",ptr);

    ptr++ ;

    printf("%u\n",ptr);

    ptr--;

    printf("%u\n",ptr);

}

