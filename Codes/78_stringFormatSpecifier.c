// Program to ask the userto enter their firstName & print it back to them
// Try this with fullName

#include<stdio.h>
int main(){
    char firstname[40];
    printf("Enter name:");
    scanf("%s",firstname);
    printf("Your Entered Name is : %s\n",firstname);

    char fullName[100];
    printf("Enter fullname:");
    scanf("%s",fullName);
    printf("Your Entered Name is : %s",fullName);
}