/*write a c program to find the factorial of a number*/
#include<stdio.h>
main()
{
	int n,i,f=1;
	printf("enter the number");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		f=f*i;
	}
	printf("the factorial is %d",f);
}
