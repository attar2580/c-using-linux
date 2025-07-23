// Problem: Read a user's name of unknown length and store it.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char *name;
    int len = 52;
    name = (char*) malloc(len * sizeof(char));

    printf("enter the name : ");
        fgets(name, len, stdin);


    printf("entered name : %s\n", name);

    printf("%d",sizeof(name));

    free(name);
    name = NULL;
}
