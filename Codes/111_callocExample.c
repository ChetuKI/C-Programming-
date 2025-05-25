#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr ;
    ptr = (float *) calloc(5,sizeof(float));
    ptr[0] = 1.1;
    for(int i=0;i<5;i++){
        printf("%f\n",ptr[i]);
    }
    return 0;
}