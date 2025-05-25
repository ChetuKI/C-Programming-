//  Recursion Function to calculate sum of first n natural numbers

#include<stdio.h>
int calcSum(int n);
void main(){
    int n ;
    printf("Enter N:");
    scanf("%d",&n);

   int sum = calcSum(n);
   printf("Sum is : %d",sum);

}

int calcSum(int n){
    if(n==1){
        return 1 ;
    }
   int sumN = calcSum(n-1) + n ;
    return sumN;
}