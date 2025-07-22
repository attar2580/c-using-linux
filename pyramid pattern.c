/* ---------------------------- PYRAMID PATTERN
     *
    ***
   *****
  *******
*/
#include<stdio.h>
int main() {
    int space,row,col,n=5;
    for(row = 0; row < 5; row++){
        for(space = 0; space <= 5 - row; space++){
            printf(" ");
        }
        for(col = 1; col <= 2 * row - 1; col++){
            printf("*");
        }
        printf("\n");
    }
}
