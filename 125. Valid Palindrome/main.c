#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* s) {
    // Convert all uppercase letters to lowercase
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 'a' - 'A';
        }
    }
    
    // Remove all non-alphanumeric characters
    char* p = s;
    while (*p) {
        if (!isalpha(*p) && !isdigit(*p)) {
            *p = '\0';
        }
        p++;
    }
    
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return false;
        }
    }
    
    return true;
}
