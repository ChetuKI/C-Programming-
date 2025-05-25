#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr ;
    ptr = (int *) calloc(500,sizeof(int));
    for(int i=0;i<500;i++){
        ptr[i] = i+1;
    }
    for(int i=0;i<500;i++){
        printf("%d\n",ptr[i]);
    }
    
    free(ptr);
    return 0;
}