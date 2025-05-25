// Program to find maximum number in an array 

#include<stdio.h>
int max(int arr[],int n);
int main(){
    int arr[11] = {12,90,88,65,18,19,78,67,9,10,22};
    int maxx = max(arr,11);
    printf("%d is maximum number in an array",maxx);
}

int max(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if( max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
