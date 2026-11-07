
#include <stdio.h>
#include <string.h>

int main()
{
    char first[50];
    char last[50];
    char fullName[100] = "";

    printf("Enter first name: ");
    scanf("%s", first);
    printf("Enter last name: ");
    scanf("%s", last);

    strcat(fullName, first);
    strcat(fullName, " ");
    strcat(fullName, last);
    printf("Full name: %s", fullName);

    return 0;
}
