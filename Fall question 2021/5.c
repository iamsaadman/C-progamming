#include <stdio.h>
#include <string.h>

void reverse_string(char str[], int len)
{
    if (len == 0)
    {
        return;
    }
    else
    {
        printf("%c", str[len-1]);
        reverse_string(str, len-1);
    }
}

int main()
{
    char name[] = "John Doe";
    int len = strlen(name);
    printf("Name: %s\n", name);
    printf("Name in reverse order: ");
    reverse_string(name, len);
    printf("\n");
    return 0;
}
