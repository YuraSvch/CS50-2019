#include <stdio.h>
#include <string.h>

int main() {
    char username[50];

    printf("Enter your username: ");
    if (fgets(username, sizeof(username), stdin)) {
        size_t len = strlen(username);
        if (len > 0 && username[len-1] == '\n') {
            username[len-1] = '\0';
        }

        printf("hello, %s\n", username);
    } else {
        printf("Failed to read input.\n");
    }

    return 0;
}
