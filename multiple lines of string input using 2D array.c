// -------------------------- multiple lines of string input
#include<stdio.h>
#include<string.h>

int main() {
    char str[5][100];
    int i;
    for(i = 0; i < 5; i++){
        printf("enter the string %d\n : ", i+1);
        scanf("%s",&str[i]);
    }
    printf("entered string : \n");
    for(i = 0; i < 5; i++){
        printf("%s\n",str[i]);
    }
}
