
#include <stdio.h>
#include <string.h>

int main()
{
    char name[24];

    do
    {
        printf("You havn't enter your name!\n");
        printf("What's your name?\n");
        fgets(name, 24, stdin);
        name[strlen(name) - 1] = '\0';
    } while (strlen(name) == 0);

    printf("Your name is : %s\n", name);
    return 0;
}