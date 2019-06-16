/*write a c program to take marks in 3 subjects and display their sum and average*/
#include<stdio.h>
main()
{
	int maths=0,english=0,science=0,avg=0,sum=0;
	printf("enter the marks of maths");
	scanf("%d",&maths);
	printf("enter the marks of english");
	scanf("%d",&english);
	printf("enter the marks of science");
	scanf("%d",&science);
	sum=(maths+english+science);
	avg=(sum/3);
	printf("the sum of 3 subjects is %d",sum);
	printf("the avg of 3 subjects is %d",avg);
	}
