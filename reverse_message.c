#include <stdio.h>
#include <string.h>

void reverse_string(char msg[]);

int main(void) {
    printf("Please enter a message to be reversed: ");
    char msg[255];
    fgets(msg, 255, stdin);
    reverse_string(msg);
    printf("The message reversed is: %s\n", msg);

}

void reverse_string(char msg[]) {
    char *start = msg;
    char *end = start + strlen(msg) - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
