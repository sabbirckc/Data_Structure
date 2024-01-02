#include <stdio.h>

int main() {
    int M, N;
    long long result = 1;

    // Read the values of M and N from the user
    printf("Enter the value of M: ");
    scanf("%d", &M);
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Calculate M^N
    if (N >= 0) {
        for (int i = 1; i <= N; i++) {
            result *= M;
        }
    } else {
        for (int i = 1; i <= -N; i++) {
            result *= M;
        }
        result = 1 / result;
    }

    // Print the result
    printf("Result: %lld\n", result);

    return 0;
}
