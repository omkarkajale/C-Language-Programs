#include<stdio.h>

void linear_search_max_nmax(int arr[], int size, int *max, int *nmax) {
    *max = arr[0];
    *nmax = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *nmax = *max;
            *max = arr[i];
        } else if (arr[i] > *nmax && arr[i] != *max) {
            *nmax = arr[i];
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 45, 98, 164, 181, 289702};
    int size = sizeof(arr) / sizeof(int);
    int max_value, nmax_value;

    linear_search_max_nmax(arr, size, &max_value, &nmax_value);

    printf("Maximum value: %d\n", max_value);
    printf("Second maximum value: %d\n", nmax_value);

    return 0;
}
