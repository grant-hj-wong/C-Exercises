#include <stdio.h>
#include <string.h>

int main(void) {
    printf("Please enter a message to be reversed: ");
    char msg[255];
    scanf("%s", msg);
    char *p = &msg[strlen(msg) - 1]; // Point to the last character.
    printf("The message reversed is: ");
    while (p >= msg) {
        printf("%c", *p--);
    }
}
