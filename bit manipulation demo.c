// ----------------------------------- BIT MANIPULATION ----------------------

#include<stdio.h>

int main () {
  
    int n = 5;
    int i = 2;
  
    printf("%d\n", n & (1 << i));
  
    if(n & (1 << i))
        printf("bit %d is set",i);

}
