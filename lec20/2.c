// REVERSING A STRING


#include <stdio.h>

int main() {
    char str[] = "hii";
    int length = 0;

    // Find the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    // Print the string in reverse order
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}
