#include <iostream>
#include <string>
void print_combinations(int n);
void combinations_helper(std::string& s, int n, int index);
int main(void){
    std::cout << "Enter size: ";
    int n;
    std::cin >> n;
    print_combinations(n);
    return 0;

}

void print_combinations(int n){
    std::string s(n, 'a');
    //call the helper function
    combinations_helper(s, n, 0);

}

void combinations_helper(std::string& s, int n, int index){
    //base case
    if(index >= n){
        std::cout << s << std::endl;
        return;
    }
    while(s[index] <= 'z'){

        //recursive call for the next character
        combinations_helper(s, n, index + 1);
        s[index]++;
    }
    s[index] = 'a';

}