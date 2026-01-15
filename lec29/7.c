// to checlk Palindrome

#include <stdio.h>

int palindrome(int arr[], int start, int end) {
    // Base case: if start >= end, it's a palindrome
    if (start >= end) {
        return 1;
    }
    // If mismatch found
    if (arr[start] != arr[end]) {
        return 0;
    }
    // Recursive call
    return palindrome(arr, start + 1, end - 1);
}

int main() {
    int arr[] = {1, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = palindrome(arr, 0, n - 1);
    if (result == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
