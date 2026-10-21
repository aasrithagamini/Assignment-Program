#include<stdio.h>
int main()
{
    char b,n;
    printf("\n enter b value:");
    scanf("%c",&b);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
    printf("\n %c is a vowel",n);
    else
    printf("\n %c is not a vowel",n);
}