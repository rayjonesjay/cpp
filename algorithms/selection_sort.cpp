#include <iostream>

void printArray(int arr[],int size) {
    for (int i = 0; i < size; i++) {
        if (i < size-1){
                std::cout << arr[i] << ",";
        }else{
            std::cout << arr[i];
        }
			}
		std::cout << std::endl;
}

void selectionsort(int arr[],int size) {
    for (int i = 0; i < size-1; i++) {
        int index = i;
        for (int j = i + 1 ; j < size; j++){
            if (arr[j] < arr[index]){
                index = j;
            }
        }
        if (index != i) {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index]= temp;
        }
    }
}
int main(void) {
	int arr[] = {4,1,2,5,7,8,9,3};
	std::cout << "before: ";
	int length = sizeof(arr) / sizeof(arr[0]);
	printArray(arr,length);
	selectionsort(arr,length);
	std::cout << "after:  ";
	printArray(arr,length);
}
