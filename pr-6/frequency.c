#include <stdio.h>

main()

{
    char name[20];
    int n, len = 0;
    int i, j;
    printf("Enter a name : ");
    scanf("%[^\n]", &name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
    }
    for (int i = 0; i < len; i++)
    {
        n = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (name[i] == name[j])
            {
                n++;
                name[j] = '\0';
            }
        }
        printf("\n");
        if (name[i] != '\0')
        {
            printf("Frequency of %c is = %d\n", name[i], n);
        }
    }
}
