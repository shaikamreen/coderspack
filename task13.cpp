/*write a c program to find the smallest and largest element in an array*/
#include<stdio.h>
 int main()
{
	int i,n;
	float arr[100];
	printf("enter total number of elements(1 to 100)");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("enter the number %d:",i+1);
		scanf("%f",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		if(arr[0]<arr[i]);
		arr[0]=arr[i];
	}
	printf("largest element=%.2f",arr[0]);
	return 0;
}

