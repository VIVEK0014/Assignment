/******************************************************************************
Write a menu driven program that depicts the working of a library. The menu
options should be:
1. Add book information
2. Display book information
3. List all books of given author
4. List the title of specified book
5. List the count of books in the library
6. List the books in the order of accession number
7. Exit
Create a structure called library to hold accession number, title of the book, author
name, price of the book, and flag indicating whether the book is issued or not.

*******************************************************************************/

#include<stdio.h>

// here i create a  structure of that library
struct library{
    char booName[100];
    char authorName[100];
    char flag[3];
    int acc;
};

struct library book[100];
int count=0;
void input(struct library *book)
{
    getchar();
    printf("Book Details \n");
    printf("Book Name : ");
    fgets(book->booName,sizeof(book->booName),stdin);
    printf("author Name : ");
    fgets(book->authorName,sizeof(book->authorName),stdin);
    printf("Book Issued (yes or not):");
    gets(book->flag);
    book->acc=count;
}
void details(struct library *book)
{
    printf("\nBook Details \n\n");
    printf("Book Name   : %s",book->booName);
    printf("author Name : %s",book->authorName);
    printf("Access NO   : %d",book->acc);
}
int main()
{
	int i;
	printf("****************************************************************************************\n");
	printf("                            WELCOME TO THE LIBRARY\n");
	printf("****************************************************************************************\n");
	
        printf("\n\n\nselect from menu: \n");
        printf("1) Add book details.\n2) Display book details.\n3) List all books of given author.\n4)"
                " List the count of books in the library.\n5) List the title of specified book\n6) List the books in the order of accession number\n7) Exit.\n");
        int k=0;
        scanf("%d",&k);
        system("cls");
        switch(k){
            case 1:{
                if(count>100){
                    printf("memory full");
                    main();
                }
                input(&book[count]);
                count++;
                main();
            }
            case 2:{
                for( i=0;i<count;i++)
                {
                    details(&book[i]);
                }
                 main();
            }
            case 3:{
            int t=0;
            printf("\nEnter author name: ");
            char temp[100];
            getchar();
            fgets(temp,sizeof(temp),stdin);
            for( i=0;i<count;i++)
            {
                 if(strcmp(book[i].authorName,temp)==0)
                 {
                     details(&book[i]);
                     t++;
                 }
            }
            t==0? printf("\n NO data found !!") : printf("");
            main();
            }
            case 4:{
             printf("\n\nTotal books in library : %d",count);
             main();
            }
            case 5:{
                int t=0;
                printf("\nEnter access no : ");
                int temp;
                scanf("%d",&temp);
                for( i=0;i<count;i++)
            {
                 if(book[i].acc==temp)
                 {
                     details(&book[i]);
                     t++;
                 }
            }
            t==0? printf("\n NO data found !!") : printf("");
            main();
            }
            case 6:{
                for( i=0;i<count;i++)
                {
                    details(&book[i]);
                }
                 main();
            }
            case 7:{
             exit(0);
            }
            default: {main();}
        }
}
