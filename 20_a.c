#include <stdio.h>
struct book
{
	char book_title[25];
	char author_name[25];
	char publication[30];
	int price;
} b1,b2;
void main()
{
	struct book b1,b2;

	printf("Enter Book name:");
	scanf("%s",b1.book_title);

	printf("Enter Author name:");
	scanf("%s",b1.author_name);

	printf("Enter Publication:");
	scanf("%s",b1.publication);

	printf("Enter Price:");
	scanf("%d",&b1.price);

	printf("Enter Book name:");
	scanf("%s",b2.book_title);

	printf("Enter Author name:");
	scanf("%s",b2.author_name);

	printf("Enter Publication:");
	scanf("%s",b2.publication);

	printf("Enter Price:");
	scanf("%d",&b2.price);

	printf("The book name is %s\n",b1.book_title);
	printf("The Author of  is %s\n",b1.author_name);
	printf("The Publication of is %s\n",b1.author_name);
	printf("The Price is %d\n\n\n",b1.price);
			

	printf("The book name is %s\n",b2.book_title);
	printf("The Author of  is %s\n",b2.author_name);
	printf("The Publication of is %s\n",b2.author_name);
	printf("The Price is %d\n\n\n",b2.price);
			

}