#include <string.h>
#include <stdbool.h>

bool canConstruct(char* ransomNote, char* magazine) {
    int i, j;
    bool found = false;

    for (i = 0; i < strlen(ransomNote); i++) {
        for (j = 0; j < strlen(magazine); j++) {
            if (ransomNote[i] == magazine[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        } else {
            magazine[j] = ' ';
        }
    }

    for (i = 0; i < strlen(magazine); i++) {
        if (magazine[i] != ' ') {
            return false;
        }
    }

    return true;
}