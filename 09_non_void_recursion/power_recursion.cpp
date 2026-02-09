#include <iostream>
int power(int base, int exp){
    //base case
    if(exp == 0){
        printf("I am power (%d, %d). I know the answer is 1! \n\n", base, exp);
        return 1;
    }
    printf("I am power (%d, %d).\n", base, exp);
    printf( "I remeber %d and ask power(%d, %d) for help. \n\n", base, base, exp -1);
    int help = power(base, exp - 1);
    printf("I am power (%d. %d). \n", base, exp);

    printf("power(%d, %d) returns %d \n", base, exp -1, help);
    return base * power(base, exp -1);
}   
int main(void){

    std::cout << power(2,10) << std::endl;
    return 0;
}