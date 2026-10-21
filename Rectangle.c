#include<stdio.h>
int main()
{
    float length,breadth,area,perimeter;
    printf("Enter the Length,Breadth");
    scanf("%f,%f",&length,&breadth);
    area=length*breadth;
    printf("Area of the rectangle is %.2f",area);
    perimeter=2*(length+breadth);
    printf("\n Perimeter of the Rectangle is %.2f",perimeter);
    
}