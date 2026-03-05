#include <stdio.h>

int digitSum(int number);
int digitPosition(int number, int digit);

int main() {
    int number, sum, position, digit;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    sum = digitSum(number);

    printf("Sum of digits in %d is %d\n", number, sum);

    printf("Enter a digit to find its position in %d: ", number);
    scanf("%d", &digit);

    position = digitPosition(number, digit);

    if (position == -1) {
        printf("%d not found in %d\n", digit, number);
    } else {
        printf("%d is at position %d in %d\n", digit, position, number);
    }

    return 0;
}

int digitSum(int number) {
    int sum = 0;

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

int digitPosition(int number, int digit) {
    int position = 1;

    while (number > 0) {
        if (number % 10 == digit) {
            return position;
        }

        number /= 10;
        position++;
    }

    return -1;
}
