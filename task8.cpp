#include<stdio.h>
main()
{
	int cnt=1,m,n;
	printf("enter the number");
	scanf("%d",&n);
	while(cnt<=10)
	{
		m=n*cnt;
		printf("%d\n",m);
		cnt++;
	}
}
