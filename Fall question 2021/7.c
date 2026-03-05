#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello world.";
    char str2[] = "Isn't it a great morning so far?";
    char str3[] = "USE_YOUR_NICKNAME_HERE";
    char str4[] = "To be a champion, become a UIUian!";

    char nickname[] = "Shajid";

    // Replace the nickname in the third string
    strcpy(str3 + 4, nickname);

    // Construct the final string with title casing
    char final_str[100];
    sprintf(final_str, "%c%s. %s %c%s",
            toupper(str1[0]), str1+1,
            str2,
            toupper(str3[0]), str3+1);

    // Print the final string
    printf("%s\n", final_str);

    return 0;
}
