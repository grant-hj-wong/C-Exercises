#include <stdio.h>
#include <stdlib.h>

int interactive();
int batch(int *bfile);

int main (int argc, int *argv[]) {
    if (argc == 1) { // interactive mode
        interactive();
    } else if (argc == 2) { // batch mode
        batch(argv[1]);
    } else { // error, too many arguments
        fputs("error: argc > 1\n", stderr);
    }
    return 0;
}

int interactive() {
    printf("interactive mode\n");
    return 0;
}

int batch(int *bfile) {
    printf("batch mode, file: %s\n", (char *)bfile);
    return 0;
}
