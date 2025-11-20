#include <iostream>
#include <cmath>

double squareX(double x);
double squareY(double y);

int main() {
    double x,y,z,h;
    std::cout << "Computing for Hypotenuse of a RIGHT Triangle \nEnter side length 1: ";
    std::cin >> x;
    std::cout << "\nEnter side length 2: ";
    std::cin >> y;
    
    z = squareX(x) + squareY(y);
    h = std::sqrt(z);
    std::cout << "\nHypotenuse of your triangle: " << h;
    return 0;
}

double squareX(double x){
    return x * x;
}
double squareY(double y){
    return y * y;
}
