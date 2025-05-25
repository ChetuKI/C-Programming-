// Program to understand pointers

#include<stdio.h>
void main()
{
    int age = 20 ;
    int *ptr = &age ;
    // Printing Addresses
    printf("%u\n",&ptr);
    printf("%u\n",ptr);   //  BCOZ   *ptr = &age ;
    printf("%u\n",&age);
    
    // Printing Values
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
} 