/*write a c program to find the reverse of a given number*/
#include<stdio.h>
main()
{
	int num=0,rem=0,sum=0;
	printf("enter the number");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=num*10+rem;
		num=num/10;
	}
	printf("the reverse of a number is: %d",sum);
}












	

