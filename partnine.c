#include <stdio.h>

int insertElement(int *arr, int *size, int value, int position) {
    if (position < 0 || position > *size) {
        printf("Vi tri %d khong hop le!\n", position);
        return;
    }
    for (int i = *size;i > position; i--){
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*size)++;
}

int printfArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main(){
    int array[100] = {1, 2, 4, 5, 6};
    int size = 5;
    printf("Mang ban dau: \n");
    printfArray(array, size);
    int newValue = 3;
    int position = 2;
    insertElement(array, &size, newValue, position);
    printf("Mang sau khi them phan tu: \n");
    printfArray(array, size);

    return 0;
}