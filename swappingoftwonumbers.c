#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the values:");
    scanf("%d%d",&a,&b);
    printf("\nThe values before swap:\t%d\t%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n\nThe values after the swap:\t%d\t%d",a,b);
}
