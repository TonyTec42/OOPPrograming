#include<iostream>
class Hello{
    public:
        Hello(){
            std::cout<<"No arg constructor for " << this <<std::endl;
        }
        void sayHello(){
            std::cout<<"Hello World!"<<std::endl;
        }
        //cannot modify the data members of the calss is what a const is
        void bye()const{
            std::cout<<"Bye World!"<<std::endl;
        }
    
    private:
        int a;
};

int main(void){
    //crete helloobject dynamically
    Hello* hi = new Hello();
    hi->bye();


    //deallocate the memory
    delete hi;
    
    return 0;
}