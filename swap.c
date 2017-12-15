#include <stdio.h>

void swap(int *p, int *q);

int main(void) {
    int i, j;
    printf("Enter an int for i:\n");
    scanf("%d", &i);
    printf("Enter an int for j:\n");
    scanf("%d", &j);
    swap(&i, &j);
    printf("post swap: i = %d, j = %d", i, j);
}

void swap(int *p, int *q) {
    int temp = *q;
    *q = *p;
    *p = temp;
}
