#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the Number:");
    scanf("%d%d",&b,&c);
    a=b*c;
    if(a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
