// Program to check given number is prime or not

#include<stdio.h>
#include<math.h>
int main ()
{
    int n ;
    printf("Enter number (except 0 & 1) :");
    scanf("%d",&n);

    for(int i = 2;i<sqrt(n);i++){
        if(n%i == 0){
           printf("not a prime");
           return 0;
        }
    }
    printf("Prime");
    return 0 ;
}