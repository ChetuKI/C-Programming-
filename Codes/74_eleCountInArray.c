// Program to find how many times does a number x occurs in an array ?

#include<stdio.h>
int occurance(int arr[],int n ,int x);
int main(){
    int arr[16] = {1,1,1,1,2,2,2,3,4,4,5,5,5,5,5,5};
    int x = 1 ;           //he x is declared directly You can take x value from user also
    int count = occurance(arr,16,x);
    printf("%d occurs %d times in an array",x,count);
}

int occurance(int arr[],int n , int x){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            count++;
        }
    }
    return count;
}