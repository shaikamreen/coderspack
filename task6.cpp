/*write a c program to check if the given number is armstrong or not*/
#include<stdio.h>
main()
{
	int n,rn,sum=0,t;
	printf("enter the number");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		rn=n%10;
		sum=sum+rn*rn*rn;
		n=n/10;
	}
	if(sum==t)
	{
		printf("the number is armstrng number");
	}
	else
	{
		printf("the number is not armstrong number");
	}
}
