#include<iostream>
#include<string>
class Hello{
    public:
    //intializer list
        Hello(): size(0), messages(nullptr){
            std::cout<<"No arg constructor for " << this <<std::endl;
        }
        //constructor with arguemants
        Hello(int n): size(n), messages(new std::string[n]){
            std::cout<<"Parameterized constructor for " << this <<std::endl;
            messages = new std::string[n];

            //intialize a dynamic array
            for(int i=0; i<n; i++){
                messages[i] = (i%2) ? "Welcome " + std::to_string(i) : "Not welcome" + std::to_string(i);
            }
            //allocate a set of strings into to the heap
        }


        //copy constructor
        Hello(const Hello& other){
            std::cout<<"Copy constructor for " << this <<std::endl;
            size = other.size;
            messages = new std::string[size]; //allocate new memory for the copy
            for(int i=0; i<size; i++){
                messages[i] = other.messages[i]; //copy the content of the array
            }
        }
        //destructor
        ~Hello(){
            std::cout<<"Destructor for " << this <<std::endl;
            if(messages){
                  delete[] messages; //deallocate the memory
            }
          
        }

        void sayHello(){
            std::cout<<"Hello World!"<<std::endl;
        }
        
        
        //cannot modify the data members of the calss is what a const is
        void bye()const{
            std::cout<<"Bye World!"<<std::endl;
        }
    
    private:
        std::string* messages;
        int size;

    };
int main(void){
    //crete helloobject dynamically
    Hello* hi = new Hello();

    //call bye method
    hi->bye();

    //create an object with argument constructor 0 - dynamically in the heap - object istself in the heap which stores an array of strings in the heap
    Hello* hi2 = new Hello(10);




    //deallocate the memory
    delete hi;
    delete hi2;
    
   /* for(int i = 0; i < 100; i++){
        Hello(99999999);
    }
    return 0;
    */

    Hello hi3(20);
    Hello hi4 = hi3;
    


}