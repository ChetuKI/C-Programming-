// Program to tell whether user eligible for voting or not

#include<stdio.h>
int main()
{
    int age ;
    printf("Enter Age:");
    scanf("%d",&age);
    if(age > 18){
        printf("Eligible for voting");
    }
    else{
        printf("Not Eligible for Voting");
    }
}