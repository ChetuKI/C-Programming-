// Program to understand Traverse an array

#include<stdio.h>
int main(){
    int arr[5];
    int *ptr = arr;

    for(int i =0 ;i<5;i++){
        printf("%d index :",i);
        scanf("%d",(ptr+i));                  // &arr[i] ;
    }
    for(int i = 0;i<5;i++){
        printf("%d index = %d \n",i,*(ptr+i));   //arr[i];
    }

}