// Program -- Function to find sum of digits of a number

#include<stdio.h>
int Dsum(int n);
void main(){
    int n ;
    printf("Enter a number :");
    scanf("%d",&n);
    int sum = Dsum(n);
    printf("Sum of digits of a number :%d",sum);
}

int Dsum(int n){
    int sum = 0 ;
    while(n !=0 ){
        sum  = sum + (n%10);
        n = n/10;
    }
    return sum ;
}
