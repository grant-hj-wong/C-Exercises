#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, int argv[]) {
    const int SIZE = 128;
    char *buf = malloc(sizeof(char) * SIZE);
    fgets(buf, SIZE, stdin);
    char *bufexclam = malloc(sizeof(char) * (SIZE + 3));
    strncpy(bufexclam, buf, strlen(buf)-1);
    strcat(bufexclam, "!!!\n");
    fputs(bufexclam, stdout);
    return 0;
}
