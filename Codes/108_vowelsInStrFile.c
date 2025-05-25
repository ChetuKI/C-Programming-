#include<stdio.h>
#include<string.h>
void main(){
    FILE *fptr;
    fptr = fopen("108_test.txt","r");
    if(fptr == NULL){
        printf("File doesn't exist\n");
        fclose(fptr);
    } else {
        char str[100];
        fgets(str,100,fptr);  //Chetan is an engineer.
        fclose(fptr);
        int vowelCount = 0 ;
        int length = strlen(str);
        for(int i = 0 ; i < length ;i++){
            if(str[i]=='a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i]=='A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ){
                vowelCount++;
            }
        }
        fptr = fopen("108_test.txt","w");
        fprintf(fptr,"Vowel Count : %d\n",vowelCount);
        fclose(fptr);
    }
}