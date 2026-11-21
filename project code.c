#include <stdio.h>

struct Book
{
    int id;
    char title[30];
    int available;
};

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

                books[i].available = 0;

                printf("Book Issued Successfully\n");
                printf("New Status: Issued\n");
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

    return 0;
}