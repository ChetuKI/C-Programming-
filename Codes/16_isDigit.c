// Program to check if the given Charcter is digit or not

// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter a charcter:");
//     scanf("%c",&ch);
//     if(ch>='0' && ch<='9'){
//         printf("Charcter is Digit");
//     }
//     else{
//         printf("Charcter is not Digit");
//     }
// }


#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch ;
    printf("Enter charcter : ");
    scanf("%c",&ch);
    if(isdigit(ch)){
        printf("Digit"); 
    } else {
        printf("not a Digit");
    }
    return 0;
}