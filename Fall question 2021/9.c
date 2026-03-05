#include <stdio.h>
#define LAST_FOUR_DIGIT_OF_YOUR_STUDENT_ID 0100
int search(float arr[], float value, int n, int r);

int main() {
    int n, a, r, index;
    float value;

    // input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // declare an array of float values with size n
    float arr[n];

    // input the array elements
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // input the value to search, and the rth occurrence of that value
    printf("Enter the value to search: ");
    scanf("%f", &value);
    printf("Enter the rth occurrence of that value: ");
    scanf("%d", &r);

    // set the value of a
    a = LAST_FOUR_DIGIT_OF_YOUR_STUDENT_ID % 10;

    // call the search function
    index = search(arr, value, a, r);

    // display the result
    if (index == -1) {
        printf("Not Found\n");
    } else {
        printf("Value found at index %d\n", index);
    }

    return 0;
}

// function to search the rth occurrence of a value in an array
int search(float arr[], float value, int n, int r) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
            if (count == r) {
                return i;
            }
        }
    }

    return -1;
}
