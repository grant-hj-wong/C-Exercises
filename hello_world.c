/* hello_world.c - Grant's first C program
   Created by Grant Wong on 26/10/2017 */

#include <stdio.h>

void print_hello_world();

int main (int argc, char **argv){
    print_hello_world();
    return 0;
}

void print_hello_world(){
    const char line[] = "Hello, world!\n";
    printf("%s", line);
}

