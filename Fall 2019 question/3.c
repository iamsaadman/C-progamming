#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 4

struct student {
    char name[50];
    int id;
    float marks;
};

int main() {
    struct student students[NUM_STUDENTS];
    int i, min_index = 0, max_index = 0;

    // read in data for each student
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter name, id, and marks for student %d: ", i+1);
        scanf("%s %d %f", students[i].name, &students[i].id, &students[i].marks);
    }

    // find the minimum and maximum marks holders
    for (i = 1; i < NUM_STUDENTS; i++) {
        if (students[i].marks < students[min_index].marks) {
            min_index = i;
        }
        if (students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }

    // print out the results
    printf("\n\nStudent Report:\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%-10s %2d %.1f\n", students[i].name, students[i].id, students[i].marks);
    }
    printf("Minimum marks holder student: %s %d\n", students[min_index].name, students[min_index].id);
    printf("Maximum marks holder student: %s %d\n", students[max_index].name, students[max_index].id);

    return 0;
}
