// Making my Own Pow Function

#include<stdio.h>
float Pow(int number , int power);
int main(){
    int number,power;
    printf("Enter a number :");
    scanf("%d",&number);
    printf("Enter Power :");
    scanf("%d",&power);
    float value  = Pow(number,power);
    printf("Value : %f",value);
}

float Pow(int number,int power){
    int value = 1 ;
    if(power==1){
        return number ;
    } else if(power==0) {
        return 1 ;
    } else {
       for(int i=1;i<=power;i++){
          value  = value * number ;
       }
       return value ;
    }
}