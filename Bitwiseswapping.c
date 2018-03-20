#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the values:");
    scanf("%d%d",&a,&b);
    printf("\nThe values before swap:\t%d\t%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\n\nThe values after the swap:\t%d\t%d",a,b);
}
