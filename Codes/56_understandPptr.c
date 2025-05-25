// Program to understand pointer to  pointer 

#include<stdio.h>
void main(){
    float price = 100.00 ;
    
    float *ptr = &price;

    float **pptr = &ptr ;
 
    printf("%d\n",*pptr);
    printf("%d\n",&price);


   int i = 5 ;
   int *ptrr = &i ;
   int **pptrr = &ptrr ; 

   printf("%d\n",*(*pptrr));
}