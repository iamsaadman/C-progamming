#include <stdio.h>

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
float divide(int x, int y);

int main() {
    int num1, num2;
    printf("Enter two integer numbers: ");
    scanf("%d %d", &num1, &num2);

    int addition = add(num1, num2);
    int subtraction = subtract(num1, num2);
    int multiplication = multiply(num1, num2);
    float division = divide(num1, num2);

    printf("Addition: %d\n", addition);
    printf("Subtraction: %d\n", subtraction);
    printf("Multiplication: %d\n", multiplication);
    printf("Division: %.2f\n", division);

    return 0;
}

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

float divide(int x, int y) {
    return (float)x / y;
}
