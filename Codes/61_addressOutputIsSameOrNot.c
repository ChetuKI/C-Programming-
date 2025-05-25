// Will the address output be same ?

#include<stdio.h>
void printAddress(int n){
    printf("Address in sub Function : %u\n",&n);
}
void main(){
    int n = 4;
    printAddress(n);
    printf("Adress in Main Function : %u\n",&n);
}