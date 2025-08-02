// Pointer Arrays
#include<stdio.h>

int main(){
    
    int a = 10, b = 20, c = 30;
    int *arr[3] = {&a,&b,&c};

    for(int i = 0; i < 4; i++){
        printf("value of element %d : %d and address : %p\n",i+1,*arr[i],arr[i]);
    }
}
