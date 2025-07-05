IMPLEMENTATION OF SORTING ALGORITHM WITH SELCTION SORT


#include <stdio.h>


void selectionSort(int array[], int size) {
    int i, j, minIndex, temp;

    
    for (i = 0; i < size - 1; i++) {
        
        minIndex = i;

       
        for (j = i + 1; j < size; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }

        
        if (minIndex != i) {
            temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}


void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}


int main() {
    int data[] = {64, 25, 12, 22, 11};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Original array:\n");
    printArray(data, size);

    selectionSort(data, size);

    printf("Sorted array:\n");
    printArray(data, size);

    return 0;
}
