/*write a c program to check if the given string is palindrome or not*/
#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
printf("enter a string to check wheather it is a palindrome or not");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf("the string is a palindrome\n");
else
printf("the string is not  a palindrome");
return 0;
}
