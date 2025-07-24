#include<stdio.h>

int main() {
    int house_value = 99; // The house with the value 99 inside.

    // Declare a pointer. 'int *' means "a pointer that holds the
    // address of an integer variable".
    int *address_paper;

    // Use '&' to get the address of 'house_value' and store it
    // in our pointer.
    address_paper = &house_value;

    // Let's examine what we have:
    printf("Value inside the house: %d\n", house_value);
    printf("Address of the house: %p\n", (void*)&house_value);
    printf("What's written on our address paper: %p\n", (void*)address_paper);

    // Now, let's use '*' to dereference the pointer. This means we
    // "follow the address" to see the value at that location.
    printf("Using the paper to find the value in the house: %d\n", *address_paper);

    // We can even use the pointer to CHANGE the value in the house!
    // Go to the address on the paper and change the value there to 100.
    *address_paper = 100;
    printf("The house value has been changed to: %d\n", house_value);

    return 0;
}
