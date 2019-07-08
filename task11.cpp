/*write a c program to create a structure called book and the store the title,author and genre.Read these values frrom the user and display them back using functions*/
#include<stdio.h>
struct book
{
	char title[100];
	char author[100];
	char genre[100];
};
struct book book1;
void read();
void display();
void read()
{
	printf("enter the title of the book");
	gets(book1.title);
	printf("enter the author of the book");
	gets(book1.author);
	printf("enter the genre  of the book");
	gets(book1.genre);
}
void display()
{
	printf("\ntitle %s\n author %s\ngenre %s\n",book1.title,book1.author,book1.genre);
}
int main()
{
read();
display();
}


