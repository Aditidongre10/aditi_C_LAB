/* WAP to take check if the triangle is valid or not. If the validity is established, do
check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of
the triangle as input from a user */


#include<stdio.h>
int main(){

    int a,b,c;
    printf("enter three sides of triangle :");
    scanf("%d %d %d",&a,&b,&c);

    if((a + b > c) && (a + c > b)&& (b + c > a)){
        printf("triangle is valid ");

        if(a==b && b==c){
            printf("triangle is equliteral :");
        }

        else if(a==b || b==c || c==a){
            printf("triangle is isosceles :");
        }
        else if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)) {
            printf("Triangle is right-angled.\n");
        }
        
        else{
            printf("triangle is scalene");
        }
    }

    return 0;
}