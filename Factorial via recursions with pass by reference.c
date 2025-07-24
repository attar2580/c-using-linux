#include<stdio.h>

int fact(int *n){
    if(*n <= 1)
        return 1;
    else{
    int temp = (*n-1);
        return fact(&temp) * (*n);
    }
}

int main () {
    int n = 5;
    int res = fact(&n);
    printf("%d",res);
}
