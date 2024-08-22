#include <iostream>
#include <cstdio>

void bubblesort(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {3,1,2,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "before->";
    printArray(arr,size);
    std::cout << "after-> ";
    bubblesort(arr,size);
    printArray(arr,size);
}