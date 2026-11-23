#include <stdio.h>

/* Function prototype using pointers (call by reference) */
void swap(int *x, int *y);

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nBefore Swapping:\n");
    printf("First number = %d, Second number = %d\n", num1, num2);

    /* Pass addresses of num1 and num2 */
    swap(&num1, &num2);

    printf("\nAfter Swapping:\n");
    printf("First number = %d, Second number = %d\n", num1, num2);

    return 0;
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
