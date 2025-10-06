// REMOVING THE REPEATED ALHABET


#include <stdio.h>
#include<string.h>
int main() {
    char str[] = "madam";
    char newStr[50];
    int k = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        int found = 0;

        // CHECK IF STR[i] ALREADY PRESENT IN NEWSTR
        for (int j = 0; j < k; j++) {
            if (str[i] == newStr[j]) {
                found = 1;
                break;
            }
        }

        // IF NOT FOUND ADD IT TO NEWSTR
        if (found == 0) {
            newStr[k] = str[i];
            k++;
        }
    }

    newStr[k] = '\0'; // END THE NEW STRING

    printf("Without Repeated Alphabets: %s", newStr);

    return 0;
}
