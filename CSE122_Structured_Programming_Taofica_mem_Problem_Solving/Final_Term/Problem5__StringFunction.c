#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], str3[50];

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    printf("\nLength of first string: %d", strlen(str1));
    printf("\nLength of second string: %d", strlen(str2));

    strlwr(str1);
    printf("\nFirst string in lowercase: %s", str1);

    strcpy(str3, str2);
    printf("\nCopied string (second string): %s", str3);

    if (strcmp(str1, str2) == 0)
    {
        printf("\nThe strings are equal.");
    }
    else
    {
        printf("\nThe strings are not equal.");
    }

    return 0;
}