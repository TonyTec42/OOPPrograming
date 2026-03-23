#include <iostream>
void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int* doubleArray(int* arr, int size) {

    for (int i = 0; i < size; i++) {
     arr[i] * 2;
    }
    return arr;
}
int* doubleArrNew(const int* arr, int size) {
    //int* newArr[size]; //local array doesnt work
    //create a dynamic array
    int* new_arr = new int[size];
    for (int i = 0; i < size; i++) {
        new_arr[i] = arr[i] * 2;
    }
    return new_arr;
}

int main() {
    const int SIZE = 5;

    int arr[SIZE] = {1, 2, 3, 4, 5};
    printArr(arr, SIZE);

    int* double_array = doubleArray(arr, SIZE);
    printArr(double_array, SIZE);

    int* new_array = doubleArrNew(arr, SIZE);
    printArr(new_array, SIZE);

    for(int i = 0; i < 999999; i++) {
      
        double* d = new double [9999999]; 
        delete[] d;//deallocate the memory to prevent memory leak
    }
    return 0;
}
