// Program to calculate square of a number by inbuilt library function

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    int sq =  pow(n,2);

    printf("Square of %d is : %d",n,sq);
}