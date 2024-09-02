#include <stdio.h>

// Recursive function to find GCD (Greatest Common Divisor) using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find LCM using the relationship between GCD and LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    printf("Input First number: ");
    scanf("%d", &num1);
    printf("Input Second number: ");
    scanf("%d", &num2);

    int result = lcm(num1, num2);

    printf("LCM of %d and %d = %d\n", num1, num2, result);

    return 0;
}
