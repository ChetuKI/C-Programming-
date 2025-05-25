// Write a function to count the number of odd numbers in an array

#include<stdio.h>
int countOdd(int arr[],int n);
int main(){
    int arr[5] = {11,13,15,17,19};
    int count = countOdd(arr,5);
    printf("%d Odd Numbers are there in an array ",count);
}

int countOdd(int arr[],int n){
    int count =0 ;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    return count ;
}