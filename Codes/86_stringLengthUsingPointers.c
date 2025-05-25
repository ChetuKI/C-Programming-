#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[100];
    char *p = str ;
    printf("Enter a string :");
    fgets(str,100,stdin); //  \n added to string so length - 1 at last
    int length = 0 ;
    for(int i=0; (*p) !='\0';i++){
        length++;
        p++;
    }
    printf("%d",length-1);
}