
#include <iostream>
#include <string>

int main() {
    // Write C++ code here
    std::string str1 = "5";
    std::string str2 = "95";
    std::string str3 = "59";
    std::string str4 = "50";
    
    int n1 = stoi(str1);
    int n2 = stoi(str2);
    int n3 = stoi(str3);
    int n4 = stoi(str4);
    
    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;
    std::cout << n3 << std::endl;
    std::cout << n4 << std::endl;
    
    std::cout << "\n" << std::endl;
    
    int sum = n1 + n2 + n3 + n4;
    std::cout << sum;
   
    
    

    return 0;
}
