#include <iostream>

void UpperCase(char a){
     a = a-32;   
     std::cout << a <<"\n";
}

void LowerCase(char a){
    a = a+32;
    std::cout << a <<"\n";
}

bool isUpperCase(char a){
    if(a>=101 && a<=132){
      UpperCase(a);
      return 1;
     }else{
      LowerCase(a);
      return 0;
     }
}


int main(){ 
   char a;
   std::cout << "Enter name: ";
   std::cin >> a;
   std::cout << isUpperCase(a) <<"\n";
}
