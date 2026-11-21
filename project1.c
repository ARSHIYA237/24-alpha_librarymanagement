#include <stdio.h>

// ==================================
// MEMBER 1 : STORE AND DISPLAY BOOKS
// ==================================

struct Book
{
    int id;
    char title[30];
    int status;
};

int main()
{
    struct Book books[10] =
    {
        {101, "C Programming", 1},
        {102, "Physics", 1},
        {103, "Mathematics", 1},
        {104, "Chemistry", 1},
        {105, "English", 1},
        {106, "Computer", 1},
        {107, "Electronics", 1},
        {108, "Mechanics", 1},
        {109, "Biology", 1},
        {110, "Engineering", 1}
    };

    int choice;
    int id;
    int i;
    int found = 0;

    printf("\n===== LIBRARY BOOK MANAGEMENT SYSTEM =====\n");
    printf("1. Display All Books\n");
    printf("2. Search Book\n");
    printf("3. Issue Book\n");
    printf("4. Return Book\n");
    printf("5. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);


    // ==================================
    // MEMBER 1 : DISPLAY BOOKS
    // ==================================

    if(choice == 1)
    {
        printf("\n----- BOOK LIST -----\n");

        for(i = 0; i < 10; i++)
        {
            printf("\nBook ID   : %d", books[i].id);
            printf("\nBook Name : %s", books[i].title);

            if(books[i].status == 1)
            {
                printf("\nStatus    : Available\n");
            }
            else
            {
                printf("\nStatus    : Issued\n");
            }
        }
    }


    // ==================================
    // MEMBER 2 : SEARCH BOOK
    // ==================================

    else if(choice == 2)
    {
        printf("\nEnter Book ID: ");
        scanf("%d", &id);

        for(i = 0; i < 10; i++)
        {
            if(books[i].id == id)
            {
                found = 1;

                printf("\nBook Found");
                printf("\nBook ID   : %d", books[i].id);
                printf("\nBook Name : %s", books[i].title);

                if(books[i].status == 1)
                {
                    printf("\nStatus    : Available\n");
                }
                else
                {
                    printf("\nStatus    : Issued\n");
                }

                break;
            }
        }

        if(found == 0)
        {
            printf("\nBook Not Found\n");
        }
    }


    // ==================================
    // MEMBER 2 : ISSUE BOOK
    // ==================================

    else if(choice == 3)
    {
        printf("\nEnter Book ID to Issue: ");
        scanf("%d", &id);

        for(i = 0; i < 10; i++)
        {
            if(books[i].id == id)
            {
                found = 1;

                if(books[i].status == 1)
                {
                    books[i].status = 0;

                    printf("\nBook Name: %s", books[i].title);
                    printf("\nBook Issued Successfully");
                    printf("\nStatus: Issued\n");
                }
                else
                {
                    printf("\nBook is Already Issued\n");
                }

                break;
            }
        }

        if(found == 0)
        {
            printf("\nBook Not Found\n");
        }
    }


    // ==================================
    // MEMBER 3 : RETURN BOOK
    // ==================================

    else if(choice == 4)
    {
        printf("\nEnter Book ID to Return: ");
        scanf("%d", &id);

        for(i = 0; i < 10; i++)
        {
            if(books[i].id == id)
            {
                found = 1;

                if(books[i].status == 0)
                {
                    books[i].status = 1;

                    printf("\nBook Name: %s", books[i].title);
                    printf("\nBook Returned Successfully");
                    printf("\nStatus: Available\n");
                }
                else
                {
                    printf("\nBook is Already Available\n");
                }

                break;
            }
        }

        if(found == 0)
        {
            printf("\nBook Not Found\n");
        }
    }


    // ==================================
    // EXIT
    // ==================================

    else if(choice == 5)
    {
        printf("\nProgram Ended\n");
    }

    else
    {
        printf("\nInvalid Choice\n");
    }

    return 0;
}