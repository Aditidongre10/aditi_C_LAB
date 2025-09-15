//WAP a C program to Convert temperature from Celsius to Fahrenheit using the
//formula: F = (C * 9/5) + 32.

#include<stdio.h>

int main(){

    int cel,f;
    printf("enter celsius :");
    scanf("%d",&cel);

    f=(cel*9/5)+32;

    printf("the fehrenheit of given celsius : %d\n",cel);





    return 0;
}