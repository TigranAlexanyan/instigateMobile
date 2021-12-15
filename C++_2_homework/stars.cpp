#include <iostream>

int main() {
   int n;
   char op;
   std::cout << "Please enter sign (/,!,@,#): ";
   std::cin >> op;
   std::cout << "Please enter number: ";  
   std::cin >> n;
    if(op == '/'){
        op = '/';
    }else if(op == '!'){
        op = '!';
    }else if(op == '@'){
        op = '@';
    }else if(op == '#'){
       op = '#';
    }else {
      op = '*';
    }
   for(int i = 0; i <= n; i++){
     for(int j = 0; j <=n - i; j++){
        std::cout << ' ';
     }

     for(int k = 0; k < 2 * i - 1; k++){
      if(i == 1 || i == n){
       std::cout << op;
      }else {
        if(k == 0 || k == 2 * i - 2){
           std::cout << op; 
        }else {
          std::cout << ' ';
        }          
      }
     }
     std::cout << std:: endl;
   }
}
