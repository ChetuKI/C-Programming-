// SALTING

#include<stdio.h>
#include<string.h>
int main(){
    char password[100];
    char salt[] = "123" ;
    printf("Enter your password :");
    gets(password);
    
    char newPassword[200];
    strcpy(newPassword,password);
    strcat(newPassword,salt);
    puts(newPassword);
}