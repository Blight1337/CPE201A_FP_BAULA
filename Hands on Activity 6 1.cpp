
#include <iostream>

int multi(int a, int b); // miltiply

int divi(int a, int b); // divide

int add(int a, int b); // addtiont

int sub(int a, int b); // subtract

int main() {
// 2.1 Create a program in C++ that will add, subtract, divide, multiply for a 2 user-input integer values. Use functions in the program.

// 2.2 Create a program in C++ that will convert a user-input Farenheight to Celcius and vice versa. Use functions in the program.
//f to c minus 32: c to f times 1.8 plus 32

// 2.3 Create a program in C++ that will convert dollars into pesos and vice versa. Use functions in the program.

int x;
std::cout << "Chose operation:\n[1]Math operations \n[2]temp conversions (F' & C') \n[3]Money conversion (Pesos & Dollars) \n[0]End program \nInput: ";
std::cin >> x;
while (x != 0) {
    switch (x){
        case 1:
            int f,a,b;
            std::cout << "input numbers to be operated on \nfirst number: ";
            std::cin >> a;
            std::cout << "second number: ";
            std::cin >> b;
            std::cout << "[1] Add \n[2] Subtract \n[3]Multiply \n[0] to end \ninput order: ";
            std::cin >> f;
    
            while (f != 0){
                if (f == 1){
                        std::cout << add(a,b);
                        std::cout << "\ninput order: ";
                        std::cin >> f;
                    } else if (f == 2) {
                        std::cout << sub(a,b);
                        std::cout << "\ninput order: ";
                        std::cin >> f;
                    } else if (f == 3) {
                        std::cout << multi(a,b);
                        std::cout << "\ninput order: ";
                        std::cin >> f;
                    } else if (f == 4) {
                        std::cout << divi(a,b);
                        std::cout << "\ninput order: ";
                        std::cin >> f;
                    } else {
                        std::cout << "invalid\n";
                        std::cout << "input order: ";
                        std::cin >> f;
                    }
            }
            std::cout << "\ninput operation: ";
            std::cin >> x;    
        break;
        
        // temp conversion
        case 2:
            int y;
            float cel;
            float far;
            std::cout << "Convert: " << std::endl;
            std::cout << "[1]Farenheight to Celcius \n[2] Celcius to farenheight \nInput: ";
            std::cin >> y;
            if (y == 1){
                std::cout << "Enter temp (F'): ";
                std::cin >> far;
                cel = (far - 32) / 1.8;
                std::cout << "Converted F' to C' " << cel;
                
                }   else if (y == 2){
                        std::cout << "Enter temp (C'): ";
                        std::cin >> cel;
                        far = (cel * 1.8) + 32;
                        std::cout << "Converted C' to F' " << far;
                }   else {
                    std::cout << "Invalid";
                }
            std::cout << "\ninput operation: ";
            std::cin >> x;
            
        break;
        
         //money converter
        case 3:
            //peso to dollar = peso * 0.017
            //dollar to peso = dollar * 58.12
            int z;
            float peso;
            float dol;
            std::cout << "Convert: " << std::endl;
            std::cout << "[1]Peso to Dollar \n[2] Dollar to peso \nInput: ";
            std::cin >> z;
            if (z == 1){
                std::cout << "Enter amount: ";
                std::cin >> peso;
                dol = peso * 0.017;
                std::cout << "Converted Peso to Dollar: " << dol;
                
                }   else if (z == 2){
                        std::cout << "Enter amount: ";
                        std::cin >> dol;
                        peso =  dol * 58.12;
                        std::cout << "Converted Dollar to peso: " << peso;
                }   else {
                    std::cout << "Invalid";
                }
                std::cout << "\ninput operation: ";
                std::cin >> x;
        break;
        
        default:
            std::cout << "invalid, input again: ";
            std::cin >> x;
        break;
        }
        
    }
    std::cout << "Thank you! ^w^";
    return 0;
}

int divi(int a, int b){
   return a / b;
}

int multi(int a, int b){
   return a * b;
}

int add(int a, int b){
   return a + b;
}
   
int sub(int a, int b){
   return a - b;
}
