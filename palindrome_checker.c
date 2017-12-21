#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define MSG_SIZE 255

bool is_pal_rec(char msg[], int start, int end);
bool is_palidrome(char msg[]);
void remove_punct_and_make_lower_case(char msg[]);

int main(void) {
    printf("Enter a message: ");
    char msg[MSG_SIZE];
    fgets(msg, MSG_SIZE, stdin);
    remove_punct_and_make_lower_case(msg);
    printf("%s", msg);
    if (is_palidrome(msg)) {
        printf("Palindrome.\n");
    } else {
        printf("Not a palidrome.\n");
    }
}

bool is_pal_rec(char msg[], int start, int end) {
    if (start == end) {
        return true;
    }
    printf("msg[start] = %c, msg[end] = %c\n", msg[start], msg[end]); 
    if (msg[start] != msg[end]) {
        return false;
    }
    if (start < end + 1 ) {
        return is_pal_rec(msg, start + 1, end - 1);
    }
    return true;
}

bool is_palidrome(char msg[]) {
    int n = strlen(msg);
    if (n == 0) {
        return true;
    }
    return is_pal_rec(msg, 0, n - 1);
}

void remove_punct_and_make_lower_case(char msg[]) {
    char *src = msg, *dst = msg;
    while (*src) {
        if (ispunct((unsigned char) *src)) {
            /* Skip this character */
            src++;
        }
        else if (isupper((unsigned char) *src)) {
          /* Make it lowercase */
            *dst++ = tolower((unsigned char) *src);
            src++;
        }
        else if (src == dst) {
          /* Increment both pointers without copying */
            src++;
            dst++;
        }
        else {
            /* Copy character */
            *dst++ = *src++;
        }
    }
    *dst = 0;
}
