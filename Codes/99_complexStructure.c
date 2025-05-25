#include<stdio.h>
typedef struct complex {
    int real ;
    int img;
} c ;
void main(){
    c c1 = {5,8};
    c *p = &c1;
    printf("realPart : %d\n",p->real);
    printf("imgPart : %d\n",p->img);
}