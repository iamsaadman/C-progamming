#include <stdio.h>
#include <string.h>

#define MAX_CANDIDATES 50
#define MAX_NAME_LENGTH 100
#define MAX_EMAIL_LENGTH 100
#define MAX_PASSWORD_LENGTH 100

// Define the candidate structure
struct candidate {
    char name[MAX_NAME_LENGTH];
    char email[MAX_EMAIL_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
    int test_marks;
};

// Define the login function
void login(struct candidate candidates[], int num_candidates) {
    char email[MAX_EMAIL_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
    int i;

    printf("Enter your email: ");
    scanf("%s", email);
    printf("Enter your password: ");
    scanf("%s", password);

    for (i = 0; i < num_candidates; i++) {
        if (strcmp(email, candidates[i].email) == 0 && strcmp(password, candidates[i].password) == 0) {
            printf("Total marks: %d\n", candidates[i].test_marks);
            return;
        }
    }

    printf("Wrong Email and/or Password\n");
}

// Main function
int main() {
    struct candidate candidates[MAX_CANDIDATES];
    int num_candidates;
    int i;

    // Take input for all the candidates
    printf("Enter the number of candidates: ");
    scanf("%d", &num_candidates);

    for (i = 0; i < num_candidates; i++) {
        printf("Candidate %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", candidates[i].name);
        printf("Email: ");
        scanf("%s", candidates[i].email);
        printf("Password: ");
        scanf("%s", candidates[i].password);
        printf("Test marks: ");
        scanf("%d", &candidates[i].test_marks);
    }

    // Call the login function
    login(candidates, num_candidates);

    return 0;
}
