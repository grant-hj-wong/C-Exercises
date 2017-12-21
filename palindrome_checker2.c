#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MSG_SIZE 255

int is_pali_rec(char str[], char *p, char *q);
int is_palidrome(char str[]);

int is_pali_rec(char str[], char *p, char *q) {
    int n = strlen(str);
    p = str, q = str + n - 1;
    if (p == q) return 1;
    if (*p != *q) return 0;
    if (q = p + 1) return 1;
    return is_pali_rec(str, p + 1, q - 1);
}

int is_palidrome(char str[]) {
    int n = strlen(str);
    if (n < 2) {
        return 1;
    } else {
        char *p, *q;
        return is_pali_rec(str, p, q);
    }
}

void main(void) {
    printf("Please enter a string to be checked if it's a palidrome: ");
    char str[MSG_SIZE];
    fgets(str, MSG_SIZE, stdin);
    // fgets() stores the newline and whitespaces, remove them, store in
    // cleaned version.
    char clean_str[strlen(str)], *p = str, *q = clean_str;
    int offset = 0; // Initialise to 1 to account for null character.
    while (p < str + strlen(str)) {
        if (isalnum(*p)) {
            *q = tolower(*p);
            q++;
            p++;
        } else {
            offset++;
            p++;
        }
    }
    *q++ = '\0';
    
    if (is_palidrome(clean_str)) {
        printf("The string is a palidrome!\n");
    } else {
        printf("The string is not a palidrome.\n");
    }
}

