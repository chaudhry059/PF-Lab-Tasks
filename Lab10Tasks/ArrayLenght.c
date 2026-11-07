
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char copy[100];

    printf("Enter your name: ");
    fgets(name, 100, stdin);

    name[strcspn(name, "\n")] = '\0';
    printf("Length of name: %d\n", strlen(name));
    strcpy(copy, name);
    printf("Copied name: %s\n", copy);
    printf("Size of array: %d bytes\n", sizeof(name));

    return 0;
}
