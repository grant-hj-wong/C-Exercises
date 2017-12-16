// Testing processing columns of a multidimensional array.

#include <stdio.h>

int const ROWS = 5;
int const COLS = 3;

void fill_array(int arr[][COLS], int const ROWS, int const COLS);
void print_array(int arr[][COLS], int const ROWS, int const COLS);
void zero_col(int arr[][COLS], int const ROWS, int const COLS, int i);

int main(void) {
    int arr[ROWS][COLS];
    int (*p)[COLS];
    printf("Please fill the array: \n");
    fill_array(arr, ROWS, COLS); // or, to save time, use premade array.
    printf("--------------------\n");
    print_array(arr, ROWS, COLS);
    printf("--------------------\n");
    zero_col(arr, ROWS, COLS, 2);
    print_array(arr, ROWS, COLS);
}

void fill_array(int arr[][COLS], int const ROWS, int const COLS) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Row %3d, Col %3d\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void print_array(int arr[][COLS], int const ROWS, int const COLS) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
}

void zero_col(int arr[][COLS], int const ROWS, int const COLS, int i) {
    if (i < 0 || i > COLS - 1) {
        printf("Column index out of range!");
    }
    int (*p)[COLS]; // This pointer points to an array of length COLS.
    for (p = a; p < a + ROWSface; p++) {
        (*p)[i] = 0;                        
    }
}
