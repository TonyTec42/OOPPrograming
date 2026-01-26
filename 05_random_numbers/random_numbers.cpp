#include<iostream>
#include<random>

int main(){
    //generate the seed
    std::random_device rd;

    //create random number engine and initialize it with a seed

    std::mt19937 eng(rd());

    //define a distribution
    std::uniform_int_distribution<int>dist(1,100);
    //generate random number
    for(int i = 0; i< 20; i++){
    int x = dist(eng);

    std::cout << x << std::endl;
    
    }
    return 0;

}