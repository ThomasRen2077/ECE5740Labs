#include<stdio.h>

void vector_add(int *a, int *b, int *c, int n) {
    int i;
    for(i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }
}

int main() {
    int n = 4;

    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    int c[n];

    vector_add(a, b, c, n);

    return 0;
}