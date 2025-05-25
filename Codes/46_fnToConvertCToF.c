// Program to convert degree celcius to fahrenheit

#include<stdio.h>
void convert_C_to_F(int celcius);
void main(){
    int celcius ;
    printf("Enter temp in Celcius :");
    scanf("%d",&celcius);
    convert_C_to_F(celcius);
}

void convert_C_to_F(int celcius){
    float f = (celcius * (1.8)) + 32 ;    // 1.8 == (9/5)  ;
    printf("temp in Fahrenheit : %f",f);
}