/* -------------------------------- pattern to print :-
*
**
***
****
*****
****
***
**
*
------------------------------------------ */

#include<stdio.h>

int main() {
    int n = 5,row,col,totalRowInCol;
    for(row = 0; row < 2*n; ++row){
       totalRowInCol = row > n ? 2*n-row : row;
       for(col = 0; col < totalRowInCol; col++){
        printf("*");
       }
       printf("\n");
    }

}
