#include <stdio.h>

void fill_array(int a[], const int n);
int ptr_sum_array(int a[], const int n);

int main(void) {
    const int N = 10;
    int a[N];
    printf("Please enter %d ints.\n", N);
    fill_array(a, N);
    printf("The sum of the array is: %d.\n", ptr_sum_array(a, N));
}

void fill_array(int a[], const int n) {
    int *p;
    for (p = a; p < a + n; p++) {
        scanf("%d", p);
    }
}

int ptr_sum_array(int a[], const int n) {
    int *p, sum = 0;
    for (p = a; p < a + n; p++) {
        sum += *p;
    }
    return sum;
}
