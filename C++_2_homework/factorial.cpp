#include <iostream>


int main (){
  int facNum;
  int x = 1;
  std::cout << "Mutqagreq tiv: ";
  std::cin >> facNum; 
  for(int i = 2; i <= facNum; i++){
        x*=i;
  }
  std::cout << x << std::endl;
}
