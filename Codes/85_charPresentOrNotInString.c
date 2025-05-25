// Check if a given charcter is present in a string or not

#include<stdio.h>
int main(){
    char ch ;
    char str[100];
    printf("Enter a charcter to search :");
    scanf("%c",&ch);
    printf("Enter a string :");
    scanf("%s",str);

    for(int i=0 ; str[i]!='\0';i++){
        if(str[i]==ch){
            printf("Found");
            return 0;
        }
    }
     printf("Not Found");
    
}