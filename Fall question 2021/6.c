#include <stdio.h>

#define MAX_CAPACITY 45
#define NUM_SECTIONS 6
#define LAST_FOUR_DIGITS_OF_YOUR_STUDENT_ID 100
int main() {
    int exam_scores[NUM_SECTIONS][MAX_CAPACITY];
    int index, section;

    // Initializing all array values
    for (section = 0; section < NUM_SECTIONS; section++) {
        for (index = 0; index < MAX_CAPACITY; index++) {
            exam_scores[section][index] = (LAST_FOUR_DIGITS_OF_YOUR_STUDENT_ID % 11) + 10;
        }
    }

    // Incrementing scores of section C
    section = 2;
    for (index = 0; index < MAX_CAPACITY; index++) {
        exam_scores[section][index] += (index + 1) * 10;
    }

    // Displaying the final scores for all sections
    for (section = 0; section < NUM_SECTIONS; section++) {
        printf("Section %c Scores:\n", 'A' + section);
        for (index = 0; index < MAX_CAPACITY; index++) {
            printf("%d ", exam_scores[section][index]);
        }
        printf("\n");
    }

    return 0;
}
