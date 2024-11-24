#include <stdio.h>
#include <string.h>
int main()
{
    char st[4];
    printf("Enter the three character :");

    gets(st);
    printf("The character stored in the string is :");
    puts(st);

    return 0;
}