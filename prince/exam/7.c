#include <stdio.h>

main()
{
    printf("The loop :-");
    printf("\n\n");
    
    for (int i = 10; i >= 6; i--)
    {
        for (int j = i; j <= 10; j++)
        {
            printf("%d ", i * i);
        }
        printf("\n");
    }
}