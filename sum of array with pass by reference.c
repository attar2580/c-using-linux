// -------------------------------- sum array with pass by reference ------------------

#include<stdio.h>

int sum(int *arr, int size){
    long total = 0;
    int *end_arr = arr + size;

    while(arr < end_arr){
        total += *arr;
        *arr++;
    }
    return total;
}

int main() {
    int num[5] = {10,20,30,40,50};
    long sum_array = sum(num,5);
    printf("%ld\n",sum_array);
}
