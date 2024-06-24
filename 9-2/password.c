#include <stdio.h>

main()
{
    char password[100];
    int i, len, letter = 0, digit = 0, special = 0;

    printf("enter your password :- ");
    scanf("%s", password);

    for (i = 0; i <= '\0'; i++)
    {
        len = i;
        if ((password[i] >= 'a' && password[i] <= 'z') || (password[i] >= 'A' && password[i] <= 'Z'))
        {
            letter++;
        }
        else if (password[i] >= '0' && password[i] <= '9')
        {
            digit++;
        }
        else
        {
            special++;
        }
    }

    if (len <= 6 && letter >= 1 && digit >= 1 && special >= 1)
    {
        printf("Your paswword is strong !!!");
    }
    else
    {
        printf("Your paswword is weak !!!");
    }
}
