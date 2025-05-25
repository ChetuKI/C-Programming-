// program to find occurance of vowels in a string 
#include<stdio.h>
int occurance(char str[]);
void main(){
    char str[] = "elephant";
    int count  = occurance(str);
    printf("Occurance of Vowels : %d",count);
}

int occurance(char str[]){
    int count = 0 ;
    for(int i=0;str[i] !='\0';i++){
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    return count;
}