#include<stdio.h>
int main()
{
    int number;
    printf("\n Enter your number: ");
    scanf("%d",&number);
    if(number>0){
        printf("\nThe number is positive");
    }
    else if(number<0)
    {
        printf("\n The number is Negative");
    }
    else
    {
        printf("\n The number is Zero");
    }
}