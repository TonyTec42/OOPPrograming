#include<iostream>
#include <vector>

void print(const std::vector<int>& v){
    // they are passed by reference

    for(int i=0;i<v.size();i++){
        std::cout<<v[i]<<" ";
    }
    std::cout<<std::endl;
}
int main(){
    //create a vector

    std::vector<int> v; //empty vector (dynamic array) of integers


    //create and initialize a vector

    std::vector<int> v2 = {1,2,3,4,5};

    print(v2);
    //provide the size of the vector and default value
    std::vector<int> v3(5,10); //vector of size 5 and all values are 10
    print(v3);

    //copy from another vector
    std::vector<int> v4(v2); //copy v2 into v4
    print(v4);
    //get the size(number of elements)

    std::cout<<"Size of v: "<<v.size()<<std::endl;
    std::cout<<"Size of v2: "<<v2.size()<<std::endl;
    //first and last elements

    std::cout<< "v2 first element: "<< v2.front() << std::endl;
    std::cout<< "v2 last element: "<< v2.back() << std::endl;

    //add the elements to the end
    v2.push_back(8);
    v2.push_back(9);
    print(v2);

    //remove from the end
    v4.pop_back();
    print(v4);

    //iterator - object that points to an certain location in the vector 
    // begin() - points to the first element
    // end() - points to one position after/past the last element
    std::cout << *v2.begin() << std::endl; //dereference the iterator to get the value
    std::cout << *(v2.begin() + 2) << std::endl; 
    std::cout << *(v2.end() - 1) << std::endl; //last element
    std::vector<int>::iterator it = v2.begin();
    std::cout<< "First element using iterator: "<< *it << std::endl;
    



    return 0;


}