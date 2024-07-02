#include <stdio.h>

void main()
{
    char a[50];

    printf("Enter any string :- ");
    scanf("%[^\n]", &a);

    int *ptr;
    int lenth;

    for (lenth = 0; a[lenth] != '\0'; lenth++)
        ;

    ptr = &lenth;

    printf("The lenth of the string is :- %d", *ptr);
}