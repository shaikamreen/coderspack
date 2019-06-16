/*write a cprogram to read the firstname and lastname of the user in 2 different variables,combine them,and display their full name using a single string*/
#include<stdio.h>
#include<string.h>
main()
{
char fname[10],lname[10];
printf("enter your first name");
scanf("%s",&fname);
printf("enter your lastname");
scanf("%s",&lname);
strcat(fname,lname);
printf("the fullname is %s",fname);
return 0;	
}
