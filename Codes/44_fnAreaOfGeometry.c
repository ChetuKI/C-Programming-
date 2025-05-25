// Write Functons to calculate area of a square , a circle & a rectangle

#include<stdio.h>
void areaS();
void areaC();
void areaR();

void main()
{
    int choice ; 
    printf("Choices are : \n1.Calculate area of square \n2.Calculate area of circle \n3.Calculate area of a rectangle \n");
    printf("Please Enter choice:");
    scanf("%d",&choice);

    if(choice == 1){
        areaS();
    } else if(choice == 2) {
        areaC();
    } else {
        areaR();
    }
}

void areaS() {
    int a;
    printf("Enter a :");
    scanf("%d",&a);
    int area = a * a ;
    printf("Area of a square:%d",area);
}

void areaC() {
    int r;
    printf("Enter radius :");
    scanf("%d",&r);
    float area = 3.14 * r* r ;
    printf("Area of a square:%f",area);
}

void areaR() {
    int a,b;
    printf("Enter a and b :");
    scanf("%d%d",&a,&b);
    int area = a * b ;
    printf("Area of a square:%d",area);
}
