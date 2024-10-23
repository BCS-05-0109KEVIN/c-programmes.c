//program to define a structure named BOOK
#include <stdio.h>
#include <string.h>

//STRUCTURE BOOK
struct book
{
	char title[30];
	char author[30];
	char isbn[13];
	float price;
	int publication_year;
}book1;
int main()
{
	//initializing variable
	strcpy(book1.title,"Introduction to c programming");
	strcpy(book1.author,"John Smith");
	strcpy(book1.isbn,"9780131103627");
	book1.price=49.99;
	book1.publication_year=2022;

	//printing the variables
	//Title
	printf("\n Title:%s",book1.title);
	//Author
	printf("\n Author:%s",book1.author);
	//isbn
	        printf("\n Isbn:%s",book1.isbn);
	        //price
	        printf("\n price:%f",book1.price);
	        //publication year
	        printf("\n Publication Year:%ld",book1.publication_year);

    return 0;
}
