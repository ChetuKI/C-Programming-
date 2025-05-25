#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr ;
    int n ;
    printf("Enter n :");
    scanf("%d",&n);
    ptr = (float *) calloc(n,sizeof(float));
    ptr[0] = 1.1; //storing value
    for(int i=0;i<n;i++){
        printf("%f\n",ptr[i]);
    }
    free(ptr);
    printf("\n");
    ptr = (float *) calloc(2,sizeof(float));
    for(int i=0;i<2;i++){
        printf("%f\n",ptr[i]);
    }
    return 0;
}