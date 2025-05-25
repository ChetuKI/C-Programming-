#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void highFreqChar(char str[]){
    int freq[256] = {0};  // For all ASCII characters

    // Count frequency of each character
    for(int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find character with highest frequency
    int max = 0;
    char ch;
    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            ch = str[i];
        }
    }

    printf("Highest frequency character: %c\n", ch);
}

int main()
{
    char str[30] ;
    printf("Enter a string : ");
    scanf("%s",&str);
    highFreqChar(str);
    return 0;
}