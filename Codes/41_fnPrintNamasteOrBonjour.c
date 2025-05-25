// Write a function to print Namaste if user is indian and bonjour if user is french

#include<stdio.h>
void printNamaste();
void printBonjour();
int main()
{
    char ch ;
    printf("Enter charcter(i-indian or f-french) :");
    scanf("%c",&ch);
     
    if(ch == 'i'){
        printNamaste();
    }
    else if(ch=='f'){
        printBonjour();
    }

}

void printNamaste(){
    printf("Namaste!");
}

void printBonjour(){
    printf("Bonjour!");
}