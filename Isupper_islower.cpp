// Online C++ compiler to run C++ program online
#include <iostream>
#include <cctype>
int main() {
 
    char ch;
    std::cout <<"according to islower" << std::endl;
    std::cin >> ch;
    
    while (ch != 'x'){
        if (islower(ch)){
            std::cout << ch << " is lowercase!" << std::endl;
            std::cin >> ch;
                } else if (!islower(ch)) {
                    std::cout << ch << " is not a lowercase letter!" << std::endl;
                     std::cin >> ch;
                    }
            }
    
    char ch2;
    std::cout <<"according to isupper" << std::endl;
    std::cin >> ch2;
   
   while (ch2 != 'x'){
        if (isupper(ch2)){
            std::cout << ch2 << " is uppercase!" << std::endl;
            std::cin >> ch2;
                } else if (!isupper(ch2)) {
                    std::cout << ch2 << " is not a uppercase letter!" << std::endl;
                     std::cin >> ch2;
                    }
            }
   
    char ch3;
    int x;
    std::cout <<"converting to lower/uppercase" << std::endl;
     std::cout <<"[1] convert to uppercase. \n[2] convert to lowercase" << std::endl;
    std::cin >> x;
    
    while (x != 0){
    if (x == 1){
        std::cout << "enter character: ";
        std::cin >> ch3;
        
        char y = toupper(ch3);
        std::cout << ch3 << " converted to " << y << std::endl;
        
        std::cout <<"[1] convert to uppercase. \n[2] convert to lowercase" << std::endl;
        std::cin >> x;
        } else if (x == 2){
            std::cout << "enter character: ";
            std::cin >> ch3;
            
            char y = tolower(ch3);
            std::cout << ch3 << " converted to " << y << std::endl;
            
            std::cout <<"[1] convert to uppercase. \n[2] convert to lowercase" << std::endl;
            std::cin >> x;
        }
    }

   

    return 0;
}
