// Program to find sqrt of number 

#include<stdio.h>
#include<math.h>
int squareRoot(int n);
int main()
{
    int n ;
    printf("Enter a number :");
    scanf("%d",&n);
    float sqroot  = squareRoot(n);
    printf("Squaroot of %d is : %f",n,sqroot);
}

int squareRoot(int n){
   // return sqrt(n);              // Method--1
   return pow(n,(0.5));            // Method--2
}