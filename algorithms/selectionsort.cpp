#include <iostream>
#include <cstdio>
using namespace std;


void print_arr(int arr[], int size) {
    for (int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    cout << endl;
}

void selection_sort(int arr[], int size) {
    for (int i = 0; i < size-1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++){
            // look for then index of the largest element
            if (arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        cout << arr[minIndex] << endl;
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = arr[i];
        }
    }
}

int main() {
    int arr[] = {3,1,2,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    print_arr(arr,size);
    selection_sort(arr,size);
    print_arr(arr,size);
}
