#include <stdio.h>

main()

{
    char str[100];
    int i;

    printf("Enter the name :-");
    scanf("%[^\n]", &str);

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("The uppercase string is :- %s\n", str);
}