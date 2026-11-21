#include <stdio.h>

struct Book
{
    int id;
    char title[30];
    int available;
};

void displayBooks(struct Book books[])
{
    int i;

    printf("\n----- BOOK LIST -----\n");

    for(i = 0; i < 10; i++)
    {
        printf("\nBook ID: %d\n", books[i].id);
        printf("Book Name: %s\n", books[i].title);

        if(books[i].available == 1)
        {
            printf("Status: Available\n");
        }
        else
        {
            printf("Status: Issued\n");
        }
    }
}


void searchBook(struct Book books[])
{
    int id, i;
    int found = 0;

    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for(i = 0; i < 10; i++)
    {
        if(books[i].id == id)
        {
            found = 1;

            printf("Book Found\n");
            printf("Book Name: %s\n", books[i].title);

            if(books[i].available == 1)
            {
                printf("Status: Available\n");
            }
            else
            {
                printf("Status: Issued\n");
            }

            break;
        }
    }

    if(found == 0)
    {
        printf("Book Not Found\n");
    }
}


void issueBook(struct Book books[])
{
    int id, i;
    int found = 0;

    printf("Enter Book ID to issue: ");
    scanf("%d", &id);

    for(i = 0; i < 10; i++)
    {
        if(books[i].id == id)
        {
            found = 1;

            if(books[i].available == 1)
            {
                books[i].available = 0;

                printf("Book Name: %s\n", books[i].title);
                printf("Book Issued Successfully\n");
            }
            else
            {
                printf("Book is Already Issued\n");
            }

            break;
        }
    }

    if(found == 0)
    {
        printf("Book Not Found\n");
    }
}

void returnBook(struct Book books[])
{
    int id, i;
    int found = 0;

    printf("Enter Book ID to return: ");
    scanf("%d", &id);

    for(i = 0; i < 10; i++)
    {
        if(books[i].id == id)
        {
            found = 1;

            if(books[i].available == 0)
            {
                books[i].available = 1;

                printf("Book Name: %s\n", books[i].title);
                printf("Book Returned Successfully\n");
            }
            else
            {
                printf("Book is Already Available\n");
            }

            break;
        }
    }

    if(found == 0)
    {
        printf("Book Not Found\n");
    }
}


void reissueBook(struct Book books[])
{
    int id, i;
    int found = 0;

    printf("Enter Book ID to reissue: ");
    scanf("%d", &id);

    for(i = 0; i < 10; i++)
    {
        if(books[i].id == id)
        {
            found = 1;

            if(books[i].available == 1)
            {
                books[i].available = 0;

                printf("Book Name: %s\n", books[i].title);
                printf("Book Reissued Successfully\n");
            }
            else
            {
                printf("Book is Already Issued\n");
            }

            break;
        }
    }

    if(found == 0)
    {
        printf("Book Not Found\n");
    }
}


int main()
{
    struct Book books[10] =
    {
        {101, "C Programming", 1},
        {102, "Physics", 1},
        {103, "Maths", 1},
        {104, "Chemistry", 1},
        {105, "English", 1},
        {106, "Computer", 1},
        {107, "Electronics", 1},
        {108, "Mechanics", 1},
        {109, "Biology", 1},
        {110, "Engineering", 1}
    };

    int choice;

    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");

        printf("1. Display Books\n");
        printf("2. Search Book\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Reissue Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            displayBooks(books);
        }

        else if(choice == 2)
        {
            searchBook(books);
        }

        else if(choice == 3)
        {
            issueBook(books);
        }

        else if(choice == 4)
        {
            returnBook(books);
        }

        else if(choice == 5)
        {
            reissueBook(books);
        }

        else if(choice == 6)
        {
            printf("Program Ended\n");
        }

        else
        {
            printf("Invalid Choice\n");
        }

    } while(choice != 6);

    return 0;
}