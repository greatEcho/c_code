#include <stdio.h>
#include <string.h>

int main()
{
    char first[100], second[100], concat[303];
    printf("Enter two strings\n");
    scanf("%100s", first); // read 100 characters of the first string
    scanf("%100s", second);
    strcpy(concat, first);
    strcat(concat, " & ");
    strcat(concat, second);
    printf("%s\n", concat);

    return 0;
}

