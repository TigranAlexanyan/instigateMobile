#include <iostream>

int main() {
   int n;
   std::cout << "Mutqagreq tiv: ";
   std::cin >> n;
   for(int i = 0; i <= n; i++){
     for(int j = 0; j <=n - i; j++){
        std::cout << ' ';
     }

     for(int k = 0; k < 2 * i - 1; k++){
      if(i == 1 || i == n){
       std::cout << '*';
      }else {
        if(k == 0 || k == 2 * i - 2){
           std::cout << '*'; 
        }else {
          std::cout << ' ';
        }          
      }
     }
     std::cout << std:: endl;
   }
}
