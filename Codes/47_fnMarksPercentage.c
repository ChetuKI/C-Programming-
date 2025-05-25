// Write function to calculate Percentage of a student

#include<stdio.h>
int percentage(int math ,int science ,int kannada);
int main()
{
    int math,science,kannada;
    printf("Enter math ,science & Kannada marks :");
    scanf("%d%d%d",&math,&science,&kannada);
    printf("Percentage of 3 language : %d",percentage(math,science,kannada));
}

int percentage(int math ,int science ,int kannada){
    int avg = (math+science+kannada) / 3 ;
    return avg;
}