#include <stdio.h>

/**
 * @brief Generates and prints the Fibonacci series up to the N-th term.
 * * The Fibonacci sequence is a series where the next number is the sum of the
 * previous two. The first two numbers are 0 and 1.
 * * @param N The number of terms to generate.
 */
void generateFibonacci(int N) {
    // Check for invalid input
    if (N <= 0) {
        printf("Please enter a positive number of terms.\n");
        return;
    }

    // Initialize the first two terms of the series
    long long t1 = 0;
    long long t2 = 1;
    
    // We use a temporary variable for the next term
    long long nextTerm; 

    printf("Fibonacci Series up to %d terms:\n", N);

    for (int i = 1; i <= N; ++i) {
        // Print the current term
        printf("%lld", t1);

        // Add a comma and space if it's not the last term
        if (i < N) {
            printf(", ");
        }

        // Calculate the next term
        nextTerm = t1 + t2;
        
        // Shift the terms for the next iteration: t1 becomes the old t2, t2 becomes the new nextTerm
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n"); // Newline after the series
}

int main() {
    int N;

    // Prompt user for input
    printf("Enter the number of Fibonacci terms you want to generate: ");
    
    // Read the input
    if (scanf("%d", &N) != 1) {
        // Simple error handling for non-integer input
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
    // Call the function to generate the series
    generateFibonacci(N);
    
    return 0;
}
