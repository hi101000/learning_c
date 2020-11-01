#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mytypes.h"


int main()
{
    char name[50];
    char dialog[100];
    int age;
    char confirm;
    Human user;
    printf("What is your name?\n");
    scanf("%s", &name);
    printf("\n Hello %s!\nWhat is your age?\n", name);
    scanf("%d", &age);
    printf("\nYou are %d years old, right? enter y or n:\n", age);
    scanf("%s", &confirm);
    if(confirm=="n"){
        while (confirm!="y"){
            printf("\n Hello %s!\nWhat is your age?\n", name);
            scanf("%d", &age);
            printf("You are %d years old, right? enter y or n:\n", age);
            scanf("%c", &confirm);
        }
    }

    printf("what is your favorite phrase/sentence/word:\n");
    scanf("%s", &dialog);

    strcpy(user.name, name);
    strcpy(user.dialog, dialog);
    user.age=age;
    return 0;
}
