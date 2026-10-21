#include<stdio.h>
int main()
{
    int age;
    printf("Enter the Age:");
    scanf("%d",&age);
    if(age>=18)
        printf("\nYou are eligible to vote");
    else
        printf("\nYou are not Eligible to Vote");
}