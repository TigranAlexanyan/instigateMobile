#include <iostream>

int preFix(int x){
   x = x + 1;
   return x;
}

int postFix(int &x){
   x = x + 1;
   return x;
}

int main(){
  int x;
  int *p = &x;
  p = &x;
  int pre;
  std::cout << "Please enter number: ";
  std::cin >> x;
  std::cout << "Please enter number: ";
  std::cin >> pre; 
  std::cout << postFix(x);
  std::cout << "\n";
  std::cout << preFix(pre);
  std::cout << "\n";
  return 0;
}
