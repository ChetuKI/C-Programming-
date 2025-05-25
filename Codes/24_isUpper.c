// Program to check whether char is upper case or not

#include<stdio.h>
int main()
{
    char ch ;
    printf("Enter charcter :");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Entered Charcter is Uppercase");
    } else {
        printf("Entered charcter is not an uppercase");
    }
}