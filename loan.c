#include<stdio.h>
int main()
{
    int age,credit_score;
    float monthly_income;
    printf("enter your age:");
    scanf("%d",&age);
    printf("enter your monthly income(₹):");
    scanf("%f",&monthly_income);
    printf("enter credit score:");
    scanf("%d",&credit_score);
    if(age<21||age>60){
        printf("\nloan rejected:age not in between 21 and 60");
    }
    else if(monthly_income<25000){
        printf("\nloan rejected:income below 25000");
    }
    else if(credit_score<700){
        printf("\nloan rejected:credit score below 700");
    }
    else{
        printf("\n loan approved");
    }
}