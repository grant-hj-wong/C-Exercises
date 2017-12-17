#include <stdio.h>

#define ROWS 3
#define COLS 3
#define N (ROWS * COLS)

void fill_array(int a[][COLS], int n);
int sum_two_dimensional_array(int a[][COLS], int n);

int main(void) {
    int a[ROWS][COLS];
    printf("Please enter elements in row-major order for a %d x %d array:\n",\
        ROWS, COLS);
    fill_array(a, N);
    printf("Sum of %d x %d array = %d\n", ROWS, COLS,\
        sum_two_dimensional_array(a, N));
}

void fill_array(int a[][COLS], int n) {
    // Each iteration increments the second dimension until COLS - 1, then
    // increase the second dimension once, then increment the second dimension
    // each iteration again. We use this behaviour to use a single loop instead
    // of a nested loop.
    //
    // The loop begins with p pointing to a[0][0], increments of p make it point
    // to a[0][1], a[0][2], a[0][3], and so on. When P reaches a [0][COLS - 1],
    // the next increment makes p point to a[1][0]. The process continues until
    // p goes past a[ROWS - 1][COLS - 1]. Page 268 of King.
    int *p;
    for (p = &a[0][0]; p <= &a[ROWS - 1][COLS - 1]; p++) {
        scanf("%d", p);
    }
}

int sum_two_dimensional_array(int a[][COLS], int n) {
    int *p, sum = 0;
    for (p = &a[0][0]; p <= &a[ROWS - 1][COLS - 1]; p++) {
        sum += *p;
    }
    return sum;
}
