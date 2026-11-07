
#include <stdio.h>
#include <string.h>

int main()
{
    char password[50] = "Anas0001";
    char userPassword[50];

    printf("Enter password: ");
    fgets(userPassword, 50, stdin);
    userPassword[strcspn(userPassword, "\n")] = '\0';
    if (strcmp(password, userPassword) == 0)
    {
        printf("Access granted\n");
    }
    else
    {
        printf("Access denied\n");
    }
    if (strncmp(password, userPassword, 3) == 0)
    {
        printf("First 3 characters match.\n");
    }
    else
    {
        printf("First 3 characters do not match.\n");
    }

    return 0;
}
