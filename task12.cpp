#include<stdio.h>
main()
{
	int ch,fh,cel;
	printf("1.celcius to farenheit\n2.farenheit to celsius\n3.exit\n");
	printf("enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("enter the temperature in celcius:");
		scanf("%d",&cel);
		fh=(1.8*cel)+32;
		printf("the temperature in farenheit is %d",fh);
		break;
		case 2:
		printf("\nenter the temperature in farenheit:");
		scanf("%d",&fh);
		cel=(5*(fh+32))/9;
		printf("%d celcius",cel);
		break;
		case 3: 
		break;
		default: 
		printf("invalid choice....please select 1 or 2 or 3");
		break;
	}
}

