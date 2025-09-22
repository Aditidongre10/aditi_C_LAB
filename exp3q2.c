/*WAP to compute the BMI Index of the person and print the BMI values as per the
following ranges. You can use the following formula to compute BMI=
weight(kgs)/Height(Mts)*Height(Mts).*/

#include<stdio.h>

int main(){

    float w,h,bmi;
    printf("enter weight in kgs : ");
    scanf("%f",&w);

    printf("enter height in mtrs : ");
    scanf("%f",&h);

    bmi=w/(h*h);

     printf("Your BMI is: %.2f\n", bmi);

    if(bmi<15){
        printf("stravation ");
    }
    else if(bmi > 15.1 && bmi <= 17.5){
        printf("Anorexic");
    }
    else if(bmi >17.6 && bmi<=18.5){
        printf("Underweight ");
    }
    else if (bmi > 18.6 && bmi <=24.9){
        printf("Ideal ");
    }
    else if(bmi >=25 && bmi <=25.9){
        printf("overweight");
    }
    else if(bmi >=30 && bmi <=39.9){
        printf("obese");
    }
    else{
        printf("morbidity obese : ");
    }

    return 0;
}