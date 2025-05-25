#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void removeBlank(char str[]){
    char newStr[30];
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i] != ' '){
            newStr[j++] = str[i];
        }
    }
    newStr[j] = '\0';
    puts(newStr);
}
int main()
{
    char str[30] ;
    printf("Enter a string : ");
    gets(str);
    removeBlank(str);
    return 0;
}