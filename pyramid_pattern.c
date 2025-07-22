 // ----------------------------------- INVERTED PYRAMID ------------------------------------
 
 #include<stdio.h>

int main() {
    int rows,cols,space;
    for(rows = 10; rows >= 1; --rows){
        for(space = 0; space <= 10 - rows; space++){
            printf(" ");
        }
        for(cols = 10; cols < 2 * rows - 1; ++cols){
            printf("*");
        }
        printf("\n");
    }
}
