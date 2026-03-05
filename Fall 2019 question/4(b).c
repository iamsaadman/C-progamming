#include <stdio.h>

int main() {
    FILE *fp;
    float num1, num2, sum;

    fp = fopen("input.txt", "r"); // Open the file in read mode

    // Read the two numbers from the file
    fscanf(fp, "%f", &num1);
    fscanf(fp, "%f", &num2);

    fclose(fp); // Close the file

    sum = num1 + num2; // Add the two numbers

    // Display the sum on the monitor
    printf("Sum of %f and %f is %f\n", num1, num2, sum);

    return 0;
}
