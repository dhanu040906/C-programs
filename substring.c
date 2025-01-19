#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char substr[] = "world";

    // Find the position of the substring
    char *pos = strstr(str, substr);

    if (pos != NULL) {
        // Calculate the length of the remaining string after the replacement
        int remaining_len = strlen(str) - strlen(substr) + 1;

        // Shift the remaining characters to the left
        memmove(pos, pos + strlen(substr), remaining_len);

        // Fill the vacated space with spaces
        memset(pos, ' ', strlen(substr));
    }

    printf("Modified string: %s\n", str);

    return 0;
}
