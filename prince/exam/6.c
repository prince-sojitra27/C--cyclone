#include <stdio.h>

struct employee
{
    int id;
    char name[50];
    char role[50]
};

main()
{
    int employeeNo;

    printf("\n");
    printf("Enter the number of house :- ");
    scanf("%d", &employeeNo);
    printf("\n\n");
    struct employee e1[employeeNo];

    for (int i = 1; i <= employeeNo; i++)
    {

        printf("Enter the id of employee :- ");
        scanf("%d", &e1[i].id);
        printf("Enter the the name of employee:- ");
        scanf("%f", &e1[i].name);
        printf("Enter the role of employee :- ");
        scanf("%s", &e1[i].role);
    }
    printf("\n\n");
    printf("The details of the house are :- \n\n");
    for (int i = 1; i <= employeeNo; i++)
    {
        fprintf(data, "The id of employee is :- %d\n", e1[i].id);
        fprintf(data, "The established year of your house :- %d\n", e1[i].name);
        fprintf(data, "The role of employee is  :- %s\n\n", e1[i].role);
    }
}