// Pointers problem to find output

#include<stdio.h>
void main(){
    int *ptr;  // declaring Pointer variable
    int x;     // declaring a variable
    ptr = &x;  //assigning adress of x toyhe pointer ptr
    *ptr = 0  ;  // x=0 ;

    printf("x = %d\n",x);   // X=0 ;
    printf("*ptr = %d\n",*ptr);  // *ptr = 0 ;

    *ptr += 5 ;     // *ptr = *ptr + 5 ;

    printf("x = %d\n",x);   // X= 5 ;
    printf("*ptr = %d\n",*ptr);  // *ptr = 5; 

    (*ptr)++ ;       //*ptr = *ptr + 1 ;

    printf("x = %d\n",x);   // X= 6 ;
    printf("*ptr = %d\n",*ptr);  // *ptr = 6; 
}