#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef const char* conststring;

struct Human{
    int age;
    char name[50];
    char dialog[100];
};

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
    printf("You are %d years old, right? enter y or n:\n", age);
    scanf("%c", &confirm);
    return 0;
}
