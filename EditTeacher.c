#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "User.c"

int main()
{
    teacher user;
    strcpy(user.firstname, "Fazli");
    strcpy(user.middlename, "Altaf");
    strcpy(user.lastname, "Alghani");
    strcpy(user.teacherid, "1012270953");

    int select;

    printf("///////////////////////////////////////////////////\n");
    printf("////---------------TEACHER MODE----------------////\n");
    printf("///////////////////////////////////////////////////\n\n\n");

    printf("Welcome to RancageAI, %s!\n\n", user.firstname);

    printf("What do you want to edit, today?\n");
    printf("1: Name\n");
    printf("2: TeacherID\n\n");

    printf("Enter here: \n");
    scanf("%d", &select);
    getchar(); 

    while (select != 1 && select != 2) {
        printf("Incorrect choice, try again. Enter here: ");
        scanf("%d", &select);
        getchar(); 
    }

    if (select == 1) {
        int name_selection;
        printf("Nice selection! which part do you want to change?\n");
        printf("1: First Name\n");
        printf("2: Middle Name\n");
        printf("3: Last Name\n");

        printf("Enter here: \n");
        scanf("%d", &name_selection);

        while (name_selection != 1 && name_selection != 2 && name_selection != 3) {
            printf("Incorrect choice, try again. Enter here: ");
            scanf("%d", &name_selection);
            getchar(); 
        }

        if (name_selection == 1) {
            char newfirstname[20];

            printf("Great choice! Enter the new first name: \n");
            fgets(newfirstname, 20, stdin);

            printf("///////////////////////////////////////////////////\n");
            printf("////---------------LOADING.....----------------////\n");
            printf("///////////////////////////////////////////////////\n\n\n");

            strcpy(user.firstname, newfirstname);
            printf("////-----------------SUCCESS-------------------////\n");

            printf("Your first name now is %s\n", newfirstname);

        } else if (name_selection == 2) {
            char newmiddlename[20];

            printf("Great choice! Enter the new first name: \n");
            fgets(newmiddlename, 20, stdin);

            printf("///////////////////////////////////////////////////\n");
            printf("////---------------LOADING.....----------------////\n");
            printf("///////////////////////////////////////////////////\n\n\n");

            strcpy(user.middlename, newmiddlename);
            printf("////-----------------SUCCESS-------------------////\n");

            printf("Your first name now is %s\n", newmiddlename);
        } else {
            char newlastname[20];

            printf("Great choice! Enter the new first name: \n");
            fgets(newlastname, 20, stdin);

            printf("///////////////////////////////////////////////////\n");
            printf("////---------------LOADING.....----------------////\n");
            printf("///////////////////////////////////////////////////\n\n\n");

            strcpy(user.lastname, newlastname);
            printf("////-----------------SUCCESS-------------------////\n");

            printf("Your first name now is %s\n", newlastname);
        }

    } else if (select == 2) {
        char newteacherid[11];

        printf("Great choice! Enter the new TeacherID: \n");
        fgets(newteacherid, 11, stdin);

        printf("///////////////////////////////////////////////////\n");
        printf("////---------------LOADING.....----------------////\n");
        printf("///////////////////////////////////////////////////\n\n\n");

        strcpy(user.teacherid, newteacherid);
        printf("////-----------------SUCCESS-------------------////\n");

        printf("Your first name now is %s\n", newteacherid);
    }
}