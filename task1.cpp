/* write a cprogram to read the name age and phone number from the user,store them in variables and display them back*/ 
#include<stdio.h>
main()
{
	int phno=0,age=0;
	char name[20]={'\0'};
printf("enter the name");
scanf("%s",&name);
printf("enter the age");
scanf("%d",&age);
printf("enter the phonenumber");
scanf("%d",&phno);
printf("the name is: %s",name);
printf("the age is:%d",age);
printf("the phone number %d",phno);
}
