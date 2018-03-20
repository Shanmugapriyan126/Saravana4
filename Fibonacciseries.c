#include<stdio.h>
void main()
{
  int i,a=0,b=1,c=0,N;
  printf("Enter the number :");
  scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        c=a+b;
        printf("%d \n",c);
        b=a;
        a=c;
    }
}
