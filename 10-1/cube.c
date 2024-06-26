#include <stdio.h>

int cube()
{
    int a;
    printf("Enter a number :- ");
    scanf("%d", &a);

    return a * a * a;
}
void main()
{

    printf("CUBE :- %d", cube());
}