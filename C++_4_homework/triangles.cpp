#include <iostream>

void printStarLeft(int n,char op){
    for(int i = 0; i<=n;i++){
     for(int j =0; j<=i;j++){
        std::cout << op;
     }
      std::cout << "\n"; 
    }
}

void printStarRight(int n,char op){
    for(int i = 0; i<=n;i++){
      for(int j = 0;j<=n-i;j++){
        std::cout << " ";    
      }
      for(int k = 0;k<=i;k++){
        std::cout << op;
      }
      std::cout << "\n";
    }
}

void printStarLeftDown(int n,char op){
     for(int i = 0; i<=n; i++){
        for(int j = 0; j<=n-i; j++){
            std::cout << op;
        }
      std::cout << "\n";
     }
  
}


void printStarRightDown(int n,char op){
   for(int i = 0;i<=n;i++){
     for(int j = 0;j<=i;j++){
        std::cout << " ";
     }
     for(int k = 0; k<=n-i;k++){
       std::cout << op;
     }
     std::cout << "\n";
   }
}

void equilateralTriangle(int n,char op){
    for(int i = 0;i<=n;i++){
      for(int j = 0;j<=n-i;j++){
         std::cout << " ";
      }
      for(int k = 0;k <=2 * i; k++){
        std::cout << op;
      }
      std::cout << "\n";
    }
}


int main(){
    int num;
    char op;
    char name;
    std::cout << "Please enter number: ";
    std::cin >> num;
    std::cout << "Please enter sign (!,@,#,$,*): ";
    std::cin >> op;
    std::cout << "Please enter name (A,B,C,D,E): ";
    std::cin >> name;
    std::cout << "\n";
    switch(name){
      case 'A': printStarLeft(num,op);break;
      case 'B': printStarRight(num,op);break; 
      case 'C': printStarLeftDown(num,op);break;
      case 'D': printStarRightDown(num,op);break;
      default 'E': equilateralTriangle(num,op);
    }
   
}





