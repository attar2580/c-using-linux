// ------------------------------------------- malloc & calloc -------------------------------------------

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n = 5;
    int *arr_malloc;
    int *arr_calloc;

    arr_malloc = (int*) malloc(n*sizeof(int));
    arr_calloc = (int*) calloc(n, sizeof(int));

    if(arr_malloc == NULL && arr_calloc == NULL){
        printf("malloc & calloc failed");
    }

    printf("enter the elememnts malloc array : \n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr_malloc);
    }

    printf("enter the elements in calloc array : \n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr_calloc);
    }

    printf("you've entered malloc : \n");
    for(int i = 0; i < n; i++){
        printf("%d\n",arr_malloc);
    }

    printf("you've entered calloc : \n");
    for(int i = 0; i < n; i++){
        printf("%d\n",arr_calloc);
    }

    free(arr_malloc);
    free(arr_calloc);

    arr_malloc = NULL;
    arr_calloc = NULL;
}
