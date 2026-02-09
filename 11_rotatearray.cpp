#include<iostream>



void rotateRight(const int src[], int dst[], int size, int k){
    int new_first = size - (k % size); //calculate the index of the new first element after rotation

    //copy from new first till the end
    int i= 0;
    int j = new_first;
    while(j < size){
        dst[i] = src[j];
        i++;
        j++;
    }

    //copy from the start till the new first
    j = 0;
    while(j < new_first){
        dst[i] = src[j];
        i++;
        j++;
    }


}
int main(){
    const int SIZE = 7;

    int list[SIZE] = {1,2,3,4,5,6,7};
    int new_list[SIZE];
    //rotate list
    rotateRight(list, new_list, SIZE, 3);
    //print the list
    for(int i : list){ //range-based for loop

        std::cout<< i <<" ";
    }

    std::cout << std::endl;

    //print the new_list
    for(int i : new_list){ //range-based for loop

        std::cout<< i <<" ";
    }

}