#include <stdio.h>

int main() {
    int A, B, C;

    // Read three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &A, &B, &C);

    int originalNumbers[] = {A, B, C};

    // Sort the numbers in ascending order
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }
    if (B > C) {
        int temp = B;
        B = C;
        C = temp;
    }
    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }

    // Print the sorted numbers
    printf("Sorted numbers in ascending order: %d %d %d\n\n", A, B, C);

    // Print the original sequence
    printf("Original sequence of numbers: %d %d %d\n", originalNumbers[0], originalNumbers[1], originalNumbers[2]);

    return 0;
}
