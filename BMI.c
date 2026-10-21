#include<stdio.h>
int main()
{
    float weight,height,BMI;
    printf("Enter Weight in kg:");
    scanf("%f",&weight);
    printf("Enter Height in meters:");
    scanf("%f",&height);
    BMI=weight/(height*height);
    printf("\n BMI value is %.2f\n",BMI);
    if(BMI<18.5)
    printf("Category:Underweight");
    else if(BMI>=18.5&&BMI<25.0)
    printf("Normal\n");
    else if(BMI>=25.0&&BMI<30.0)
    printf("Overweight\n");
    else
    printf("Obese\n");

}