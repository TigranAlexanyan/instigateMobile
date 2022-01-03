#include <iostream>

void print_star_desc(int n){
     for(int i = 0;i<=n;i++){
        for(int j = 0;j<n - i;j++){
            std::cout << " ";
         } 
        for(int k =0;k<=i;k++){
            std::cout << "*";
        }
       std:: cout << "\n";
     }
  }

