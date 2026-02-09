#include <iostream>
void print_digits(int num);

int main(){
    print_digits(12345);
    return 0;
}
void print_digits(int num){

    //base case
    if(num < 10){
        std::cout << num << std::endl;
        return;
    }
    print_digits(num/10);
    std::cout <<num %10 << std::endl;
    


}