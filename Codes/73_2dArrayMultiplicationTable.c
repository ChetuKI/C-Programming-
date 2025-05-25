// Program to create 2-D array to a store tables of 2 & 3 

#include<stdio.h>
int main(){
    int table[2][10];
    for(int i=0;i<2;i++){
        printf("Enter table of %d :\n",i+2);
        for(int j=0;j<10;j++){
            printf("%d element :",j+1);
            scanf("%d",&table[i][j]);
        }
    }
    
    for(int i=0;i<2;i++){
        printf("Table of %d : ",i+2);
        for(int j=0;j<10;j++){
            printf("%d\t",table[i][j]);
        }
        printf("\n");
    }
}