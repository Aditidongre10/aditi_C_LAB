//WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.

#include<stdio.h>

int main(){

    int a,b,area,perimeter;

    printf("enter length of rectangle :");
    scanf("%d",&a);

    printf("enter breadth of rectangle: ");
    scanf("%d",&b);

    area=a*b;
    perimeter=2*(a+b);

    printf("the area of rectangle is %d\n",area);
    printf("the perimeter of rectangle is %d\n",perimeter);








    return 0;
}