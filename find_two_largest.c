#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void) {
    const int N = 5;
    int arr[N];
    printf("Enter %d numbers.\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int large, large2;
    find_two_largest(arr, N, &large, &large2);
    printf("1st = %d, 2nd = %d\n", large, large2);
}

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    *largest = a[0];
    *second_largest = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > *largest) {
            *largest = a[i];
        }
        if (a[i] < *largest && a[i] > *second_largest) {
            printf("At iteration %d.", i);
            *second_largest = a[i];
        }
    }
}

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    *largest = *a;
    *second_largest = *a
    int *p;
    for (p = a; p < a + n; p++) {
        if (*p > *larges
    }
}

