#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void conversion(char str[]){
    for(int i=0 ; str[i] != '\0' ;i++){
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            str[i] = str[i]  - 32 ;   //a-97  A-65   97-65=32
        }
    }
    puts(str);
}
int main()
{
    char str[30] ;
    printf("Enter a string : ");
    scanf("%s",&str);
    conversion(str);
    return 0;
}