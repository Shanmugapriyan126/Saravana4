#include<stdio.h>
void main()
{
    int a[100],n,i,b=0;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the value:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>b)
        {
            b=a[i];
        }
    }
    printf("\nMaximum value:%d",b);
}
