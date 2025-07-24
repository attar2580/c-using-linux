// ------------------------ Palindrome using malloc & pointers
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *arr, *rev;
    int i,len = 50;

    arr = (char*) malloc(len*sizeof(char));
    rev = (char*) malloc(len*sizeof(char));

    if(arr == NULL || rev == NULL){
        printf("Failed");
        free(arr);
        free(rev);
    }

    printf("enter : ");
    fgets(arr, len, stdin);

    int leng = strlen(arr);

    if(len > 0 && arr[leng - 1] == '\n'){
        arr[leng - 1] = '\0';
        leng--;
    }

    for(i = 0; i < leng; ++i){
        rev[i] = arr[leng - i - 1];
    }
    rev[leng] = '\0';

    if(strcmp(arr,rev) == 0){
        printf("Palindrome");
    }
    else{
        printf("Non Palindrome");
    }

    free(arr);
    free(rev);

}
