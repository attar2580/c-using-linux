// -------------------------------- calcultor using pass by reference pointers --------------------------- //
#include<stdio.h>

int calc(int *a, int *b, char *op) {
    switch (*op) {
        case '+':
            return (*a) + (*b);
        case '-':
            return (*a) - (*b);
        case '*':
            return (*a) * (*b);
        case '/':
            if (*b == 0) {
                printf("Error: Division by zero!\n");
                return 0;  // or handle error as needed
            }
            return (*a) / (*b);
        default:
            printf("Invalid operator!\n");
            return 0;  // or some error code
    }
}

int main () {
    int a,b;
    char op;
    printf("enter the 1st operand : ");
    scanf("%d",&a);

    printf("enter the 2st operand : ");
    scanf("%d",&b);

    while((getchar() != '\n')); // this removes newline which can be taken as a character input

    printf("enter the operator (+ - * /) : ");
    scanf("%c",&op);

    int res = calc(&a,&b,&op);
    printf("Result : %d",res);

}
