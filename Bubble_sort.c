#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *array;
    int size;
} BubbleSortADT;

BubbleSortADT* createBubbleSortADT(int size) {
    BubbleSortADT* newADT = (BubbleSortADT*)malloc(sizeof(BubbleSortADT));
    if (newADT == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    newADT->array = (int*)malloc(size * sizeof(int));
    if (newADT->array == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    newADT->size = size;
    return newADT;
}

void bubbleSort(BubbleSortADT* adt) {
    int i, j, temp;
    for (i = 0; i < adt->size - 1; i++) {
        for (j = 0; j < adt->size - i - 1; j++) {
            if (adt->array[j] > adt->array[j + 1]) {
        
                temp = adt->array[j];
                adt->array[j] = adt->array[j + 1];
                adt->array[j + 1] = temp;
            }
        }
    }
}


void displayArray(BubbleSortADT* adt) {
    printf("Sorted Array: ");
    for (int i = 0; i < adt->size; i++) {
        printf("%d ", adt->array[i]);
    }
    printf("\n");
}


void destroyBubbleSortADT(BubbleSortADT* adt) {
    free(adt->array);
    free(adt);
}

int main() {

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    BubbleSortADT* myBubbleSortADT = createBubbleSortADT(size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &myBubbleSortADT->array[i]);
    }

    bubbleSort(myBubbleSortADT);
    displayArray(myBubbleSortADT);

    
    destroyBubbleSortADT(myBubbleSortADT);

    return 0;
}
