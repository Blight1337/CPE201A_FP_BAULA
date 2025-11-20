#include <iostream>

float CubeCalc(float x);

int main() {
    float x;
    std::cout << "Computing for the Volume of a cube \nEnter side measuremet: ";
    std::cin >> x;
    std::cout << "\nVolume of your cube: " << CubeCalc(x);
    return 0;
}

float CubeCalc(float x){
    return x * x * x;
}
