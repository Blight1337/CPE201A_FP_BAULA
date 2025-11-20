#include <iostream>

struct multiple {
    int number;
    int integer;
};

int main() {
 
    multiple one;
    
    std::cout << "enter number: ";
    std::cin >> one.number;
    
    std::cout << "etner integer: ";
    std::cin >> one.integer;
    
    if(one.number % one.integer == 0){ //if remainder is 0 then integer is a multiple
        std::cout << one.number << " is a multiple of " << one.integer;
    } else {
        std::cout << one.number << " is NOT a multiple of " << one.integer;
    }
    
    //divide the first number by the second number; if the result is a whole number with no remainder, then it is a multiple
   

    return 0;
}
