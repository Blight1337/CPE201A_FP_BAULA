

#include <iostream>
// Define the structure
struct Measures {
int length;
int width;
};

struct Comp {
int area;
int perim;
};

int main() {

Measures rect1;
Measures rect2;
std::cout << "Enter length (Rectangle 1) ";
std::cin >> rect1.length;
std::cout << "\n";
std::cout << "Enter width (Rectangle 1): ";
std::cin >> rect1.width;

std::cout << "\n";
std::cout << "Enter length (Rectangle 2): ";
std::cin >> rect2.length;
std::cout << "\n";
std::cout << "Enter width (Rectangle 2): ";
std::cin >> rect2.width;

Comp recta1;
Comp recta2;

recta1.area = rect1.length * rect1.width;
recta1.perim = rect1.length + rect1.length + rect1.width + rect1.width;

recta2.area = rect2.length * rect2.width;
recta2.perim = rect2.length + rect2.length + rect2.width + rect2.width;
// Print datum
std::cout << "Rectangle 1 area: " << recta1.area << std::endl;
std::cout << "Rectangle 1 Perimiter: " << recta1.perim << std::endl;
std::cout <<std::endl;
std::cout << "Rectangle 2 area: " << recta2.area << std::endl;
std::cout << "Rectangle 2 Perimiter: " << recta2.perim << std::endl;
return 0;
}
