#include <stdio.h>
#include <string.h>

main()

{
    char email1[] = "admin@gmail.com";
    char pass1[] = "123456";
    char email2[20];
    char pass2[20];

    printf("\n\n");

    printf("Enter your email:- \t");
    scanf("%s", &email2);
    printf("Enter password :- \t");
    scanf("%s", &pass2);

    if (strcmp(email2, email1) == 0 && strcmp(pass2, pass1) == 0)
    {
        printf("Login Successfull");
    }
    else
    {
        printf("Invalid Email or Password");
    }
}
