/*
    Subroutine to search using pointer arithmetic.
*/
#include <stdio.h>
#include <stdbool.h>

void fill_array(int a[], int n);
bool search(int a[], int n, int key);

int main(void) {
    int N = 10;
    int a[N];
    printf("Please enter %d ints.\n", N);
    fill_array(a, N);
    printf("Please enter a key to search for: ");
    int key;
    scanf("%d", &key);
    printf("The array contains the key: ");
    printf("%s", search(a, N, key) ? "true\n" : "false\n");
}

void fill_array(int a[], int n) {
    for(int i = 0; i < n; i++) {
        scanf("%d", (a + i));
    }
}

bool search(int a[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (*(a + i) == key) {
            return true;
        }
    }
    return false;
}
