#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the Student Marks(0-100):\n");
    scanf("%d",&marks);
    if(marks<0||marks>100)
    {
        printf("Inavalid Marks\n");
    }
    else if(marks>=90)
    printf("Grade=O\n");
    else if(marks>=80)
    printf("Grade=A+\n");
    else if(marks>=70)
    printf("Grade=A\n");
    else if(marks>=60)
    printf("Grade=B\n");
    else if(marks>=50)
    printf("Grade=C\n");
    else
    printf("Grade=F\n");
}
    
