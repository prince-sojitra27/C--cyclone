#include <stdio.h>

main()

{
    int a, b;
    int c = 0;
    printf("Enter the first number :-");
    scanf("%d", &a);
    printf("\n");
    printf("Enter the sceond number :-");
    scanf("%d", &b);

    int leapyear[b - a];
    for (int i = a; i <= b; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            leapyear[c] = i;
            c++;
        }
    }
    printf("Leapyear between %d and %d :-", a, b);
    for (int i = 0; i < c; i++)
    {
        printf("%d\t", leapyear[i]);
    }
}
