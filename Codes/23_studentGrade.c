// Progrsm to Give grades to a student

#include<stdio.h>
int main(){
    int m ;   // m--marks
    printf("Enter Your Marks(0-100):");
    scanf("%d",&m);

    if(m<30){
        printf("Grade : C \n");
    } else if (m>=30 && m < 70) {
        printf("Grade : B \n");
    } else if (m>=70 && m <90){
        printf("Grade : A \n");
    } else if (m>=90 && m<=100){
        printf("Grade : A+ \n");
    }
}