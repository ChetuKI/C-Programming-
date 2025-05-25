//Write a function to sum of two Numbers

#include<stdio.h>
int sum(int a, int b);
int main()
{
   int a,b;
   printf("Enter a and b :");
   scanf("%d%d",&a,&b);

    int s = sum(a,b);

   printf("Sum : %d",s);
}


int sum(int a, int b){
  int sum = a+b;
  return sum ;
}