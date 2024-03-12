#include <stdio.h>

typedef struct {
} SortingAlgorithm;

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main() {
    SortingAlgorithm sorting_algo;
    int unsorted_array[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(unsorted_array) / sizeof(unsorted_array[0]);

    selection_sort(unsorted_array, n);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", unsorted_array[i]);
    }

    return 0;
}
