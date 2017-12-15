#include <stdio.h>
#include <limits.h>

void fill_arr(int arr[], int n);
void find_first_second_largest(int arr[], int n, int *first_largest, int
*second_largest);

int main(void) {
    const int N = 5;
    printf("Please enter %d integers.\n", N);
    int arr[N];
    fill_arr(arr, N);
    int largest1, largest2, *first_largest, *second_largest;
    first_largest = &largest1;
    second_largest = &largest2;
    find_first_second_largest(arr, N, first_largest, second_largest);
    printf("First largest = %d, Second largest = %d.\n", largest1,
        largest2);
}

void fill_arr(int arr[], int n) {
    int *p;
    for(p = arr; p < arr + n; p++) {
        scanf("%d", p);
    }
}

void find_first_second_largest(int arr[], int n, int *first_largest, int
*second_largest) {
    // When passed an array of length n, search the array for its largest
    // and second largest elements, storing them in the variables pointed
    // to by largest and second_largest.
    // 
    // Solution run-time: O(2n)
    // Possible solution: O(n)
    int *p, *q;
    int avoid = -1;
    *first_largest = INT_MIN;
    // Look for first largest element, trivial.
    for (p = arr; p < arr + n; p++) {
        if (*p > *first_largest) {
            avoid++;
            *first_largest = *p;
        }
    }
    // Look for second largest element, a little more complex.
    *second_largest = INT_MIN;
    for (q = arr; q < arr + n; q++) {
        // Case: 3, 5, 4, 2, 1
        // Expected: (5, 4)
        // Case: 5, 4, 3, 2, 1
        // Expected: (5, 4) 
        // Case: 5, 1, 3, 2, 4
        // Expected: (5, 4) 
        // Case: 1, 2, 3, 4, 5
        // Expected: (5, 4)
        // Case: 1, 1, 1, 1, 1
        // Expected (1, 1)
        if (*q > *second_largest && q != arr + avoid) {
            *second_largest = *q;
        }
    }
}


