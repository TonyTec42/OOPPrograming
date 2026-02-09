#include <iostream>
void countdown(int n);


int main(){

    countdown(20);

    return 0;
}

void countdown(int n){

    if(n < 1){
        return; //base case
    }
    std::cout << n << ' ';
    //call the same function
    countdown(n-1); // recursive call
}