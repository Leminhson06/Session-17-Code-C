#include <stdio.h>

int sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int printfArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {5, 2, 9, 1, 7, 6};
    int size = sizeof(array)/sizeof(arr[0]);
    printf("Mang ban dau: \n");
    printfArray(array, size);
    sortArray(array, size);
    printf("Mang sau khi sap xep: \n");
    printfArray(array, size);

    return 0;
}
