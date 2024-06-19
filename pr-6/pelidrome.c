#include <stdio.h>

main()

{
    char name[20], rev[20];

    int len = 0, n = 0, compare;

    printf("Enter a name : ");
    scanf("%[^\n]", name);

    for (int i = 0; i != NULL; i++)
    {
        len++;
    }

    for (int i = len - 1; i >= 0; i--)
    {

        rev[n++] = name[i];
    }
    for (int i = 0; i < len; i++)
    {
        if (name[i] == rev[i])
        {
            compare = 0;
        }
        else
        {
            compare = 1;
            break;
        }
    }
    if (compare == 0)
    {
        printf("the word is palidrome...!");
    }
    else
    {
        printf("the word is not palidrome...!");
    }
}