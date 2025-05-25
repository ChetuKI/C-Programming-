#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter no : ");
    int n ;
    scanf("%d",&n);
    int temp = n ;
    int sum = 0 ;
    while(temp>0){
        int rem = temp % 10 ;
        sum += rem*rem*rem ;
        temp = temp / 10 ;
    }
    if(n == sum){
        printf("Armstrong");
    } else {
        printf("not a armstrong");
    }
    return 0;
}