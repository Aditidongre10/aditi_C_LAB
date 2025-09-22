/*WAP to print the multiplication table of the number entered by the user. It should
be in the correct formatting. Num * 1 = Num*/

#include<stdio.h>

int main(){

    int num;
    printf("enter number :");
    scanf("%d",&num);

     printf("Multiplication Table for %d:\n", num);
    for(int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }




    return 0;
}