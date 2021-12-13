#include <iostream>

void sum(int a, int b){
    std::cout << "a + b = " << a + b << std::endl;
}

void compare(int a, int b){
    if(a > b){
     std::cout << "Maximum value: " << a << std::endl;
     std::cout << "Minimum value: " << b << std::endl; 
    }else{
     std::cout << "Minimum value: " << a << std::endl;
     std::cout << "Maximum value: " << b << std::endl;
    }
}

int main() {
   int numberOne;
   int numberTwo;
   std::cout << "Please enter numberOne: ";
   std::cin >> numberOne;
   std::cout << "Please enter numberTwo: ";
   std::cin >> numberTwo;
   sum(numberOne, numberTwo);
   compare(numberOne, numberTwo);
   return 0;
}
