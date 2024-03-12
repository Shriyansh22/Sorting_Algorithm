#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];


    i = 0;
    j = 0;
    k = left; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}


void merge_sort(int arr[], int left, int right) {
    if (left < right) {
    
        int mid = left + (right - left) / 2;

        
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);

    
        merge(arr, left, mid, right);
    }
}


void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main() {
    int arr[] = {12, 4, 5, 6, 7, 3, 1, 15};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    print_array(arr, arr_size);


    merge_sort(arr, 0, arr_size - 1);

    printf("Sorted array: \n");
    print_array(arr, arr_size);

    return 0;
}
