#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100];
	int i,n,A=0,B=0,C=0;
	printf("Enter the string:");
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    if((a[i]>='a')&&(a[i]<='z')||(a[i]>='A')&&(a[i]<='Z'))
	    {
	       A=1;
	    }
	    else if((a[i]>=0)&&(a[i]>=9))
	    {
	        B=1;
	    }
	    else
	    {
	        C=1;
	    }
	}
	if((A==1)&&(B==1))
	{
	    printf("Yes String contains both alphabets and numbers");
	}
	else
	{
	    printf("no");
	}
	return 0;
}
