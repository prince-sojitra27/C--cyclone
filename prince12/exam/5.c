#include <stdio.h>

struct house
{
    int room_quntity;
    int year;
    char city[50];
};

main()
{
    int houseNo;
    ;

    printf("\n");
    printf("Enter the number of house :- ");
    scanf("%d", &houseNo);
    printf("\n\n");
    struct house h1[houseNo];

    for (int i = 1; i <= houseNo; i++)
    {

        printf("Enter the number of rooms :- ");
        scanf("%d", &h1[i].room_quntity);
        printf("Enter the established year of your house :- ");
        scanf("%f", &h1[i].year);
        printf("give the name of the city where your house is established :- ");
        scanf("%s", &h1[i].city);
    }
    printf("\n\n");
    printf("The details of the house are :- \n\n");
    for (int i = 1; i <= houseNo; i++)
    {
        printf("The number of rooms in the house is :- %d\n", h1[i].room_quntity);
        printf("The established year of your house :- %d\n", h1[i].year);
        printf("The name of the city where your house is established :- %s\n\n", h1[i].city);
    }
}