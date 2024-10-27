//program to show a book structure
/*
program for book structure
Author:Nya0si
Date:17/10/2024
Reg no:CT101/G/24465/24
*/
#include <stdio.h>
#include <string.h> //needed for strcpy
// Define the structure
struct book{
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {
    // Declare and initialize the structure variable struct book;
    struct book myBook;
	strcpy(myBook.title,"Introduction to C Programming"); 
	strcpy(myBook.author,"John Smith");
	myBook.publication_year=2022;
	strcpy(myBook.ISBN,"9780131103627");
	myBook.price=49.99;
	
    
    // Print the values
    printf("Title:%s\n",myBook.title);
    printf("Author:%s\n",myBook.author);
    printf("Publication Year:%d\n",myBook.publication_year);
    printf("ISBN: %s\n",myBook.ISBN);
    printf("Price:%.2f\n",myBook.price);
    
    //separating the two books
    printf("\n");
    
    // Prompt user to enter the values
    printf("Enter new details for the book:\n");
    
    printf("Title:"); 
	scanf("%s",&myBook.title);
	
    printf("Author:"); 
	scanf("%s",&myBook.author);
	
    printf("Publication Year:"); 
	scanf("%d",&myBook.publication_year);
	
    printf("ISBN:");
	scanf("%s",&myBook.ISBN);
	
    printf("Price:"); 
	scanf("%s",&myBook.price);
    
    // Print the new values
    printf("\nUpdated Book Details:\n");
    printf("Title:%s\n",myBook.title);
    printf("Author:%s\n",myBook.author);
    printf("Publication Year:%d\n",myBook.publication_year);
    printf("ISBN:%s\n",myBook.ISBN);
    printf("Price:%.2f\n",myBook.price);
    
    return 0;
}
